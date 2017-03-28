#include <cstring>
#include <string>
#include <iostream>

 bool isHydroxide (char compound[]){

 	size_t length = strlen(compound);

 	if (strcmp (&compound[length-2], "OH")==0){
 		return true;
 	}

 	return false;

 }

bool isHydroxide (std::string compound){

	if (compound.rfind("OH") == compound.length()-2){
		return true;
	}
	return false;
}


 int main (){
 	char compounds[][10] = {
 		"KOH",
 		"H202",
 		"NaCl",
 		"NaOH",
 		"C9H8O4",
 		"MgOH"
 	};
 	std::string compoundsString[] = {
 		 "KOH",
 		"H202",
 		"NaCl",
 		"NaOH",
 		"C9H8O4",
 		"MgOH"
 	};

 	size_t numCoumpounds = 6;

 	for (unsigned int i=0; i<numCoumpounds; i++){
 		if (isHydroxide(compounds[i])){
 			std::cout << "True\n";
 		}
 		else{
 			std::cout << "False\n";
 		}
 	}

 	for (unsigned int i=0; i<numCoumpounds; i++){
 		 if (isHydroxide(compoundsString[i])){
 			std::cout << "True\n";
 		}
 		else{
 			std::cout << "False\n";
 		}
 	}

 	return 0;
 }