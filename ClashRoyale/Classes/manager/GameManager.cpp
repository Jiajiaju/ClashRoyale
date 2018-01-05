//
//  GameManager.cpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/12.
//

#include "GameManager.hpp"
#include "GameHelper.hpp"

BattleManager* GameManager::battleManager = nullptr;

void GameManager::prepareGame(){
    GameHelper::getInstance()->init();
    
    battleManager = BattleManager::getInstance();
}

void GameManager::startupGame(){
    battleManager->prepareBattle();
    battleManager->startBattle();
}
