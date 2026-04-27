#include <iostream>

using namespace std;

class Book { // this is a class to make a book data type
    public:
        string title ;
        string author;
        int pages;
};

int main()
{

    Book book1; // here i made variable for the first book to save data inside it
    book1.title = "Violet Evergarden";
    book1.author = "Kana Akatsuki" ;
    book1.pages = 220;

   cout << book1.title ;
    return 0;
}
