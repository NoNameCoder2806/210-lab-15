// COMSC-210 | Lab 15 | Dat Hoang Vien
// IDE used: Visual Code Studio

#pragma once

// Libraries
#include <iostream>
#include <string>
using namespace std;

// Movie class
class Movie
{
private:
    string screenWriter;      // Screenwriter
    int yearReleased;         // Year Released
    string title;             // Title

public:
    // Accessors / Getters
    string getScreenWriter() const
    {
        return screenWriter;
    }

    int getYearReleased() const
    {
        return yearReleased;
    }

    string getTitle() const
    {
        return title;
    }
    
    // Mutators / Setters
    void setScreenWriter(string sw)
    {
        screenWriter = sw;
    }

    void setYearReleased(int yr)
    {
        yearReleased = yr;
    }

    void setTitle(string t)
    {
        title = t;
    }
    
    // Methods
    /*
        print()
        Display the information of a Movie object
        Arguments: none
        Return: none
    */
    void print() const
    {
        // Use cout and getters
        cout << "Movie: " << getTitle() << endl;
        cout << "   Year released: " << getYearReleased() << endl;
        cout << "   Screenwriter: " << getScreenWriter() << endl;
    }
};