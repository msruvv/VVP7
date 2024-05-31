#include <iostream>
#include "JsonService.h"

int main()
{
    setlocale(LC_ALL, "rus");
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.displayWeather();
}
