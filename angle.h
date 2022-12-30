
#include <iostream>
class Angle {
public:
    int minutes;
    int gradus;
    int minute;

    Angle();//Пустой конструктор

    Angle(int g, int m);//конструктор инициализации

    Angle(const Angle& copy);//конструктор копирования
    Angle(int gr);
    double GetRadians();
    double GetSinus();
    int Get_normnal();

    int display();


};

static Angle operator + (Angle c1, Angle c2)
{
    int a = c1.display() + c2.display();
    return Angle(a /60, a % 60);
}

static Angle operator - (Angle c1, Angle c2)
{
    int a = c1.display() - c2.display();
    return Angle(a / 60, (a / 60) % 360);
}

static bool operator > (Angle c1, Angle c2)
{
    if (c1.display() > c2.display()) {
        return true;
    }
    else {
        return false;
    }
}


static bool operator < (Angle c1, Angle c2)
{
    if (c1.display() < c2.display()) {
        return true;
    }
    else {
        return false;
    }
}