#include <iostream>
<<<<<<< HEAD
#include "Weather.h"
#include "JsonService.h"
int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
=======
#include "XMLService.h"

int main()
{
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
>>>>>>> feature-xml
}