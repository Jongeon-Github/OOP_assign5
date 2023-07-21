/*
* Filename: Square.h
* Project: OOP-assign3 (and assign5)
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jul 22, 2023
* Description: This header file defines the Square class, which is derived from the Shape class. It introduces additional member variables and
			  overrides the virtual functions to calculate the perimeter, area, and overall dimension specific to a sqiare.
*/


#pragma once

#include "Shape.h"

/// \class Square
///
/// \brief The Square class represents a square shape, derived from the base Shape class.
///
/// This class inherits the name and colour attributes from the Shape class and introduces an additional member variable:
/// - SideLength: Represents the length of each side of the square.
///
/// The Square class overrides the virtual functions defined in the Shape class to provide specific implementations for calculating the perimeter, area, and overall dimension of a square.
///
/// \author Jongeon Lee
///

#ifndef __SQUARE_H__
#define __SQUARE_H__


class Square : public Shape {
private:
	// Variables
	float sideLength;					///< User inputs side length

public:
	// Default constructor
	Square();							///< constructor and destructor
	Square(const char* col, float sdlng);
	~Square();

	// Get the side length of the square
	float GetSideLength(void);			///< Get the side length of the square

	// Set the side length of the square
	void SetSideLength(float sdlng);	///< Set the side length of the square

	// Show information about the square
	void Show(void);					///< Show information about the square

	// Calculate the perimeter of the square
	float Perimeter(void);				///< Calculate the perimeter of the square

	// Calculate the area of the square
	float Area(void);					///< Calculate the area of the square

	// Calculate the overall dimension of the square
	float OverallDimension(void);		///< Calculate the overall dimension of the square

	// Overloaded + operation
	Square operator+(const Square& rhs) const;		///< Overloaded + operation
	// Overloaded * operation
	Square operator*(const Square& rhs) const;		///< Overloaded * operation
	// Overloaded = operation
	Square& operator=(const Square& rhs);			///< Overloaded = operation
	// Overloaded == operation
	bool operator==(const Square& rhs) const;		///< Overloaded == operation
};
#endif