#include <iostream>

int main()
{
	double array[3], temp, min = 99999999, max = -999999;
	int i, j, iMin;

	for (i = 0; i < 3; i++)
	{
		std::cin >> array[i];

		if (array[i] < min) {
			min = array[i];
		}
		if (array[i] > max) {
			max = array[i];
		}
	}

	for (j = 0; j < 3 - 1; j++)
	{
		iMin = j;

		for (i = j + 1; i < 3; i++){
			if (array[i] < array[iMin]) {
				iMin = i;
			}
		}
		if (iMin != j) {
			temp = array[iMin];
			array[iMin] = array[j];
			array[j] = temp;
		}
	}

	for (i = 0; i < 3; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	if (array[0] + array[1] < array[2]) {
		std::cout << "Nao e' possivel construir um triangulo com estas medidas" << std::endl;
	}
	else {
		std::cout << "E' possivel construir um triangulo com estas medidas" << std::endl;
	}

}