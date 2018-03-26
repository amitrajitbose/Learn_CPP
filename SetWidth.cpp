#include <iostream.h>
#include <iomanip>
int main()
{
    //Without setting width
    std::cout<<25<<" is the date."<<std::endl;
    std::cout<<03<<" is the month."<<std::endl;
    std::cout<<2018<<" is the year."<<std::endl;
    
    //Lets set a fixed width for a certain output parameter
    //use std::setw(<size>) from iomanip header file
    
    std::cout<<std::endl; //equivalent to one blank line ENTER
    
    std::cout<<std::setw(5)<<25<<" is the date."<<std::endl;
    std::cout<<std::setw(5)<<03<<" is the month."<<std::endl;
    std::cout<<std::setw(5)<<2018<<" is the year."<<std::endl;
    std::cin.get();
    
    return 0;
}
