//
//  BattleUILayer.cpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#include "BattleUILayer.hpp"

USING_NS_CC;

using namespace clash_royale::battle;

BattleUILayer* BattleUILayer::createBattleUILayer(){
    BattleUILayer* battleUILayer = new (std::nothrow) BattleUILayer();
    if (battleUILayer && battleUILayer->init()){
        battleUILayer->autorelease();
        return battleUILayer;
    }
    return nullptr;
}

bool BattleUILayer::init(){
    if (!Node::init()){
        return false;
    }
    
    return true;
}
