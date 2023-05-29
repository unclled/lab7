#include "Service.h"
#include "Weather.h"
#include "pugixml.hpp"
#pragma once
using namespace std;
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};


