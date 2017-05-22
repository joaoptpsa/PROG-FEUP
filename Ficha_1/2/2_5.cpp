#include <iostream>
#include <math.h>

int main()
{
	double a, b, c, delta, reais[2], complex[2] = { };

	std::cout << "Introduza os coeficientes (a b c): ";
	std::cin >> a >> b >> c;

	delta = pow(b, 2) - 4*a*c;

	if (delta > 0) /*possivel com duas raizes reais distintas*/
	{ 
		reais[0] = (-b + sqrt(delta)) / (2 * a);
		reais[1] = (-b - sqrt(delta)) / (2 * a);
		std::cout << "A equacao tem 2 raizes reais distintas: "<< reais[0] << " e " << reais[1] << std::endl;
	}
	else if (delta == 0) /*possivel com duas raizes reais iguais*/
	{
		reais[0] = -b / (2 * a);
		reais[1] = reais[0];
		std::cout << "A equacao tem 2 raizes reais iguais: "<< reais[0] << std::endl;
	}
	else if (delta < 0) /*duas raizes complexas distintas*/
	{
		reais[0] = -b / (2 * a);
		reais[1] = reais[0];

		complex[0] = sqrt((4 * a*c) - pow(b, 2)) / (2 * a);
		complex[1] = -complex[0];
		std::cout << "A equacao tem 2 raizes complexas conjugadas: " << reais[0] << " " << complex[0] << "i e " << reais[1] << " " << complex[1] << std::endl;
	}
}