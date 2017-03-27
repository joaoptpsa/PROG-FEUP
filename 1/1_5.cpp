#include <iostream>

int main()
{
	int tempo[2][3], res[4] = {}; // res[4] = {} para alem de declarar o array tambem o inicializa
	int i;

	for (i = 0; i < 2; i++)
	{
		std::cout << "Tempo " << i + 1 << "(horas minutos segundos) ? ";
		std::cin >> tempo[i][2] >> tempo[i][1] >> tempo[i][0];
	}

	for (i = 0; i < 3; i++)
	{
		res[i] += tempo[0][i] + tempo[1][i];

		/*Preparar o carry do prox elemento*/
		if ((res[i] >= 60) && (i<2))
		{
			res[i] -= 60;
			res[i + 1]++;
		}
		else if ((res[2] > 24) && (i == 2))
		{
			res[i] -= 24;
			res[i + 1]++;
		}
	}

	std::cout << "Soma dos tempos: " << res[3] << " dia, " << res[2] << " horas, " << res[1] << " minutos e " << res[0] << "segundos";

	return 0;
}