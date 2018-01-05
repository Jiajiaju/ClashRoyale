//
//  BattlegroundLayer.hpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#ifndef BattlegroundLayer_hpp
#define BattlegroundLayer_hpp

#include <stdio.h>
#include "cocos2d.h"

class BattlegroundLayer: public cocos2d::Node{
private:
public:
    
    static BattlegroundLayer* createBattlegroundLayer();
    
    virtual bool init();
};

#endif /* BattlegroundLayer_hpp */
