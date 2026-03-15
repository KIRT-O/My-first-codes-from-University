#include <iostream>

using namespace std;

int main()
{
   double r , l , w , AreaCircle ,AreaRectangle ,volumerectangle ;
    cout << "input the radius of the circle" << endl;
    cin >> r;
    AreaCircle=r*r*22/7;
     cout << "the area  of circle ="<< AreaCircle << endl;
      cout << "input the width of the rectangle" << endl;
      cin>>w;
       cout << "input the length of rectangle" << endl;
       cin>>l;
       AreaRectangle=l*w;
        cout << "the area of rectangle is ="<<AreaRectangle << endl;
        volumerectangle=(l*w)*2 ;
         cout << "the volume of rectangle is ="<< volumerectangle << endl;

    return 0;
}
