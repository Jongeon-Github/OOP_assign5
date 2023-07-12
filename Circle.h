/*
* Filename: Circle.h
* Project: OOP-assign3
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jun 17, 2023
* Description:This header file defines the Circle class, which is derived from the Shape class. It introduces additional member variables and
			  overrides the virtual functions to calculate the perimeter, area, and overall dimension specific to a circle.
*/

#pragma once

#include "Shape.h"

/// \class Circle
///
/// \brief The Circle class represents a circle shape, derived from the base Shape class.
///
/// This class inherits the name and colour attributes from the Shape class and introduces additional member variables:
/// - Radius: Represents the radius of the circle.
/// - PI: Represents the mathematical constant pi.
///
/// The Circle class overrides the virtual functions defined in the Shape class to provide specific implementations for calculating the perimeter, area, and overall dimension of a circle.
///
/// \author Jongeon Lee
///

using namespace std;

#ifndef __CIRCLE_H__
#define __CIRCLE_H__


class Circle : public Shape {
private:
	// Variables
	float radius;					///< User inputs radius
	float PI;						///< This is pi value

public:
	// Default constructor
	Circle();						///< constructor
	Circle(char* col, float rad);
	~Circle();

	// Get the radius of the circle
	float GetRadius(void);			///< Get the radius of the circle

	// Set the radius of the circle
	void SetRadius(float rad);		///< Set the radius of the circle

	// Show information about the circle
	void Show(void);				///< how information about the circle

	// Calculate the perimeter of the circle
	float Perimeter(void);			///< Calculate the perimeter of the circle

	// Calculate the area of the circle
	float Area(void);				///< Calculate the area of the circle

	// Calculate the overall dimension of the circle
	float OverallDimension(void);	///< Calculate the overall dimension of the circle
};
#endif