//
//  GameManager.cpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/12.
//

#include "GameManager.hpp"
#include "GameHelper.hpp"

#include "CRImport.hpp"

BattleManager* GameManager::battleManager = nullptr;
ConfigManager* GameManager::configManager = nullptr;

void GameManager::prepareGame(){
    GameHelper::getInstance()->init();
    
    configManager = ConfigManager::getInstance();
    battleManager = BattleManager::getInstance();
    
    configManager->loadCharacterConfig();
}

void GameManager::startupGame(){
    battleManager->prepareBattle();
    battleManager->startBattle();
}
