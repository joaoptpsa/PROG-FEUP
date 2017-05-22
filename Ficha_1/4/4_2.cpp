#include <string>
#include <iostream>


bool sequenceSearch (std::string s, int nc, char c){
	int counter=0;

	for(unsigned int i=0; i<s.length(); i++){
		if (s.at(i) == c){
			counter++;
			if(counter==nc)
				return true;
		}
		else{
			counter =0;
		}
	}

	return false;
}

int main (){
	std::string s;
	int nc;
	char c;
	std::cout << "String:"; getline (std::cin, s);
	std::cout << "Caracter? Numero de ocorrencias?\n"; std::cin >> c >> nc;

	if (sequenceSearch(s,nc,c)){
		std::cout<<"True\n";
	}
	else{
		std::cout<<"False\n";
	}
}