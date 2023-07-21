/*
* Filename: myShape.cpp
* Project: OOP-assign5
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jul 22, 2023
* Description:This program creates and displays information about circles and squares.
*		      Users can select a shape, set its attributes, and view calculated measurements.
*/
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

int main(void)
{
    // Create Circle shapes with specified attributes
    Circle round1("red", 5.5);
    Circle round2("blue", 10.5);

    // Create a default Circle shape
    Circle playARound;

    // Create Square shapes with specified attributes
    Square square1("orange", 5.0);
    Square square2("purple", 12.0);

    // Create a default Square shape
    Square playASquare;

    // Print specifics of each shape
    round1.Show();
    round2.Show();
    playARound.Show();
    square1.Show();
    square2.Show();
    playASquare.Show();

    // Add round2 to round1 and store it in playAround
    playARound = round1 + round2;

    // Add square1 to square2 and store in playASquare
    playASquare = square2 + square1;

    // Print specifics of playARound and playASquare
    playARound.Show();
    playASquare.Show();

    // Multiply round1 by round2 and store in playARound
    playARound = round1 * round2;

    // Multiply square2 by square1 and store in playASquare
    playASquare = square2 * square1;

    // Print specifics of playARound and playASquare
    playARound.Show();
    playASquare.Show();

    // Assign round1 to playARound, and then test to see if they are equivalent
    playARound = round1;
    if (playARound == round1) {
        cout << "Hurray !!" << endl;
    }
    else {
        cout << "Awww !!" << endl;
    }

    return 0;
}