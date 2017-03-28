#include <iostream>
#include <vector>

void readIntArray(int a[], int nElem){

	for (int i=0; i<nElem; i++){
		std::cout<<i<<": "; std::cin >> a[i];
	}
}

void readIntVector(std::vector<int> &v, int nElem){
	int elem;
	for (int i=0; i<nElem; i++){
		std::cout<<i<<": "; std::cin >>elem;
		v.push_back(elem);
	}
}

void readIntVector(std::vector<int> &v){
	int elem, i=0;

	std::cout<<"End with CTRL+Z on Windows CTRL+D on UNIX\n"<<i<<": ";
	while (std::cin >> elem){
		v.push_back(elem);
		i++;
		std::cout<<i<<": ";
	}
}

std::vector<int> readIntVector(){
	std::vector<int> v;
	int elem, i=0;

	std::cout<<"End with CTRL+Z on Windows CTRL+D on UNIX\n"<<i<<": ";
	while (std::cin >> elem){
		v.push_back(elem);
		i++;
		std::cout<<i<<": ";
	}

	return v;
}


int searchValueInIntArray(const int a[], int nElem, int value){

	for (int i=0; i<nElem; i++){
		if (a[i] == value)
			return i;
	}
	return -1;
}

int searchValueInVector(const std::vector<int> &v, int value){
	for (unsigned int i=0; i<v.size(); i++){
		if (v.at(i) == value)
			return i;
	}
	return -1;
}

int searchMultValuesInIntArray(const int a[], int nElem, int value, int index[]){
	int n=0;

	for (int i=0; i<nElem; i++){
		if (a[i] == value){
			index[n] = i;
			n++;
		}
	}

	if (n==0)
		return -1;
	return n;
}

std::vector<int> searchMultValuesInIntVector(const std::vector<int> &v, int value){
	std::vector<int> index;
	int n=0;

	for (unsigned int i=0; i<v.size(); i++){
		if (v.at(i)==value){
			index.push_back(i);
			n++;
		}
	}

	return index;
}

int main (){
	int nElem, value;
	std::vector<int> a, index;

	std::cout <<"nElem? value?\n"; std::cin >> nElem>>value;

	a = readIntVector();
	std::cout <<searchValueInVector(a, value) <<std::endl;
	
	index = searchMultValuesInIntVector(a, value);
	for (unsigned int i=0; i<index.size(); i++){
		std::cout <<index.at(i)<< " ";
	}
	std::cout << std::endl;
	
	return 0;
}

/*
int main (){
	int nElem, value;

	std::cout <<"nElem? value?\n"; std::cin >> nElem>>value;
	int a[nElem], index[nElem];

	readIntArray(a, nElem);
	std::cout <<searchValueInIntArray(a, nElem, value) <<std::endl;

	for (int i=0; i<searchMultValuesInIntArray(a, nElem, value, index); i++){
		std::cout <<index[i]<< " ";
	}
	std::cout << std::endl;
	
	return 0;
}
*/