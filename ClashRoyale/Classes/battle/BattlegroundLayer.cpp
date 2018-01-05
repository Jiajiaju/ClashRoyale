//
//  BattlegroundLayer.cpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#include "BattlegroundLayer.hpp"

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
    
    auto test = Sprite::create("res/design.png");
    test->setPosition(visibleSize.width / 2, 410);
    test->setAnchorPoint(Vec2(0.5, 0));
    //    test->setScale(1.13);
    this->addChild(test);
    
    auto drawNode = DrawNode::create();
    this->addChild(drawNode);
    drawNode->setLineWidth(1);
    
    float startX = 65;
    float startY = 410;
    int width = 23;
    int height = 18;
    
    for (int i = 0; i <= 36; ++i){
        drawNode->drawLine(Vec2(startX + i * width, 0), Vec2(startX + i * width, visibleSize.height), Color4F(1, 1, 1, 1));
    }
    
    for (int i = 0; i <= 64; ++i){
        drawNode->drawLine(Vec2(0, startY + i * height), Vec2(visibleSize.width, startY + i * height), Color4F(1, 1, 1, 1));
    }
    
    return true;
}
