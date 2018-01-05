//
//  BattleManager.hpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#ifndef BattleManager_hpp
#define BattleManager_hpp

#include <stdio.h>
#include "Singleton.hpp"
#include "cocos2d.h"

#include "BattleScene.hpp"
#include "BattleMapLayer.hpp"
#include "BattlegroundLayer.hpp"
#include "BattleUILayer.hpp"

class BattleManager: public Singleton<BattleManager>{
private:
    
    BattleScene* _battleScene = nullptr;
    BattleMapLayer* _battleMapLayer = nullptr;
    BattlegroundLayer* _battlegroundLayer = nullptr;
    BattleUILayer* _battleUILayer = nullptr;
    
public:
    void prepareBattle();
    void startBattle();
};

#endif /* BattleManager_hpp */
