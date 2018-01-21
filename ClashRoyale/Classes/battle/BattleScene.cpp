//
//  BattleScene.cpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/13.
//

#include "BattleScene.hpp"

USING_NS_CC;

using namespace clash_royale::battle;

BattleScene* BattleScene::createBattleScene(){
    BattleScene* scene = new (std::nothrow) BattleScene();
    if (scene && scene->init()){
        scene->autorelease();
        return scene;
    }
    return nullptr;
}

bool BattleScene::init(){
    if (!Scene::init()){
        return false;
    }
    
    return true;
}
