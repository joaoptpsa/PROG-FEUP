#include <iostream>

int main()
{
	float a, b, c, d, e, f;
	float x, y;

	std::cout << "Introduza os numeros a, b, c, e, f por ordem" << std::endl;
	std::cin >> a >> b >> c >> d >> e >> f;

	x = (c*e - b*f) / (a*e - b*d);
	y = (a*f - c*d) / (a*e - b*d);

	std::cout << "x =" << x << "\n" << "y =" << y << std::endl;

	return 0;
}