//
//  GameHelper.hpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/12.
//

#ifndef GameHelper_hpp
#define GameHelper_hpp

#include <stdio.h>
#include "Singleton.hpp"
#include "cocos2d.h"

namespace clash_royale{
    namespace helper{
        
        class GameHelper: public Singleton<GameHelper>{
        private:
        public:
            void init();
        };
        
    }
}



#endif /* GameHelper_hpp */
