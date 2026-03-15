#include <iostream>

using namespace std;

int GetMax (int num1 ,int num2)  {

    int Stronger ;
                                 // you can also write:
if ( num1 > num2 ) {             // if ( num1 > num2 ) {
    Stronger = num1  ;           // return num1 ;
} else {                         // } else {
     Stronger = num2; }          // return num2 ; }
                                 /////this is a senior's code/////
    return Stronger ;
}

int main()
{
   int SwordDamage = 45 , AxeDamage = 60 ;

   int BestWeapon = GetMax(SwordDamage , AxeDamage) ;

   cout << "The highest damage is: " << BestWeapon;
    return 0;
}
