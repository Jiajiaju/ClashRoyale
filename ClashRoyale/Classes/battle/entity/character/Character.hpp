//
//  Character.hpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 21/01/2018.
//

#ifndef Character_hpp
#define Character_hpp

#include <stdio.h>

#include "CRImport.hpp"
#include "Entity.hpp"

namespace clash_royale{
    namespace battle{
        
        class CharacterAnimator;
        
        class Character: public Entity{
        private:
        public:
            ~Character();
            void destroy();
            
            static Character* createCharacter();
            
            CharacterAnimator* getAvatar(){ return (CharacterAnimator*)_avatar; }
            
            void init();
            void tick(float dt);
        };
        
    }
}


#endif /* Character_hpp */
