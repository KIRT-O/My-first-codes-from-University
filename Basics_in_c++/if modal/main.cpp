#include <iostream>

using namespace std;

int main()
{
    int year , birth , age ;
    cout<<"enter the year: ";
    cin>>year;
    cout<<"enter the birth year ";
    cin>>birth ;
    age=year-birth ;
    if (birth<1980) {
        cout <<"the age is birth is wrong "<<endl;

    } else {cout << "the age confirmed, you are:"<<age <<" years old ";}


    return 0;
}
