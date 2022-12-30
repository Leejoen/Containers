#include "Angle.h"
#include "math.h"
 Angle ::Angle() {//ѕустой конструктор
    gradus = 1;
    minute = 2;
    minutes = minute * 60 + gradus;
}

Angle::Angle(int g, int m)//конструктор инициализации
{
    gradus = g;
    minute = m;
    minutes = gradus * 60 + minute;
}
Angle::Angle(const Angle& copy) {//конструктор копировани€
    minute = copy.minute;
    gradus = copy.gradus;
    minutes = copy.minutes;
}Angle::Angle(int gr) : Angle(gr, 120)// онструктор наследовани€
{
    gradus = gr;
}
double Angle::GetRadians()
{
    return minutes / 60 * 3.14 / 180.0;
}
double Angle:: GetSinus()
{
    return sin(GetRadians());
}
int Angle::Get_normnal()
{
    return (minutes / 60) % 360;
}
int Angle::display() {
          return minutes;
}