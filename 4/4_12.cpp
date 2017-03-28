#include <string>
#include <iostream>
#include <sstream>

double executeOperation(std::string op){
	std::istringstream instr;
	char operand;
	double x,y;

	instr.str (op); //initialize instr with op
	instr >>std::skipws>>x >>operand >>y;

	switch (operand){
		case '+':
			return x+y;
			break;
		case '-':
			return x-y;
			break;
		case '*':
			return x*y;
			break;
		case '/':
			return x/y;
		default:
			return 0;
			break;
	}
}

int main (){
	std::string op;

	std::cout <<"Operacao: "; getline (std::cin , op);
	std::cout << executeOperation (op)<< std::endl;

	return 0;
}