#include <iostream>
#include <math.h>

double round(double x, unsigned n){
	return floor(x* pow(10,n)+0.5)/pow(10,n);
}


int main (){

	double num;
	int n;

	std::cout << "Introduza o numero em virgula flutuante e o numero de casas decimais para as quais pretende arredondar.\n";
	std::cin >> num >> n;

	std::cout << round (num, n) << std::endl;

}