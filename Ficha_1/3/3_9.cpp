#include <iostream>
#include <math.h>

double areaTR (double f(double), double a, double h, int i){
	return (h/2)*(f(a+(i-1)*h)+ f(a+i*h));
}

double gx (double x){
	return x*x;
}

double hx (double x){
	return sqrt((4-x*x));
}

double integrateTR(double f(double), double a, double b, int n){

	double h, integral=0;

	h=(b-a)/n;

	for (int i=0; i<n; i++){
		integral += areaTR(f, a, h, i+1);
	}

	return integral;
}


int main(){
	double a, b, n;

	std::cout << "a, b, n?\n";
	std::cin >> a >> b >> n;

	std::cout << "h(x): " <<integrateTR(hx, a, b, n)<<std::endl;
	std::cout << "g(x): " <<integrateTR(gx, a, b, n)<<std::endl;
}