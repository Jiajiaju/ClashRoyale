//
//  BattleManager.cpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#include "BattleManager.hpp"
#include "BattleScene.hpp"

using namespace clash_royale;
using namespace clash_royale::manager;
using namespace clash_royale::battle;

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
    
    __TestFunc();
}

void BattleManager::tick(float dt){
    for (auto iter = _characters.begin(); iter != _characters.end(); ++iter){
        (*iter)->tick(dt);
    }
}

void BattleManager::addToBattle(cocos2d::Node* battleEntity){
    _battlegroundLayer->addChild(battleEntity);
    _characters.push_back((Character*)battleEntity);
}

void BattleManager::addCharacter(Character* character){
    _battlegroundLayer->addChild((cocos2d::Node*)character->getAvatar());
    _characters.push_back(character);
}

void BattleManager::__TestFunc(){
    Character::createCharacter();
}
