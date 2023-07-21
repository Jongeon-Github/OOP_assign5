/*
* Filename: Square.cpp
* Project: OOP-assign3 (and assign5)
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jul 22, 2023
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
Square::Square() : Shape("Square", "undefined") {
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
Square::Square(const char* col, float sdlng) : Shape("Square", col) {
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
	cout << "Name: " << Shape::GetName() << endl;
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
	return 4 * GetSideLength();
};


/*
* Function: Area(void)
* Description: Calculates and returns the area of the square.
* Parameters: None
* Return: float - The area of the square.
*/
float Square::Area(void) {
	return  GetSideLength() * 2;
};


/*
* Function: OverallDimension(void)
* Description: Calculates and returns the overall dimension of the square.
* Parameters: None
* Return: float - The overall dimension of the square.
*/
float Square::OverallDimension(void) {
	return GetSideLength();
};


/*
* Function: Square Square::operator+(const Square& rhs)
* Description: Overloaded + operator
* Parameters: Right hand side
* Return: result of +
*/
Square Square::operator+(const Square& rhs) const {
	Square result;
	result.SetColour(this->GetColour());
	result.SetSideLength(this->sideLength + rhs.sideLength);
	return result;
}


/*
* Function: Square Square::operator*(const Square& rhs)
* Description: Overloaded * operator
* Parameters: Right hand side
* Return: result of *
*/
Square Square::operator*(const Square& rhs) const {
	Square result;
	result.SetColour(rhs.GetColour());
	result.SetSideLength(this->sideLength * rhs.sideLength);
	return result;
}


/*
* Function: Square Square::operator=(const Square& rhs)
* Description: Overloaded = operator
* Parameters: Right hand side
* Return: result of =
*/
Square& Square::operator=(const Square& rhs) {
	if (this != &rhs) {
		this->SetColour(rhs.GetColour());
		this->sideLength = rhs.sideLength;
	}
	return *this;
}


/*
* Function: Square Square::operator==(const Square& rhs)
* Description: Overloaded == operator
* Parameters: Right hand side
* Return: result of ==
*/
bool Square::operator==(const Square& rhs) const {
	const float variance = (float)0.0000001;
	if ((this->GetColour() == rhs.GetColour()) && (std::abs(this->sideLength - rhs.sideLength) < variance)) {
		return true;
	}
	else {
		return false;
	}
}