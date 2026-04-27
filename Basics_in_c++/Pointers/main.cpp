#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age  ;  // The "p" came from "pointer"
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name ;

    cout << &age <<endl; //The "&" will show the memory address of "age" and this we call it "Pointer"

    cout << pAge << endl; //this is a variable for the pointer

    cout << *pAge <<endl; // this will show what is stored inside the memory , "dereferencing"

    cout << *&age ; // this will do the same as the previous one (dereferencing)

    return 0;
}
