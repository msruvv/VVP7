#include "Weather.h"

void Weather::displayWeather()
{
    cout << "Погода в " << city << ": " << endl;
    cout << "Координаты: " << lat << ", " << lon << endl;
    cout << "Температура: " << temperature << "°C" << endl;
    cout << "Погода: " << weather << endl;
    cout << "Скорость ветра: " << windSpeed << " м/с" << endl;
    cout << "Облачность: " << clouds << "%" << endl;
}
