#include <string>
#include <iostream>

void decompose (std::string compound){

	for (unsigned int i=0; i<compound.length(); i++){
		if (isupper(compound.at(i))){
			std::cout << "\tElement: " << compound.at(i);
		}

		if (islower((compound.at(i)))){
			std::cout << (compound.at(i));
		}
	}
	std::cout << std::endl;
}

int main (){

 	std::string compoundsString[] = {
 		"H2O",
 		"KOH",
 		"H2O2",
 		"NaCl",
 		"NaOH",
 		"C9H8O4",
 		"MgOH"
 	};

 	size_t numCoumpounds = 7;

 	for (unsigned int i=0; i<numCoumpounds; i++){
 		decompose (compoundsString[i]);
 	}

 	return 0;
 }