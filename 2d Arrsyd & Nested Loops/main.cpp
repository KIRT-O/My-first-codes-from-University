#include <iostream>

using namespace std;

int main()
{
    int numberGrid [3][4] = {
                              {1, 2, 4, 6},
                              {1, 2, 5, 10},
                              {5, 7, 9, 13}



                            } ;
   for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4 ; j++) {
            cout << numberGrid[i][j]  ; // The "i" is like selecting the location of the array
        }                               // And the "j" is here to see what's inside the array
        cout << endl ;
   }




    return 0;
}
