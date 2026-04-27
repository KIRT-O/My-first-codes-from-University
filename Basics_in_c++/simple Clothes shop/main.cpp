#include <iostream>

using namespace std;

int main() {

int x , y , u ;
cout<< "enter the price of the clothes "<< endl ;
cin >>x;
cout<< "enter the amount "<< endl ;
cin>>y;
cout<< "enter the tax "<< endl ;
cin>>u;
float main , a_tax ;
main=x*y;
cout<<"original price ="<<main<<endl ;
a_tax=main+u;
cout << "after the tax ="<< a_tax;

return 0;
}



