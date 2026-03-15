#include <iostream>



//test const
int main()
{
    int x=5,y=7, z1=x+y;
    const double pi=3.14 ;
    std::cout << "3"<<std::endl  ;

    float num1=2 ,num2=4;
    std::cout <<"sum="<<num1+num2<<std::endl //i used the std::
     <<"mul="<<num1*num2<<std::endl  // here the << keep going for nest line because there are no (;)
     <<"div="<<num1/num2<<std::endl
             <<"x+y="<<z1;




    return 0;
}
