//
//  Entity.hpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 21/01/2018.
//

#ifndef Entity_hpp
#define Entity_hpp

#include <stdio.h>
#include "cocos2d.h"

namespace clash_royale {
    namespace battle{
        
        class Entity{
        private:
        protected:
            cocos2d::Node* _avatar = nullptr;
        public:
            virtual ~Entity() = 0;
        };
        
    }
}

#endif /* Entity_hpp */
