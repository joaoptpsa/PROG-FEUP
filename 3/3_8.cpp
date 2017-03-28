#include <iostream>

int gcd (int m, int n){

	if (m%n==0)
		return n;
	else
		return gcd (n, m%n);
}

int main (){
	int a, b;

	std::cout << "a, b?";
	std::cin >> a >> b;

	std::cout << gcd(a,b)<<std::endl;
}