#include <iostream>

using namespace std;

int main()
{
    int x , y , z , age ;

    cout<<"enter your age "<<endl ;
    cin>> x;
    cout<<"enter the current year  "<<endl ;
    cin >> y ;
    age = y-x ;
    bool logic = age > 1900 ;

    cout << "is this age logical ? (1 = yes , 0 = no )" <<  endl ;
    cout << "the answer is = "<< logic<< endl ;
    cout << "the answer is = "<<boolalpha<< logic ;

    return 0;
}
