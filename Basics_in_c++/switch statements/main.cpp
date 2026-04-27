#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum) { //This function will switch the a number into a day of the week
    string dayName;

    switch(dayNum){   //We use "Switch" because it's more efficient for this
    case 0: // Here i make "0 = Sunday"
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuseday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:  // the "Default" is to prevent any different input
        dayName = "Invalid Day Number" ;
    }

    return dayName;
}


int main()
{

cout << getDayOfWeek(0) ;


    return 0;
}
