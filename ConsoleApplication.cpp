#include <iostream>
#include "Angle.h"

int main() {
	Angle a = Angle(12, 42);
	Angle b = Angle();
	Angle test1 = Angle(11);
	std::cout << test1.display() << std::endl;
	std::cout << a.GetSinus() << std::endl;
	std::cout << b.GetRadians() << std::endl;
	Angle d = a;
	std::cout << a.GetSinus() << std::endl;
	std::cout << d.GetSinus()<<std::endl;
	std::cout << a.display()<<std::endl;
	Angle e = Angle(10, 10);
	Angle f = Angle(10, 90);
	Angle c1 = e + f;
	std::cout << c1.gradus << std::endl;
	std::cout << c1.minute << std::endl;
	return 0;
}