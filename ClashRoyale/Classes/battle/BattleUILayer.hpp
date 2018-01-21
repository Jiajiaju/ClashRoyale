//
//  BattleUILayer.hpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#ifndef BattleUILayer_hpp
#define BattleUILayer_hpp

#include <stdio.h>
#include "cocos2d.h"

namespace clash_royale {
    namespace battle{
        
        class BattleUILayer: public cocos2d::Node{
        private:
        public:
            static BattleUILayer* createBattleUILayer();
            
            virtual bool init();
        };

    }
}

#endif /* BattleUILayer_hpp */
