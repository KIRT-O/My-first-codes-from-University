#include <iostream>

using namespace std;

void SayHi(string name , int age) ;  //this is to define the "SayHi" so i can use it later

int main()
{

    SayHi("Mohammed" , 60) ;
    SayHi("Ali" , 47) ;         // here i use a name with age iside the "()" as "(string ,int)"
    SayHi("Dawood" , 12) ;

    return 0;
}

void SayHi(string name , int age) {        //i can tak all this before "int main"
     cout<< "hello "<< name << " You are "<<age << endl ;
}
