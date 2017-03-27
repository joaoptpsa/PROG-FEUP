#include <iostream>
#include <math.h>

int main()
{
	const float pi = 3.14;
	float M, p, r;

	std::cout << "p (Kg/m^3): ";
	std::cin >> p;

	std::cout << "r (m): ";
	std::cin >> r;

	M = (4 / 3.0)*pi*p*pow(r, 3.0);
	std::cout << "M =" << M << std::endl;

	return 0;
}