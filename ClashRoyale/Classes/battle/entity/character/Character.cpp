//
//  Character.cpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 21/01/2018.
//

#include "Character.hpp"

#include "CharacterAnimator.hpp"
#include "GameManager.hpp"

using namespace clash_royale::battle;
using namespace clash_royale::manager;

Character* Character::createCharacter(){
    Character* newCharacter = new Character();
    newCharacter->init();
    return newCharacter;
}

void Character::init(){
//    _avatar = CharacterAnimator::createCharacterAnimator();
//    _avatar->setPosition(300, 900);
//    BattleManagerInstance->addCharacter(this);
}

void Character::destroy(){
    delete this;
}

Character::~Character(){
    delete _avatar;
}

void Character::tick(float dt){
//    CharacterAnimator* avatar = static_cast<CharacterAnimator*>(_avatar);
//    avatar->tick(dt);
}


