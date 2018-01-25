//
//  Entity.cpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 21/01/2018.
//

#include "Entity.hpp"

using namespace clash_royale::battle;

Entity::~Entity(){
    
}

void Entity::initBaseProperty(clash_royale::battle::Physics basePhysice, clash_royale::battle::Transform baseTransform){
    physics = basePhysice;
    transform = baseTransform;
    _puppet = Puppet::createPuppet(this);
}
