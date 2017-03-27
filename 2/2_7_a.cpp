#include <math.h>
#include <iostream>
#include <iomanip>

int main ()
{
	int ang;



	std::cout << std::fixed << std::setprecision (6) << std::setfill(' ');
	std::cout << "ang\tsen\tcos\ttan" << std::endl;

	for (ang = 0; ang <= 90; ang += 15)
	{
		std::cout << ang << "\t" << sin (ang*M_PI/180) << 
		std::setw (2) << cos (ang*M_PI/180) << 
		std::setw (2) << (tan(ang*M_PI/180)> 10000) ? "infinity" : tan(ang*M_PI/180) << std::endl;
	}
	return 0;
}