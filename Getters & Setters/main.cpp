#include <iostream>

using namespace std;

class Movie {
    private: // This means you can't modify what inside it only in this class
        string rating;
    public:
        string title;
        string director;

        Movie (string aTitle, string aDirector, string aRating){
            title = aTitle;
            director= aDirector ;
            setRating(aRating);

        }
        void setRating(string aRating){ //We made this so no one input invalid rating
            if(aRating == "G" || aRating =="PG" || aRating=="R" || aRating == "PG-13" || aRating == "N" || aRating == "UR") {
                rating = aRating;
            } else {
                rating = "NR";
            }
        }
        string getRating(){ // We use this so we can later use "rating" that is inside the "private"
            return rating;
        }
};

int main()
{
   Movie violetTheMovie("Violet" ,"Taichi Ishidate" , "PG-13" );

   cout << violetTheMovie.getRating() ;


    return 0;
}
