#include <string>
#include <iostream>

std::string removeRepeatedSpaces(std::string s){
	//Removing repeated spaces
	for (unsigned int i=0; i < s.size(); i++) {
		if ((s[i]==' ') && (s[i+1]==' ')) {
			int firstnonspace = s.substr(i).find_first_not_of(' '); 
			s = s.substr(0, i+1) + s.substr(firstnonspace+i);
		}
	}

	return s;

}

std::string normalizeName(std::string name){

	std::string toRemove[] ={
		"DE", "DO", "DA", "DAS", "DOS", "E"
	};
	size_t lengthTR = 6;

	for (unsigned int i=0; i<name.length(); i++){
		if(islower(name.at(i))){
			name.at(i) = toupper(name.at(i));
		}
	}

	for (unsigned int i=0; i<lengthTR; i++){
		if (name.find(toRemove[i])!=std::string::npos){ //caso haja uma ocorrencia
			for (unsigned int pos=name.find(toRemove[i]); name.find(toRemove[i], pos) !=std::string::npos; pos=name.find(toRemove[i], pos+1)){
				if (pos ==0){
					if (!isalpha(name.at(pos+toRemove[i].length()))){
					}
				}
				else if (pos+toRemove[i].length() == name.length()){
					if (!isalpha(name.at(pos-1))){
					}
				}
				else{
					if ((!isalpha(name.at(pos-1))) && (!isalpha(name.at(pos+toRemove[i].length())))){
						name.erase(pos, toRemove[i].length());
					}
				}
			}
		}
	}

	name = removeRepeatedSpaces (name);

	if (name.at(name.length()-1)==' '){
		name.erase(name.length()-1, 1);
	}

	return name;

}

int main (){
	std::string s;

	std::cout << "String:"; getline (std::cin, s);
	std::cout << normalizeName(s) << std::endl;
}