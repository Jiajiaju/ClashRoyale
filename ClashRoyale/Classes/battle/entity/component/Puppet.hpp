//
//  Puppet.hpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 25/01/2018.
//

#ifndef Puppet_hpp
#define Puppet_hpp

#include <stdio.h>
#include "cocos2d.h"

namespace clash_royale {
    namespace battle{
        
        class Entity;
        
        class Puppet: public cocos2d::Node{
            
        private:
        protected:
            Entity* _owner = nullptr;
            cocos2d::DrawNode* _drawNode = nullptr;
        public:
            static Puppet* createPuppet(Entity* owner);
            Puppet(Entity* owner): _owner(owner) {}
            
            virtual bool init();
        };
        
    }
}

#endif /* Puppet_hpp */
