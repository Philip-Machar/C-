/*
Author: Philip Machar
Reg No: BSE-01-0047/2024
Description: A program to rate movies
*/

//importing the input/output stream library
#include <iostream>

//Declaring the standard namespace for input/output
using namespace std;

// Class representing a Movie
class Movie {
private:
    //Data members
    string title;      
    string director;    
    int duration;      
    float rating;      

public:
    // Constructor to initialize the movie details
    Movie(string t, string d, int dur, float r) {
        title = t;
        director = d;
        duration = dur;
        rating = r;
    }

    // Function to display the movie's details
    void display() const {
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "Duration: " << duration << " minutes" << endl;
        cout << "Rating: " << rating << endl;
    }

    // Function to rate the movie with a value between 1 and 5
    void rateMovie(float newRating) {
        if (newRating >= 1 && newRating <= 5) {
            rating = newRating;
            cout << "Rating updated to: " << rating << endl;
        } else {
            cout << "Invalid rating" << endl;
        }
    }
};

int main() {
    // Create a Movie object with the specified details
    Movie myMovie("Inception", "Christopher Nolan", 148, 4.8);

    // Display the movie details
    myMovie.display();

    // Update the rating to 5.0 and display the updated rating
    myMovie.rateMovie(5.0);

    // Attempt to set the rating to 6.0 (invalid) and display the appropriate message
    myMovie.rateMovie(6.0);

    return 0;
}
