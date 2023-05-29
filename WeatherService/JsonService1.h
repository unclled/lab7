#include "Service.h"
#include "Weather.h"
#include <fstream>
#pragma once
using namespace std;
class JsonService1 :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService1() {};
};

