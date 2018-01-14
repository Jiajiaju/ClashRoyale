//
//  Util.hpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 14/01/2018.
//

#ifndef Util_hpp
#define Util_hpp

#include <stdio.h>
#include <iostream>
#include <string>

inline int stringToInt(const std::string& str){
    return atoi(str.c_str());
}

inline int stringToInt(const char* str){
    return atoi(str);
}

inline std::string intToString(int number){
    std::stringstream newStr;
    newStr << number;
    return newStr.str();
}

#endif /* Util_hpp */
