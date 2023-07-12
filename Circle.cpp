/*
* Filename: Circle.cpp
* Project: OOP-assign3
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jun 17, 2023
* Description: The Circle class is a subclass of Shape, representing a circle shape with methods for managing its radius, perimeter, area, and displaying information.
*/

#include <iostream>
#include <iomanip>
#include "Shape.h"
#include "Circle.h"

using namespace std;


/*
* Function: Circle()
* Description: Initialize the values.
* Parameters: None
* Return : None
*/
Circle::Circle() {
	radius = 0.00;
	PI = (float)3.1415926;
};


/*
* Function: Circle(char* col, float rad)
* Description: Constructor that initializes the Circle object with the given color and radius values.
* Parameters:
*     - char* col: The color of the circle.
*     - float rad: The radius of the circle.
* Return: None
*/
Circle::Circle(char* col, float rad) : Shape("Circle", col) {
	SetColour(col);
	SetRadius(rad);
};

/*
* Function: ~Circle()
* Description: Destructor that displays a message when a Circle object is destroyed.
* Parameters: None
* Return: None
*/
Circle::~Circle() {

	cout << "The circle is broken ¡¦" << endl;
};


/*
* Function: GetRadius(void)
* Description: Retrieves the radius of the circle.
* Parameters: None
* Return: float - The radius of the circle.
*/
float Circle::GetRadius(void) {
	return radius;
};


/*
* Function: SetRadius(float rad)
* Description: Sets the radius of the circle with the given value.
* Parameters:
*     - float rad: The radius to set.
* Return: None
*/
void Circle::SetRadius(float rad) {
	if (rad >= 0.00) {
		radius = rad;
	}
};


/*
* Function: Show(void)
* Description: Displays all information about the circle.
* Parameters: None
* Return: None
*/
void Circle::Show(void) {
	cout << endl << "Shape Information" << endl;
	cout << "Name: " << name << endl;
	cout << "Colour: " << colour << endl;
	cout << "Radius: " << GetRadius() << " cm" << endl;
	cout << "Circumference: " << fixed << setprecision(2) << Perimeter() << " cm" << endl;
	cout << "Area: " << Area() << " square cm" << endl;
};


/*
* Function: Perimeter(void)
* Description: Calculates and returns the perimeter of the circle.
* Parameters: None
* Return: float - The perimeter of the circle.
*/
float Circle::Perimeter(void) {
	return 2 * PI * GetRadius();
};


/*
* Function: Area(void)
* Description: Calculates and returns the area of the circle.
* Parameters: None
* Return: float - The area of the circle.
*/
float Circle::Area(void) {
	return PI * GetRadius() * 2;
};


/*
* Function: OverallDimension(void)
* Description: Calculates and returns the overall dimension of the circle.
* Parameters: None
* Return: float - The overall dimension of the circle.
*/
float Circle::OverallDimension(void) {
	return 2 * GetRadius();
};