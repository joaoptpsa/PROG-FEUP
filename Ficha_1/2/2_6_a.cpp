#include <iostream>
#include <math.h>

int main()
{
	int n;
	bool primo=true;

	std::cout << "Introduza um numero n: ";
	std::cin >> n;

	if (n < 2)
		primo = false;

	for (int i = 2; i < sqrt(n) && primo; i++)
	{
		if (n%i == 0)
		{
			primo = false;
		}
	}

	std::cout << "O numero ";
	(primo) ? std::cout << "e' primo" << std::endl : std::cout << "nao e' primo" << std::endl;
	return 0;
}