//
//  GameManager.hpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/12.
//

#ifndef GameManager_hpp
#define GameManager_hpp

#include <stdio.h>
#include "Singleton.hpp"

#include "cocos2d.h"

#include "ConfigManager.hpp"
#include "BattleManager.hpp"

class GameManager: public Singleton<GameManager>{
private:
public:
    
    static BattleManager* battleManager;
    static ConfigManager* configManager;
    
    void prepareGame();
    void startupGame();
};

#define GameManagerInstance GameManager::getInstance()
#define BattleManagerInstance GameManager::getInstance()->battleManager
#define ConfigManagerInstance GameManager::getInstance()->configManager

#endif /* GameManager_hpp */
