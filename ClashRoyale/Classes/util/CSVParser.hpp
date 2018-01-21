//
//  CSVParser.hpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 20/01/2018.
//

#ifndef CSVParser_hpp
#define CSVParser_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <map>

class CSVParser{
private:
    
    static std::vector<std::string> _split(const std::string& source, char seperator){
        std::vector<std::string> result;
        unsigned long sourceSize = source.size();
        unsigned long subLength = 0;
        unsigned long lastStart = 0;
        for (unsigned long index = 0; index < sourceSize; ++index){
            if (source[index] == seperator){
                result.push_back(source.substr(lastStart, subLength));
                subLength = 0;
                lastStart = index + 1;
                continue;
            }
            ++subLength;
        }
        return result;
    }
    
public:
    static std::vector<std::vector<std::string>> parse(const char* dataString){
        return parse(std::string(dataString));
    }
    
    static std::vector<std::vector<std::string>> parse(const std::string& dataString){
        std::vector<std::vector<std::string>> result;
        
        std::vector<std::string> rows = _split(dataString, '\n');
        for (auto rowsIter = rows.begin(); rowsIter != rows.end(); ++rowsIter){
            std::vector<std::string> row = _split((*rowsIter), ',');
            for (auto rowIter = row.begin(); rowIter != row.end(); ++rowIter){
                if (rowIter->size() > 0){
                    if ((*rowIter)[0] == '"' && (*rowIter)[rowIter->size() - 1] == '"'){
                        (*rowIter) = (*rowIter).substr(1, rowIter->size() - 2);
                    }
                }
            }
            result.push_back(row);
        }
        
        return result;
    }
};

#endif /* CSVParser_hpp */
