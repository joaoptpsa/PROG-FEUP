#include <iostream>

int gcd (int a, int b){
	int temp;

	while (b != 0){
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int lcm (int a, int b){
	return (a*b)/gcd(a,b);
}

bool readFracc(int &numerator, int &denominator){

	char sep;

	std::cin >> numerator >> sep >> denominator;

	if (sep == '/' && denominator != 0){
		return true;
	}
	else{
		numerator = 0;
		denominator = 0;
	}
	return false;
}

void writeFracc(int numerator, int denominator){
	std::cout<<numerator<<'/'<<denominator<<std::endl;
}

void reduceFracc(int &numerator, int &denominator){
	int div = gcd (numerator, denominator);
	numerator /= div;
	denominator /= div;
}

void mulFracc (int &numerator1, int &denominator1, int &numerator2, int &denominator2, int &numeratorRes, int &denominatorRes){
	numeratorRes = numerator1 * numerator2;
	denominatorRes = denominator1 * denominator2;

	reduceFracc (numeratorRes, denominatorRes);
}
/*
*Used to multiply both the numerator as well as the denominator
*/

void rewriteFracc (int &numerator1, int &denominator1, int mul){
	numerator1 *= mul;
	denominator1 *= mul;
}

void divFracc (int &numerator1, int &denominator1, int &numerator2, int &denominator2, int &numeratorRes, int &denominatorRes){
	mulFracc (numerator1, denominator1, denominator2, numerator2, numeratorRes, denominatorRes);
}

void sumFracc (int &numerator1, int &denominator1, int &numerator2, int &denominator2, int &numeratorRes, int &denominatorRes){
	int tempDenum1 = denominator1, tempDenum2 = denominator2;
	rewriteFracc (numerator1, denominator1, tempDenum2);
	rewriteFracc (numerator2, denominator2, tempDenum1);

	numeratorRes = numerator1 + numerator2;
	denominatorRes = denominator1;

	reduceFracc (numeratorRes, denominatorRes);
}

void subFracc (int &numerator1, int &denominator1, int &numerator2, int &denominator2, int &numeratorRes, int &denominatorRes){
	numerator2 *= -1;
	sumFracc (numerator1, denominator1, numerator2, denominator2, numeratorRes, denominatorRes);
	numerator2 *= -1; //reset its value
}



int main (){

	int num1, denum1, num2, denum2, num3, denum3;

	std::cout << "N/D :";

	if (readFracc(num1, denum1) && readFracc(num2, denum2)){
		reduceFracc(num1, denum1);
		writeFracc(num1, denum1);
		reduceFracc(num2, denum2);
		writeFracc(num2, denum2);

		divFracc(num1, denum1, num2, denum2, num3, denum3);
		writeFracc(num3, denum3);
	}


	return 0;
}