//
//  CharacterAnimator.hpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 21/01/2018.
//

#ifndef CharacterAnimator_hpp
#define CharacterAnimator_hpp

#include <stdio.h>

#include "cocos2d.h"

namespace clash_royale {
    namespace battle{
        
        class CharacterAnimator: public cocos2d::Node{
        private:
            int _frameIndex = 0;
            float _frameTimer = 0;
            cocos2d::Sprite* _sprite;
            
        public:
            static CharacterAnimator* createCharacterAnimator();
            
            virtual bool init();
            
            void tick(float dt);
        };
        
    }
}

#endif /* CharacterAnimator_hpp */
