#include <vector>
#include <iostream>


int main (){
	unsigned int i;
	int temp;
	int soma = 0, menor, maior;
	float media;
	std::vector<int> v;

	while (std::cin >> temp){
		v.push_back(temp);
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