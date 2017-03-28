#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <algorithm>    // std::sort
#include <fstream>

std::vector<std::string> readFile (std::string filename){
	std::vector<std::string> v;
	std::ifstream in_stream; 
	std::string name;

	in_stream.open(filename.c_str());
	if (in_stream.fail()){
		std::cerr << "Error opening " << filename << "\n";
		exit(1);
	}
	else{
		while (getline(in_stream, name)){
			v.push_back (name);
		}
	}

	in_stream.close();

	return v;
}

void writeFile (std::vector<std::string> v, std::string filename){
	std::ofstream out_stream;

	out_stream.open(filename.c_str());
	if (out_stream.fail()){
		std::cerr << "Error opening " << filename << "\n";
		exit(1);
	}
	else{
		for(unsigned int i=0; i<v.size(); i++){
			out_stream << v.at(i) << std::endl;
		}
	}

	out_stream.close();
}


int main (){
	std::vector<std::string> nameVector;
	std::string filename;

	std::cout << "Filename (input)?\n"; std::cin >>filename;

	nameVector = readFile (filename);

	sort (nameVector.begin(), nameVector.end());

	filename.insert (filename.find("."), "_sorted");


	writeFile(nameVector, filename);
	return 0;
}