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
#include <vector>

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

inline std::vector<std::string> split(const std::string& source, char seperator){
    std::vector<std::string> result;
    unsigned long sourceSize = source.size();
    for (unsigned long index = 0; index < sourceSize; ++index){
        if (source[index] == seperator){
            std::cout << "OK!" << source[index];
        }
    }
    return result;
}

// todo
//inline std::vector<std::string> split(const std::string& source, const std::string& seperator){
//}

#endif /* Util_hpp */
