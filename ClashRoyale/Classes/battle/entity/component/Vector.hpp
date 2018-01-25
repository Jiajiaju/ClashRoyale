//
//  Vector.hpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 25/01/2018.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <stdio.h>

namespace clash_royale{
    namespace battle{
        class Vector{
            
        private:
            
        public:
            
            float x = 0.0;
            float y = 0.0;
            
            Vector(): x(0.00), y(0.00) {}
            Vector(float xx, float yy): x(xx), y(yy) {}
        };
    }
}

#endif /* Vector_hpp */
