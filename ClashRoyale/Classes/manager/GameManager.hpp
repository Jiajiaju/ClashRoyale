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

#include "BattleManager.hpp"

class GameManager: public Singleton<GameManager>{
private:
public:
    
    static BattleManager* battleManager;
    
    void prepareGame();
    void startupGame();
};

#define GameManagerInstance GameManager::getInstance()
#define BattleManagerInstance GameManager::getInstance()->battleManager

#endif /* GameManager_hpp */
