#include <iostream>
#include <iomanip>
int main()
{
	int year;
	//Uninitialised variable are assigned with any random/garbage value
	year=2016;
	std::cout<<year;
	year=2018; //Modify a variable on the go
	std::cout<< "Year is "<<year<<std::endl;
	
	int a=10,b,c=14,d=5;
	int mon=3,day=26;
	
	//Date printing
	
	std::cout<<"Today is: "
	   <<std::setw(2)<<day
	   <<"."
	   <<std::setw(2)<<mon
	   <<"."
	   <<year<<std::endl;
	
	//Today is: 26. 3.2018
	
	std::cout<<"Today is: "
	   <<std::setw(2)<<std::setfill('0')<<day
	   <<"."
	   <<std::setw(2)<<std::setfill('0')<<mon
	   <<"."
	   <<year<<std::endl;
	//Today is: 26.03.2018
	
	std::cin.get();
	return 0;
}
