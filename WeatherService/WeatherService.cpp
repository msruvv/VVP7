#include <iostream>
#include "Service.h"
#include "Weather.h"
#include "XmlService.h"
#include <string>
#include "pugixml-1.14/src/pugixml.hpp"

using namespace pugi;

int main()
{
    setlocale(LC_ALL, "rus");
    XmlService xs;
    Weather w = xs.getWeather("weather.xml");

    w.displayWeather();
}