//
//  CharacterAnimator.cpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 21/01/2018.
//

#include "CharacterAnimator.hpp"

#include "CRImport.hpp"

USING_NS_CC;

using namespace clash_royale::battle;

CharacterAnimator* CharacterAnimator::createCharacterAnimator(){
    CharacterAnimator* animator = new (std::nothrow) CharacterAnimator();
    if (animator && animator->init()){
        return animator;
    }
    delete animator;
    animator = nullptr;
    return nullptr;
}

bool CharacterAnimator::init(){
    if (!Node::init()){
        return false;
    }
    
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("res/battle/character/musketter.plist");
    
    _sprite = Sprite::create();
    this->addChild(_sprite);
    
    return true;
}

void CharacterAnimator::tick(float dt){
    
    _frameTimer += dt;
    
    float frameInterval = 1.0 / clash_royale::AnimationFrameRate;
    if (_frameTimer >= frameInterval){
        _frameTimer = _frameTimer - frameInterval;
        
        std::string frameIndexString;
        //    print("CharacterAnimator::tick %d", _frameIndex);
        if (_frameIndex < 10){
            frameIndexString = std::string("00") + intToString(_frameIndex);
        }else if (_frameIndex < 100){
            frameIndexString = std::string("0") + intToString(_frameIndex);
        }else {
            frameIndexString = intToString(_frameIndex);
        }
        
        std::string frameName = std::string("chr_musketeer_sprite_") + frameIndexString + ".png";
        _sprite->setSpriteFrame(frameName);
        ++_frameIndex;
        if (_frameIndex > 413){
            _frameIndex = 0;
        }
    }
    
}

