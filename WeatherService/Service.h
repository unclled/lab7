#include <string>
#include "Weather.h"
#pragma once
class Service
{
public:
	virtual Weather getWeather(std::string s) = 0;
	virtual ~Service() {};
};

