#include "Weather.h"

void Weather::displayWeather()
{
    cout << "������ � " << city << ": " << endl;
    cout << "����������: " << lat << ", " << lon << endl;
    cout << "�����������: " << temperature << "�C" << endl;
    cout << "������: " << weather << endl;
    cout << "�������� �����: " << windSpeed << " �/�" << endl;
    cout << "����������: " << clouds << "%" << endl;
}
