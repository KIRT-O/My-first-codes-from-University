#include <iostream>

using namespace std;

int main()
{
    string name  ;
    int age , score1 , score2  , new_age  ;
    float avg, sum ;
    cout << "welcome our student ,please enter you name " << endl;
    cin>>name;
    cout << "enter your age " << endl;
    cin>>age;
    cout << "input your scores in physics  of 100 "<<endl;
    cin >> score1 ;
    cout << "input your scores in math of 100 "<<endl;
    cin >> score2 ;
    sum=score1+score2 ;
    avg =sum/2 ;
    new_age = age + 5 ;
    bool iseligible = (avg>90 );
    cout<< "welcome "<<name<<",your average now is "<<avg << endl ;
    cout << "your age after graduation is "<<new_age <<endl;
    cout << " are you eligible to scholarship? "<<boolalpha << iseligible << endl ;
    return 0;
}
