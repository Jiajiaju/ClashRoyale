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

#include "Physics.hpp"
#include "Transform.hpp"
#include "Combat.hpp"

#include "Puppet.hpp"

namespace clash_royale {
    namespace battle{
        
        class Entity{
        private:
        protected:
            cocos2d::Node* _avatar = nullptr;
            Puppet* _puppet = nullptr;
        public:
            virtual ~Entity() = 0;
            
            Physics physics;
            Transform transform;
            
            Puppet* getPuppet(){ return _puppet; }
            
            void initBaseProperty(Physics basePhysice, Transform baseTransform);
        };
        
    }
}

#endif /* Entity_hpp */
