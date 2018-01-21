//
//  GameManager.cpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/12.
//

#include "GameManager.hpp"
#include "GameHelper.hpp"

#include "CRImport.hpp"

using namespace clash_royale;
using namespace clash_royale::manager;
using namespace clash_royale::helper;

BattleManager* GameManager::battleManager = nullptr;
ConfigManager* GameManager::configManager = nullptr;

void GameManager::prepareGame(){
    GameHelper::getInstance()->init();
    
    configManager = ConfigManager::getInstance();
    battleManager = BattleManager::getInstance();
    
    configManager->loadCharacterConfig();
    
    cocos2d::Director::getInstance()->getScheduler()->schedule([this](float dt){
        this->tick(dt);
    }, cocos2d::Director::getInstance(), 0, false, "global_tick");
    
}

void GameManager::startupGame(){
    battleManager->prepareBattle();
    battleManager->startBattle();
}

void GameManager::tick(float dt){
    battleManager->tick(dt);
}
