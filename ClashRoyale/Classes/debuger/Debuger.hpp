//
//  Debuger.hpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 14/01/2018.
//

#ifndef Debuger_hpp
#define Debuger_hpp

#include <stdio.h>
#include <Singleton.hpp>

#include <cocos2d.h>

class Debuger: public Singleton<Debuger>{
private:
    
    static std::string _getLocalFormatTimeString();
    static std::string _getCallerName();
    
public:
    
    static bool enableLog;
    static bool enableLogFile;
    static bool enableStackInfo;
    
    static void log(const char* format, ...);
    
};

//#define CCLOG(format, ...)      cocos2d::log(format, ##__VA_ARGS__)

//#define print(format, ...) (Debuger::getInstance()->log)(format, ##__VA_ARGS__)
#define print Debuger::getInstance()->log

#endif /* Debuger_hpp */
