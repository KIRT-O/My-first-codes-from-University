#include <iostream>

using namespace std;

class Book {
    public:
        string title ;
        string author;
        int pages;
        Book(){ // this constructor if the user chooses a book that is not in the code like "Book book3" here
            title = "No title";
            author = "No author";
            pages = 0;
        }
        // This is a function will be called whenever i use the class it is inside of it
        Book(string aTitle , string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages ;
        }
};

int main()
{

//here when i use the function i mae the code easier and smaller

    Book book1("Violet Evergarden","Kana Akatsuki" , 220);
// i can here update any variable like : ( Book book1.title = "Elden ring";  )

    Book book2("Classroom of the elite", "Syougo Kinugasa", 350);

    Book book3;

        cout << book1.title << " This is book1"endl; // I type this so it's easy to see the output
        cout << book2.title << " This is book2" endl;
        cout << book3.title <<" This is book3";

    return 0;
}
