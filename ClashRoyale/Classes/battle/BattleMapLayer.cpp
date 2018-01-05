//
//  BattleMapLayer.cpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#include "BattleMapLayer.hpp"

USING_NS_CC;

BattleMapLayer* BattleMapLayer::createBattleMapLayer(){
    BattleMapLayer* battleMapLayer = new (std::nothrow) BattleMapLayer();
    if (battleMapLayer && battleMapLayer->init()){
        battleMapLayer->autorelease();
        return battleMapLayer;
    }
    return nullptr;
}

bool BattleMapLayer::init(){
    if (!Node::init()){
        return false;
    }
    
    return true;
}
