#include <iostream>

using namespace std;

class Chef {
    public:
        void makechicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad (){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish (){
            cout << "The chef makes bbq ribs " << endl ;
        }
};

class ItalianChef : public Chef{ // this line means we need the "italian" to do everything the "chef" can do
    public:
    void makePasta(){
        cout << "The chef makes pasta " << endl ;
    }
    void makeSpecialDish (){
        cout << "The chef makes fried chicken " << endl ;
        }
};


int main()
{

   Chef chef;
   chef.makechicken();
   ItalianChef italianChef;
   italianChef.makePasta();
///////////
    chef.makeSpecialDish();
    italianChef.makeSpecialDish();
    return 0;
}
