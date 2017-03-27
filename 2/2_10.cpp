#include <iostream>
#include <vector>

bool capicua (std::vector<int> dig)
{
	for (unsigned int i=0; i<(dig.size()/2); i++)
	{
		if (dig[i] != dig[dig.size()-1-i])
			return false;
	}
	return true;
}


int main (void)
{
	std::vector<int> dig;
	int num;

	std::cout << "Digite numero: ";
	std::cin >> num;

	for (; num>0; num /=10)
	{
		dig.push_back(num%10);
	}

	if (capicua(dig))
		std::cout << "Numero capicua" << std::endl;
	else
		std::cout << "Numero NAO capicua" << std::endl;

	return 0;

}