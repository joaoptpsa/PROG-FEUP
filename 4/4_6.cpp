#include <iostream>

void readIntArray(int a[], int nElem){

	for (int i=0; i<nElem; i++){
		std::cout<<i<<": "; std::cin >> a[i];
	}
}

int searchValueInIntArray(const int a[], int nElem, int value){

	for (int i=0; i<nElem; i++){
		if (a[i] == value)
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