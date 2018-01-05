//
//  Singleton.hpp
//  ClashRoyale-mobile
//
//  Created by weilove-jiajiaju on 2017/11/12.
//

#ifndef Singleton_hpp
#define Singleton_hpp

#include <stdio.h>

template <typename Class>
class Singleton {
private:
    
    Singleton(const Singleton& singleton){}
    Singleton& operator= (const Singleton& singleton){}
    static Class* _instancePointer;
    
protected:
    Singleton(){}
    ~Singleton(){
        delete _instancePointer;
    }
public:
    static Class* getInstance(){
        if (_instancePointer == nullptr){
            _instancePointer = new (std::nothrow) Class();
            assert(_instancePointer != nullptr);
            return _instancePointer;
        }
        return _instancePointer;
    }
};

template <typename Class>
Class* Singleton<Class>::_instancePointer = nullptr;

#endif /* Singleton_hpp */
