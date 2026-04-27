#include <iostream>

using namespace std;

double cube (double num ) {             //here i made a function called "cube" and i make a math inside it , and then put all of it inside "result"
       double result = num * num * num ;// and "result" is inside "cube" so , under the "int main" i use "cout for cube " because the computer will read it like that
       return result;   // i can also just type " return num * num * num ;" without using the 6th row


}

int main()
{
   double answer = cube(9.0) ;
   cout << answer ;  // i can also just type "cout << cube(9.0)"
    return 0;
}
