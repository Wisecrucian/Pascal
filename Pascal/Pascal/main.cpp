#include "DateTime.h"


int main()
{

   
    std::cout << IsLeapYear(2020) << std::endl;
   

    std::cout << DaysInYear(2020) << std::endl;


    std::cout << DaysInYearRange(2000, 2020) << std::endl;



    assert(IsYearOfApocalypse(2011) == 1);
    assert(IsYearOfApocalypse(2010) == 0);


}
