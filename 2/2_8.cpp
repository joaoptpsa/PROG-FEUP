#include <iostream>

int main ()
{
	int n;
	float q, j;

	std::cout << "Especifique a quantidade de anos, a quantia e a taxa de juros anual" << std::endl ;
	std::cin >> n >> q >> j;

	j /= 100;

	for (int i=0; i<n; i++)
	{
		q = q + q*j;
	}

	std::cout << "Podera levantar " << q << std::endl;


	return 0;
}