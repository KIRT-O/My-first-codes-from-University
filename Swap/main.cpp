#include <iostream>

using namespace std;

int main()
{
    //my try

    int x,y , newx,newy ;
    cout << "enter a number for (x) and then enter a number for (y) "  << endl;
    cin >>x;
     cin >>y;
     newx=(x*0)+y;
     newy=(y*0)+x;
     cout <<"the new number of (x)="<<newx<<endl;
     cout <<"the new number of (y)="<<newy<<endl;

     // the write way

     int z = 7, c = 10, temp;

temp = z;
z = c;
c = temp;

cout << "z: " << z << " c: " << c;


    return 0;
}
