#include <iostream>
#include "JsonService.h"
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
    setlocale(LC_ALL, "rus");
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.displayWeather();
}
