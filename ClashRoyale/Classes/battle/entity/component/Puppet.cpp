//
//  Puppet.cpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 25/01/2018.
//

#include "Puppet.hpp"

#include "Entity.hpp"

USING_NS_CC;
using namespace clash_royale::battle;

Puppet* Puppet::createPuppet(clash_royale::battle::Entity *owner){
    Puppet* puppet = new (std::nothrow) Puppet(owner);
    if (puppet && puppet->init()){
        return puppet;
    }
    delete puppet;
    puppet = nullptr;
    return nullptr;
}

bool Puppet::init(){
    if (!Node::init()){
        return false;
    }
    
    _drawNode = DrawNode::create();
    this->addChild(_drawNode);
    _drawNode->setLineWidth(3);
    _drawNode->drawCircle(Vec2(0, 0), _owner->physics.radius, 360, 500, false, 1, 1, Color4F(0, 0, 0, 1));
    
    return true;
}
