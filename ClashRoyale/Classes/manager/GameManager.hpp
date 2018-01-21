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

namespace clash_royale {
    namespace manager{
        
        class GameManager: public Singleton<GameManager>{
        private:
        public:
            
            static BattleManager* battleManager;
            static ConfigManager* configManager;
            
            void prepareGame();
            void startupGame();
            
            void tick(float dt);
        };
        
#define GameManagerInstance clash_royale::manager::GameManager::getInstance()
#define BattleManagerInstance clash_royale::manager::GameManager::getInstance()->battleManager
#define ConfigManagerInstance clash_royale::manager::GameManager::getInstance()->configManager
        
    }
}


#endif /* GameManager_hpp */
