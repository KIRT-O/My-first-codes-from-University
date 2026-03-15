#include <iostream>

using namespace std;

int main()
{

    bool isMale = true;  //try change then"true , false" and you'll understand the code
    bool isTall = true;

    if(isMale && isTall) {  //ican use "||" and "> , < , # , == , = "
        cout <<"You are a tall male" ;
    } else if(isMale && !isTall){
    cout<<"You are a short male";
    }else if(!isMale && isTall){
    cout<<"you are a tall but not male ";
    } else {
    cout<<"You are not male and not tall" ;}




    return 0;
}
