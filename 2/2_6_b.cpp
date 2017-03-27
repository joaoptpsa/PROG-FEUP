#include <iostream>
#include <math.h>


bool check_prime (int n)
{
	if (n<2)
		return false;

	for (int i = 2; i < sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}

	return true;
}


int main()
{
	int n=2, primos;

	for (primos = 0; primos < 100; primos++)
	{
		for (; !check_prime (n); n++)
		{
		}
		std::cout << n << " ";
		n++;
	}
	return 0;
}