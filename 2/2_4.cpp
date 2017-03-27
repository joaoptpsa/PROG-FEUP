#include <iostream>

int main()
{

	int peso;
	double temp, custo;

	std::cout << "Indique o peso(g) da sua mercadoria: ";
	std::cin >> peso;

	if (peso < 500){
		custo = 5;
	}
	else if (peso < 1000) {
		custo = 5;
		temp = peso - 500;
		temp /= 100;
		for (; temp > 0; temp--)
		{
			custo += 1.5;
		}
	}
	else if (peso > 1000) {
		custo = 12.5;
		temp = peso - 1000;
		temp /= 250;
		for (; temp > 0; temp--)
		{
			custo += 5;
		}
	}

	std::cout << "Custo: " << custo << std::endl;
}