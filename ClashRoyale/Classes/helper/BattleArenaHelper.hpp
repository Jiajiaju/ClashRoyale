//
//  BattleArenaHelper.hpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/22.
//

#ifndef BattleArenaHelper_hpp
#define BattleArenaHelper_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "Singleton.hpp"

namespace clash_royale{
    namespace helper{
        
        enum class BattleArenaType{
            training
        };
        
        class BattleArenaHelper: public Singleton<BattleArenaHelper>{
        private:
        public:
            static cocos2d::Node* getBattleArenaMap(BattleArenaType arenaType);
        };
        
    }
}



#endif /* BattleArenaHelper_hpp */
