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

#include "Character.hpp"

namespace clash_royale {
    namespace manager{
        
        class BattleManager: public Singleton<BattleManager>{
        private:
            
            void __TestFunc();
            
            battle::BattleScene* _battleScene = nullptr;
            battle::BattleMapLayer* _battleMapLayer = nullptr;
            battle::BattlegroundLayer* _battlegroundLayer = nullptr;
            battle::BattleUILayer* _battleUILayer = nullptr;
            
            std::vector<clash_royale::battle::Character*> _characters;
            
        public:
            void prepareBattle();
            void startBattle();
            
            void tick(float dt);
            
            void addToBattle(cocos2d::Node* battleEntity);
            void addCharacter(clash_royale::battle::Character* character);
        };
        
    }
}



#endif /* BattleManager_hpp */
