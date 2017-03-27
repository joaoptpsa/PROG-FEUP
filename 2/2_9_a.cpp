#include <vector>
#include <iostream>


int main (){
	std::vector<int> v;
	int temp=1;
	int soma = 0, menor, maior;
	float media;

	while (temp != 0)
	{
		std::cin >> temp;
		v.push_back(temp);
	}

	menor = v[0];
	maior = v[0];

	for (unsigned int i=0; i<v.size()-1; i++) //ignorar o 0
	{
		if (menor > v[i])
			menor = v[i];
		if (maior < v[i])
			maior = v[i];

		soma+=v[i];

	}
	media = (float) soma /(v.size()-1);

	std::cout << "soma: " << soma << "; media: " << media << "; maior: " << maior << "; menor: " << menor << std::endl;
	std::cout << "Tamanho da sequencia: " << v.size()-1 << std::endl;

}