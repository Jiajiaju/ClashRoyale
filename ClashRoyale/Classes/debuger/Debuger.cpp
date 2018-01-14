//
//  Debuger.cpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 14/01/2018.
//

#include "Debuger.hpp"

#include <ctime>
#include <iostream>
#include <sstream>
#include <stdarg.h>
#include <stdlib.h>
#include <execinfo.h>

#include "Util.hpp"

bool Debuger::enableLog = true;
bool Debuger::enableLogFile = false;
bool Debuger::enableStackInfo = false;

void Debuger::log(const char *format, ...){
    
    if (enableLog == false){
        return;
    }
    std::string formatString = _getLocalFormatTimeString();
    if (enableStackInfo == true){
        std::string callerName = _getCallerName();
        if (callerName != ""){
            formatString += std::string("<") + callerName + std::string(">");
        }
    }
    formatString += std::string(format) + "\n";
    
    va_list arguments = nullptr;
    va_start(arguments, format);
    vprintf(formatString.c_str(), arguments);
    va_end(arguments);
    
}

std::string Debuger::_getCallerName(){
    int size = 16;
    void* array[16];
    int stackNum = backtrace(array, size);
    char** stacktrace = backtrace_symbols(array, stackNum);
    if (stackNum > 2){
        return stacktrace[2];
    }
    return "";
}

std::string Debuger::_getLocalFormatTimeString(){
    time_t nowTime;
    nowTime = time(nullptr);
    struct tm* localTime = nullptr;
    localTime = localtime(&nowTime);
    
    std::string yearString = intToString(localTime->tm_year + 1900);
    std::string monthString = localTime->tm_mon < 9 ? std::string("0") + intToString(localTime->tm_mon + 1) : intToString(localTime->tm_mon + 1);
    std::string dayString = localTime->tm_mday < 10 ? std::string("0") + intToString(localTime->tm_mday) : intToString(localTime->tm_mday);
    std::string hourString = localTime->tm_hour < 10 ? std::string("0") + intToString(localTime->tm_hour) : intToString(localTime->tm_hour);
    std::string minuteString = localTime->tm_min < 10 ? std::string("0") + intToString(localTime->tm_min) : intToString(localTime->tm_min);
    std::string secondString = localTime->tm_sec < 10 ? std::string("0") + intToString(localTime->tm_sec) : intToString(localTime->tm_sec);
    
//    char* dateString;
//    sprintf(dateString, "[%s-%s-%s %s:%s:%s]: ", yearString.c_str(), monthString.c_str(), dayString.c_str(), hourString.c_str(), minuteString.c_str(), secondString.c_str());
    std::string dateString = std::string("[") + yearString + "-" + monthString + "-" + dayString + " " + hourString + ":" + minuteString + ":" + secondString + "]: ";
    
    return dateString;
}
