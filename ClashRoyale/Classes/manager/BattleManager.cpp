//
//  BattleManager.cpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#include "BattleManager.hpp"
#include "BattleScene.hpp"

void BattleManager::prepareBattle(){
    
}

void BattleManager::startBattle(){
    _battleScene = BattleScene::createBattleScene();
    _battleMapLayer = BattleMapLayer::createBattleMapLayer();
    _battlegroundLayer = BattlegroundLayer::createBattlegroundLayer();
    _battleUILayer = BattleUILayer::createBattleUILayer();
    
    _battleMapLayer->setPosition(0, 0);
    _battlegroundLayer->setPosition(0, 0);
    _battleUILayer->setPosition(0, 0);
    
    _battleScene->addChild(_battleMapLayer);
    _battleScene->addChild(_battlegroundLayer);
    _battleScene->addChild(_battleUILayer);
    
    cocos2d::Director::getInstance()->replaceScene(_battleScene);
}
