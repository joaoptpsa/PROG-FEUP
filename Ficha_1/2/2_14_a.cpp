#include <iostream>
#include <stdlib.h>



int main (){

	int n, nMaxIter, i;
	float rq , rqn=1, dif, delta;

	std::cout<<"Introduza o numero, delta e o numero maximo de iteracoes."<<std::endl;
	std::cin >> n >> delta>> nMaxIter;

	for (i=0; i<nMaxIter || abs(dif)>delta; i++){
		rq=rqn;
		rqn = (rq+n/rq)/2;
		dif = n - (rqn*rqn);

		std::cout<<"\t"<< rq <<"\t"<< rqn <<"\t"<< (rqn*rqn) <<"\t"<< dif << std::endl;
	}

	return 0;

}