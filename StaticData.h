//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : 211506390
//  @ File Name : StaticData.h
//  @ Date : 2017/10/26
//  @ Author : xurisheng
//
//


#if !defined(_STATICDATA_H)
#define _STATICDATA_H
#define STATIC_DATA_FILENAME "static_data.plist"
#define STATIC_DATA_STRING(key) StaticData::sharedStaticData()->stringValueFromKey(key)
#define STATIC_DATA_INT(key) StaticData::sharedStaticData()->intValueFromKey(key)
#define STATIC_DATA_FlOAT(key) StaticData::sharedStaticData()->floatValueFromKey(key)
#define STATIC_DATA_BOOL(key) StaticData::sharedStaticData()->booleanFromKey(key)
#define STATIC_DATA_POINT(key) StaticData::sharedStaticData()->pointFromKey(key)
#define STATIC_DATA_RECT(key) StaticData::sharedStaticData()->rectFromKey(key)
#define STATIC_DATA_SIZE(key) StaticData::sharedStaticData()->sizeFromKey(key)

#include<string>
#include "cocos2d.h"
using namespace std;
using cocos2d::CCDictionary;
using cocos2d::CCPointFromString;
using cocos2d::CCRectFromString;
using cocos2d::CCSizeFromString;

class StaticData {
public:
	static StaticData* sharedStaticData();
	static void purge();
	int intValueForKey(const std::string &key);
	cont char* stringValueFromKey(const std::string &key);
	float floatValueFromKey(const std::string &key);
	bool booleanFromKey(const std::string &key);
	cocos2d::CCPoint pointFromKey(const std::string &key);
	cocos2d::CCRect rectFromKey(const std::string &key);
	cocos2d::CCSize sizeFormKey(const std::string &key);
protected:
	cocos2d::CCDictionary* _dictionary;
	std::string _staticFileName;
	bool init();
private:
	~StaticData();
	StaticData();
};

#endif  //_STATICDATA_H