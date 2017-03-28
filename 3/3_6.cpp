/*Incompleto*/

#include <iostream>
#include <string>

int monthCodes[][12] ={
	{
		6,2,3,6,1,4,6,2,5,0,3,5
	},
	{
		0,3,3,6,1,4,6,2,5,0,3,5
	}
};

int daysInMonth[]={
	31,
	28,
	31,
	30,
	31,
	30,
	31,
	31,
	30,
	31,
	30,
	31
};

std::string namesOfWeekDays[] = {
	"Sabado",
	"Domingo",
	"Segunda-feira",
	"Terca-feira",
	"Quarta-feira",
	"Quinta-feira",
	"Sexta-feira",
};

bool isLeapYear (int year){
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				return true;
			}
			return false;
		}
		return true;
	}

	return false;
}

int daysOfMonth (int month, int year){
	if (isLeapYear(year)){
		if(month==1){//February
			return daysInMonth[month]+1;
		}	
	}
	return daysInMonth[month];
}

int monthCode (int month, int year){
	if (isLeapYear(year)){
		return monthCodes[0][month];
	}
	return monthCodes[1][month];

}

int dayOfWeekCode (int day, int month, int year){
	int a, c, s;

	s=year/100;//assumindo um ano om 4 digitos
	a=year%100;
	c= monthCode(month, year);

	return ((5*a)/4+c+day-2*(s%4)+7)%7;
}




int main (){

	int day, month, year;

	std::cout << "Dia /Mes / Ano ?";
	std::cin >> day >> month >> year;
	month -= 1; //User will input 2nd month as 2 while we treat it as 1

	if (isLeapYear(year)){
		std::cout << "Bissexto" <<std::endl;
	}
	else{
		std::cout << "Nao bissexto" <<std::endl;
	}

	std::cout << daysOfMonth(month, year) <<std::endl;

	std::cout << namesOfWeekDays[dayOfWeekCode(day,month,year)]<<std::endl;



}