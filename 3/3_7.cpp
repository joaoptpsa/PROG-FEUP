#include <iostream>
#include <climits>


//O maior numero cujo fatorial conseguimos representar em long e' o 23
long factorial_ite (int n){

	long fat = 1;

	if (n==0)
		return 1;

	for (int i=2; i<=n; i++){
		fat *= i;
	}
	return fat;

}

long factorial_rec (int n){

	if (n == 0 || n == 1)
		return 1;
	else
		return n*factorial_rec(n-1);
}

int main (){

	int n;

	std::cout << "Num (max 23): ";
	std::cin >> n;

	std::cout << factorial_ite(n) << "; " << factorial_rec(n) << std::endl;
	return 0;
}