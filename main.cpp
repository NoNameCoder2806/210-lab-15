// COMSC-210 | Lab 15 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries
#include <iostream>
#include <fstream>
#include <vector>
#include "Movie.h"
using namespace std;

// Constants

// Function prototypes
void readMovies(string path, vector<Movie>& movies);

// Main function
int main()
{
    // Declare a vector to hold Movie objects
    vector<Movie> movies;

    // Read the movies
    readMovies("input.txt", movies);

    return 0;
}

// Function implementations
/*
    readMovies()
    Read the Movie objects from a file and store them in the vector
    Arguments:
        - path: a string representing the file path to read from
        - movies: a reference to a vector of Movie objects where the read movies will be stored
    Return: none
*/
void readMovies(string path, vector<Movie>& movies)
{
    // Create a file stream to read the file
    ifstream fin;
    fin.open(path);

    // Check whether the file was successfully opened
    if (!fin) {
        cerr << "Error opening file\n";
        return;
    }

    // Declare a string line variable to store the line
    string line = "";

    // Iterate and read the file
    while (true)
    {
        // Create a temporary Movie object
        Movie temp;

        // Read and store the title of the Movie
        if (!getline(fin, line))    // If we can't read the line, we break
        {
            break;
        }
        temp.setTitle(line);

        // Read and store the released year of the Movie
        if (!getline(fin, line))    // If we can't read the line, we break
        {
            break;
        }
        temp.setYearReleased(stoi(line));

        // Read and store the screenwriter of the Movie
        if (!getline(fin, line))    // If we can't read the line, we break
        {
            break;
        }
        temp.setScreenWriter(line);

        // Add the Movie object to the vector
        movies.push_back(temp);
    }
}