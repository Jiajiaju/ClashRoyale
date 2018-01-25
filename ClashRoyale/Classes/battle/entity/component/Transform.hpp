//
//  Transform.hpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 25/01/2018.
//

#ifndef Transform_hpp
#define Transform_hpp

#include <stdio.h>

#include "Vector.hpp"

namespace clash_royale {
    namespace battle{
        class Transform{
        private:
        public:
            Vector force;
            Vector acceleration;
            
            float speed = 0.0;
            float angleSpeed = 0.0;
            
            Vector velocity;
            Vector position;
            
            Vector currentDirection;
            Vector targetDirection;
            
        };
    }
}

#endif /* Transform_hpp */
