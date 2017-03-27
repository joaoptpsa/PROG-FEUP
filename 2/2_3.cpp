#include <iostream>

int main()
{
	char operacao;
	double num[2], res;

	std::cout << "Indique um numero, a operacao (+,-,*,/) e o segundo numero" << std::endl;
	std::cin >> num[0] >> operacao >> num[1];

	switch (operacao) {
	case '+':
		res = num[0] + num[1];
		break;
	case '-':
		res = num[0] - num[1];
		break;
	case '*':
		res = num[0] * num[1];
		break;
	case '/':
		res = num[0] / num[1];
		break;
	default:
		break;
	}

	std::cout << num[0] << operacao << num[1] << "=" << res << std::endl;

}