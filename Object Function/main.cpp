#include <iostream>

using namespace std;

class Student {
public:
    string name;
    string major;
    double gpa;
    Student (string aName, string aMajor, double aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors(){
        if(gpa >= 2.0){
            return true;
        }else{
        return false ;
        }
    }

};

int main()
{
   Student student1("Mohammed", "Computer science", 3.0 );
   Student student2("Malak", "Art", 4.5 );

   cout << student1.hasHonors();

    return 0;
}
