//
//  ConfigManager.cpp
//  ClashRoyale-mobile
//
//  Created by welove-jiajiaju on 19/01/2018.
//

#include "ConfigManager.hpp"

#include "ConfigFilePath.hpp"
#include "CSVParser.hpp"

#include <algorithm>
#include <cctype>

void ConfigManager::loadCharacterConfig(){
    print("ConfigManager::loadCharacterConfig");
    
    auto fileFullPath = cocos2d::FileUtils::getInstance()->fullPathForFilename(ConfigFilePath::CharacterConfig);
    std::string data = cocos2d::FileUtils::getInstance()->getStringFromFile(fileFullPath);
    std::vector<std::vector<std::string>> config = CSVParser::parse(data);
    
//    std::vector<std::string> fieldNames = config[0];
//    std::vector<std::string> fieldTypes = config[1];
//    for (int i = 0; i < fieldNames.size(); ++i){
//        std::string fieldName = fieldNames[i];
//        std::string fieldType = fieldTypes[i];
//
//        fieldType = fieldType == "boolean" ? "bool" : fieldType;
//        fieldType = fieldType == "string" ? "std::string" : fieldType;
//
//        if (fieldName.size() > 0){
//            std::transform(fieldName.begin(), fieldName.begin() + 1, fieldName.begin(), ::tolower);
//        }
//        std::cout << fieldType << " " << fieldName << ";" << std::endl;
//    }
    
//    for (auto iter = config.begin(); iter != config.end(); ++iter){
//        for (auto iterr = iter->begin(); iterr != iter->end(); ++iterr){
//            std::cout << (*iterr) << " | ";
//        }
//        std::cout << std::endl;
//    }
    
};
