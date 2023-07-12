/*
* Filename: Square.cpp
* Project: OOP-assign3
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jun 17, 2023
* Description: The Square class is a subclass of Shape, representing a square shape with methods for managing its side length, perimeter, area, and displaying information.
*/

#include <iostream>
#include <iomanip>
#include "Shape.h"
#include "Square.h"

using namespace std;


/*
* Function: Square()
* Description: Initialize the values.
* Parameters: None
* Return : None
*/
Square::Square() {
	sideLength = 0.00;
};


/*
* Function: Square(char* col, float sdlng)
* Description: Constructor that initializes the square with the given color and side length values.
* Parameters:
*     - char* col: The color of the square.
*     - float sdlng: The side length of the square.
* Return: None
*/
Square::Square(char* col, float sdlng) : Shape("Square", col) {
	SetColour(col);
	SetSideLength(sdlng);
};


/*
* Function: ~Square()
* Description: Destructor that displays a message when a square object is destroyed.
* Parameters: None
* Return: None
*/
Square::~Square() {
	cout << "The square is squished ¡¦" << endl;
};


/*
* Function: GetSideLength(void)
* Description: Retrieves the side length of the square.
* Parameters: None
* Return: float - The side length of the square.
*/
float Square::GetSideLength(void) {
	return sideLength;
};


/*
* Function: SetSideLength(float sdlng)
* Description: Sets the side length of the square with the given value.
* Parameters:
*     - float sdlng: The side length to set.
* Return: None
*/
void Square::SetSideLength(float sdlng) {
	if (sdlng >= 0.00) {
		sideLength = sdlng;
	}
};


/*
* Function: Show(void)
* Description: Displays all information about the square.
* Parameters: None
* Return: None
*/
void Square::Show(void) {
	cout << endl << "Shape Information" << endl;
	cout << "Name: " << Shape::GetName()<< endl;
	cout << "Colour: " << Shape::GetColour() << endl;
	cout << "Side Length: " << GetSideLength() << " cm" << endl;
	cout << "Perimeter: " << fixed << setprecision(2) << Perimeter() << " cm" << endl;
	cout << "Area: " << Area() << " square cm" << endl;
};


/*
* Function: Perimeter(void)
* Description: Calculates and returns the perimeter of the square.
* Parameters: None
* Return: float - The perimeter of the square.
*/
float Square::Perimeter(void) {
	return round((4 * GetSideLength()) * 100.00) / 100.00;
};


/*
* Function: Area(void)
* Description: Calculates and returns the area of the square.
* Parameters: None
* Return: float - The area of the square.
*/
float Square::Area(void) {
	return  round((GetSideLength() * 2) * 100.00) / 100.00;
};


/*
* Function: OverallDimension(void)
* Description: Calculates and returns the overall dimension of the square.
* Parameters: None
* Return: float - The overall dimension of the square.
*/
float Square::OverallDimension(void) {
	return round((GetSideLength()) * 100.00) / 100.00;
};