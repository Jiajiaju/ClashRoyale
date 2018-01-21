//
//  ConfigManager.hpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 19/01/2018.
//

#ifndef ConfigManager_hpp
#define ConfigManager_hpp

#include <stdio.h>

#include "CRImport.hpp"

namespace clash_royale{
    namespace manager{
        
        class ConfigManager: public Singleton<ConfigManager>{
        private:
            
        public:
            
            static void loadCharacterConfig();
        };
        
    }
}

#endif /* ConfigManager_hpp */
