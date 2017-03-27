#include <iostream>
#include <vector>

int main()
{
	int i;
	float media=0;

	std::vector<int> num(3); //makes room for 3 integers and initializes them to 0

	for (i = 0; i < num.capacity(); i++)
	{
		std::cout << "Insira o " << i+1 << "o numero: ";
		std::cin >> num[i];
		media += num[i];
	}

	media /= 3;

	std::cout << "media: " << media << std::endl;
	for (i = 0; i < num.size(); i++)
	{
		std::cout << i << ": " << num[i] - media << std::endl;
	}

	return 0;
}