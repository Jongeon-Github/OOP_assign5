/*
* Filename: Shape.h
* Project: OOP-assign3
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jun 17, 2023
* Description: Defines the Shape class as a base class for different shapes. Provides functions to get and set the name and color of a shape.
*/

#pragma once

#include <string>

/// \class Shape
///
/// \brief The Shape class serves as a base class for different shapes, providing common functionality and attributes.
///
/// This class defines the following features:
/// - Name: Represents the name of the shape.
/// - Colour: Represents the color of the shape.
///
/// The Shape class also provides functions to get and set the name and color of a shape, as well as virtual functions to calculate the perimeter, area, and overall dimension of a shape. These virtual functions can be overridden by derived classes to provide specific implementations for each shape.
///
/// \author Jongeon Lee
///

#ifndef __SHAPE_H__
#define __SHAPE_H__


class Shape {

protected:

	// Variables
	char const* name;			///< User inputs the shape
	char const* colour;		///< User inputs the shape

public:
	// Default constructor
	Shape();										///< Constructor
	Shape(char const* shape_name, char const* shape_colour);

	// Get the name of the shape
	char const* GetName(void);					///< Get the name of the shape

	// Get the colour of the shape
	char const* GetColour(void);					///< Get the colour of the shape

	// Set the name of the shape
	void SetName(char const* newName);			///< Set the name of the shape

	// Set the colour of the shape
	void SetColour(char const* newColour);		///< Set the colour of the shape

	// Calculate the perimeter of the shape (virtual function)
	virtual float Perimeter(void);			///< Calculate the perimeter of the shape (virtual function)

	// Calculate the area of the shape (virtual function)
	virtual float Area(void);				///< Calculate the area of the shape (virtual function)

	// Calculate the overall dimension of the shape (virtual function)
	virtual float OverallDimension(void);	///< Calculate the overall dimension of the shape (virtual function)
};
#endif