//
//  BattlegroundLayer.cpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#include "BattlegroundLayer.hpp"

#include "CRImport.hpp"

USING_NS_CC;

BattlegroundLayer* BattlegroundLayer::createBattlegroundLayer(){
    BattlegroundLayer* battlegroundLayer = new (std::nothrow) BattlegroundLayer();
    if (battlegroundLayer && battlegroundLayer->init()){
        battlegroundLayer->autorelease();
        return battlegroundLayer;
    }
    return nullptr;
}

bool BattlegroundLayer::init(){
    if (!Node::init()){
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    std::map<int, std::string> sourceInfo;
    
    auto tmxInfo = TMXMapInfo::create("res/battle/arena/training/map.tmx");
    
    auto tileset = tmxInfo->getTilesets();
    for (auto iter = tileset.begin(); iter != tileset.end(); ++iter){
//        print("%d, %s", (*iter)->_firstGid, (*iter)->_originSourceImage.c_str());
        sourceInfo[(*iter)->_firstGid] = (*iter)->_originSourceImage;
    }
    
    
    
    auto objectGroups = tmxInfo->getObjectGroups();
    TMXObjectGroup* mapInfo = nullptr;
    for (auto iter = objectGroups.begin(); iter != objectGroups.end(); ++iter){
        if ((*iter)->getGroupName() == "map"){
            mapInfo = (*iter);
            break;
        }
    }
    
    ValueVector mapObjects = mapInfo->getObjects();
    for (auto iter = mapObjects.begin(); iter != mapObjects.end(); ++iter){
        ValueMap objectValueMap = iter->asValueMap();
        std::string sourceName = sourceInfo[objectValueMap["gid"].asInt()];
//        print("gid: %d, %s, (%f, %f)", objectValueMap["gid"].asInt(), sourceName.c_str(), objectValueMap["x"].asFloat(), objectValueMap["y"].asFloat());
        auto mapElement = Sprite::create(std::string("res/battle/arena/training/") + sourceName);
        auto elementSize = mapElement->getContentSize();
        mapElement->setAnchorPoint(Vec2(0, 0));
        mapElement->setPosition(objectValueMap["x"].asFloat(), objectValueMap["y"].asFloat() + elementSize.height);
        this->addChild(mapElement);
    }
    
    auto drawNode = DrawNode::create();
    this->addChild(drawNode);
    drawNode->setLineWidth(1);
    
    float startX = 65;
    float startY = 410;
    int width = 23;
    int height = 18;
    
    for (int i = 0; i <= 36; ++i){
        drawNode->drawLine(Vec2(startX + i * width, 0), Vec2(startX + i * width, visibleSize.height), Color4F(1, 1, 1, 0.3));
    }
    
    for (int i = 0; i <= 64; ++i){
        drawNode->drawLine(Vec2(0, startY + i * height), Vec2(visibleSize.width, startY + i * height), Color4F(1, 1, 1, 0.3));
    }
    
    return true;
}
