#include <iostream>

using namespace std;

int main()
{
    int years , months , x , y  ,age ;
    string name ;
    cout << "what's your name ? " << endl;
    getline(cin, name) ;
    cout<< "welcome " << name <<" enter your age (only years) " << endl;
    cin>> years ;
    cout<< name << ", how many months do you live since your last birthday ?" << endl;
    cin>> months;
    x=years*365 ;
    y=months*30 ;
     age = x+y;
     cout<< name << ", you are "<< age << "days old" << endl ;

    return 0;
}
