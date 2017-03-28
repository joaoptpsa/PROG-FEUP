#include <iostream>

struct Fraction{
	int numerator, denominator;
	bool valid;
};


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

Fraction readFracc(){
	Fraction f;
	char sep;

	std::cin >> f.numerator >> sep >> f.denominator;

	if (sep == '/' && f.denominator != 0){
		f.valid = true;
	}
	else{
		f.valid = false;
		f.numerator = 0;
		f.denominator = 0;
	}
	return f;
}

void writeFracc(Fraction f){
	std::cout<<f.numerator<<'/'<<f.denominator<<std::endl;
}

Fraction reduceFracc(Fraction f){
	Fraction rf;
	int div = gcd (f.numerator, f.denominator);
	rf.numerator =f.numerator/ div;
	rf.denominator =f.denominator/ div;
	return rf;
}

Fraction mulFracc (Fraction f1, Fraction f2){
	Fraction rf;
	rf.numerator = f1.numerator * f2.numerator;
	rf.denominator = f1.denominator * f2.denominator;

	rf = reduceFracc (rf);
	return rf;
}
/*
*Used to multiply both the numerator as well as the denominator
*/

Fraction rewriteFracc (Fraction f, int mul){
	Fraction rf;

	rf.numerator = f.numerator*mul;
	rf.denominator = f.denominator*mul;
	return rf;
}

Fraction divFracc (Fraction f1, Fraction f2){
	Fraction rf, ftemp;
	ftemp.numerator = f2.denominator;
	ftemp.denominator = f2.numerator;
	rf = mulFracc (f1, ftemp);
	return rf;
}

Fraction sumFracc (Fraction f1, Fraction f2){
	Fraction temp1, temp2, rf;
	temp1 = rewriteFracc (f1, f2.denominator);
	temp2 = rewriteFracc (f2, f1.denominator);

	rf.numerator = temp1.numerator + temp2.numerator;
	rf.denominator = temp1.denominator;

	rf = reduceFracc (rf);
	return rf;
}

Fraction subFracc (Fraction f1, Fraction f2){
	Fraction rf;

	f2.numerator *= -1;
	rf = sumFracc (f1, f2);
	f2.numerator *= -1; //reset its value
	return rf;
}



int main (){
	Fraction f1,f2,f3;

	std::cout << "N/D :";

	f1 = readFracc();
	f2 = readFracc();

	if (f1.valid && f2.valid){
		f1 = reduceFracc(f1);
		writeFracc(f1);
		f2 = reduceFracc(f2);
		writeFracc(f2);

		f3 = divFracc(f1, f2);
		writeFracc(f3);
	}


	return 0;
}