//
//  BattleMapLayer.hpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#ifndef BattleMapLayer_hpp
#define BattleMapLayer_hpp

#include <stdio.h>
#include "cocos2d.h"

namespace clash_royale{
    namespace battle{
        
        class BattleMapLayer: public cocos2d::Node{
        private:
        public:
            static BattleMapLayer* createBattleMapLayer();
            
            virtual bool init();
        };
        
    }
}



#endif /* BattleMapLayer_hpp */
