#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //this will generate random number between 0-11
    srand(time(0));
    int random , number = rand()% 10 ;
    random = number + 1 ;
    cout <<  random ;
    return 0;
}
