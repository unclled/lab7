#include <iostream>
#include "XMLService.h"

int main()
{
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
}