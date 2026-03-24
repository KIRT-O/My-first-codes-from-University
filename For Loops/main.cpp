#include <iostream>

using namespace std;

int main()
{
    int nums[10] = {1, 2, 3, 10, 6, 8, 9} ;
    nums [7] = {90} ;
    for ( int i = 0; i < 8; i++  ) {

        cout << nums [i] << endl ;
    }

    return 0;
}
