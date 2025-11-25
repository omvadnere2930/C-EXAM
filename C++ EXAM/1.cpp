#include <iostream>
using namespace std;

class Movie {
public:
    string title;
    string genre;
    int releasedYear;
};

int main() {

    Movie movies[3];

    
    movies[0].title = "lalo";
    movies[0].genre = "work";
    movies[0].releasedYear = 2025;

    movies[1].title = "KGF 2";
    movies[1].genre = "thrilleer";
    movies[1].releasedYear = 2022;

    movies[2].title = "singham again";
    movies[2].genre = "Action";
    movies[2].releasedYear = 2024;


    for (int i = 0; i < 3; i++) {
        cout << "Movie " << i + 1 << ":" << endl;
        cout << " Title: " << movies[i].title << endl;
        cout << " Genre: " << movies[i].genre << endl;
        cout << " Released Year: " << movies[i].releasedYear << endl;
        cout << endl;
    }

    return 0;
}
