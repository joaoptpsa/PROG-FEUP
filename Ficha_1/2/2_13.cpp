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


int main(){

	int n, j, i;

	std::cout << "Introduza um numero"<< std::endl;
	std::cin >> n;

	std::cout << n << "=";

	for(j=0; n>1; j++){
		if(j!=0){
			std::cout << "x";
		}
		for (i=2; !(check_prime(i) && n%i==0); i++){

		}
		n /= i;
		std::cout << i;

	}

	std::cout<<std::endl;

	return 0;
}