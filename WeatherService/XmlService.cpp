#include "XmlService.h"
#include "pugixml-1.14/src/pugixml.hpp"

using namespace pugi;

Weather XmlService::getWeather(std::string s)
{
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());
    if (!result)
        throw exception("error");
    xml_node node = doc.child("current");
    std::string city = node.child("city").
        attribute("name").
        as_string(); //  �����
    double lon = node.child("city").child("coord").
        attribute("lon").
        as_int(); // 49.6601
    double lat = node.child("city").child("coord").attribute("lat").as_double(); // 44.34
    double temperature = node.child("temperature").
        attribute("value").
        as_double(); // 5.69
    std::string weather = node.child("weather").attribute("value").as_string(); // moderate rain
    double windSpeed = node.child("wind").child("speed").attribute("value").as_double(); // 0.62
    int clouds = node.child("clouds").attribute("value").as_int(); // 100

    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}