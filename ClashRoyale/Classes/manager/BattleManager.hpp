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

namespace clash_royale {
    namespace manager{
        
        class BattleManager: public Singleton<BattleManager>{
        private:
            
            battle::BattleScene* _battleScene = nullptr;
            battle::BattleMapLayer* _battleMapLayer = nullptr;
            battle::BattlegroundLayer* _battlegroundLayer = nullptr;
            battle::BattleUILayer* _battleUILayer = nullptr;
            
        public:
            void prepareBattle();
            void startBattle();
        };
        
    }
}



#endif /* BattleManager_hpp */
