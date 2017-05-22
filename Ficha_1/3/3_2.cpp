#include <iostream>
#include <math.h> 

bool isPrime (int n) 
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
	int n=2;

	for (; n < 10000; n++)
	{
		if (check_prime(n))
			std::cout << n << " ";
	}
	std::cout << std::endl;
	return 0;
}