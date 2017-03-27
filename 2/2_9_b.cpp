#include <vector>
#include <iostream>


int main (){
	unsigned int i;
	int size;
	int soma = 0, menor, maior;
	float media;

	std::cout << "Qual o tamanho da sequencia ?" << std::endl;
	std::cin >> size;

	std::vector<int> v (size);

	for (i=0; i<v.size(); i++)
	{
		std::cin >> v[i];
	}

	menor = v[0];
	maior = v[0];

	for (i=0; i<v.size(); i++) //ignorar o 0
	{
		if (menor > v[i])
			menor = v[i];
		if (maior < v[i])
			maior = v[i];

		soma+=v[i];

	}
	media = (float) soma /(v.size());

	std::cout << "soma: " << soma << "; media: " << media << "; maior: " << maior << "; menor: " << menor << std::endl;
	std::cout << "Tamanho da sequencia: " << v.size() << std::endl;

}