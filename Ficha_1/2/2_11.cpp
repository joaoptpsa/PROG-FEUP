#include <iostream>
#include <math.h>

float series_pi (int n)
{
	float soma = 0;
	int plus_minus = +1;

	for (int i=0; i<n; i++)
	{
		soma = soma + plus_minus* (4.0 /(1+i*2));
		plus_minus *=-1;
	}
	return soma;
}

float series_e (int n)
{
	float soma = 0;
	unsigned long int denum = 1;

	for (int i=0; i<n; i++)
	{
		soma = soma + (1.0 /denum);
		denum *= (i+1);
	}
	return soma;
}

float series_ex (int n, float x)
{
	int plus_minus = +1;
	float soma = 0;
	unsigned long int denum = 1;

	for (int i=0; i<n; i++)
	{
		soma = soma + plus_minus* (pow(x,i)/denum);
		denum *= (i+1);
		plus_minus *= -1;
	}
	return soma;
}
int main(void)
{
	int n;
	float x;

	std::cout << "Quantos termos? " << std::endl;
	std::cin >> n;

	std::cout << "Qual o valor de x? " << std::endl;
	std::cin >> x;


	std::cout << "A soma da serie a) e': " << series_pi (n) << std::endl;
	std::cout << "A soma da serie b) e': " << series_e (n) << std::endl;
	std::cout << "A soma da serie c) e': " << series_ex (n, x) << std::endl;

	return 0;
}