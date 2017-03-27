#include <iostream>
#include <cstdlib> //rand
#include <ctime> //time

int main (){

	srand(time(NULL));

	int a=rand()%8+2, b=rand()%8+2, answer, dif_seconds;
	time_t start_time = time(NULL), end_time;


	std::cout<<a<<"x"<<b<<"=?"<<std::endl;
	std::cin>>answer;

	end_time = time(NULL);
	dif_seconds =difftime(end_time, start_time);

	if(answer!=(a*b)){ //Wrong answer
		std::cout<<"Muito Mau, enganou-se e ";
	}
	else if (dif_seconds < 5){
		std::cout<<"Bom, ";
	}
	else if (5<=dif_seconds && dif_seconds<=10 ){
		std::cout<<"Satisfaz, ";
	}
	else{
		std::cout<<"Insuficiente, ";
	}

	std::cout<<"demorou " <<dif_seconds<< " segundos."<<std::endl;

	return 0;

}