/*
* Filename: myShape.cpp
* Project: OOP-assign3
* Student ID: 8790144
* By: Jongeon Lee
* Date: Jun 17, 2023
* Description:This program creates and displays information about circles and squares.
*		      Users can select a shape, set its attributes, and view calculated measurements.
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

#define MAX_NAME 50
#define MAX_COLOUR 10

#pragma warning(disable:4996)


// local function prototypes
int		getInteger(void);
float	getFloat(void);
int		getString(char* myString);

int main(void)

{
	char newName[MAX_NAME] = { 0 };
	char newColour[MAX_COLOUR] = { 0 };
	float newRadius = 0.00;
	float newSideLength = 0.00;
	
	Circle* cir = nullptr;
	Square* squ = nullptr;

	cout << "Slect the shape (list: Circle, Square)" << endl;
	cout << "Select : ";
	
	if (getString(newName) != 0) {
		cout << "ERROR invalid input" << endl;
		return 0;
	}
	
	cout << "Slect the shape`s colour (list: red, green, blue, yellow, purple, pink, orange)" << endl;
	cout << "Select : ";

	if (getString(newColour) != 0) {
		cout << "ERROR invalid input" << endl;
		return 0;
	}

	if (strcmp(newName, "Circle") == 0) 
	{
		cir = new Circle();
		cir->SetName(newName);
		cir->SetColour(newColour);
		cout << "Enter the radius of circle: ";
		newRadius = getFloat();
		cir->SetRadius(newRadius);
		cir->Perimeter();
		cir->Area();
		cir->OverallDimension();
		cir->Show();
		delete cir;
	}
	else if (strcmp(newName, "Square") == 0) {
		squ = new Square();
		squ->SetName(newName);
		squ->SetColour(newColour);
		cout << "Enter the side length of square: ";
		newSideLength = getFloat();
		squ->SetSideLength(newSideLength);
		squ->Perimeter();
		squ->Area();
		squ->OverallDimension();
		squ->Show();
		delete squ;
	}
	return 0;
}


// some useful functions
int getInteger(void)
{
	char	record[121] = { 0 };	/* record stores the string */
	int 	number = 0;

	/* use fgets() to get a string from the keyboard */
	fgets(record, sizeof(record), stdin);

	/*  extract the number from the string; sscanf() returns
		a number corresponding with the number of items it
		found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		 * the system, set number to -1 */
		number = -1;
	}

	return number;
}

float getFloat(void)
{
	char	record[121] = { 0 };	/* record stores the string */
	float 	number = 0.00;

	/* use fgets() to get a string from the keyboard */
	fgets(record, sizeof(record), stdin);

	/*  extract the number from the string; sscanf() returns
		a number corresponding with the number of items it
		found in the string */
	if (sscanf(record, "%f", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		 * the system, set number to -1.00 */
		number = -1.00;
	}

	return number;
}

int getString(char* myString)
{
	char	record[121] = { 0 };	/* record stores the string */
	int		retCode = 0;		/* success code */

	/* use fgets() to get a string from the keyboard */
	fgets(record, sizeof(record), stdin);

	/*  extract the number from the string; sscanf() returns
		a number corresponding with the number of items it
		found in the string */
	if (sscanf(record, "%s", myString) != 1)
	{
		/* if the user did not enter a number recognizable by
		 * the system, set number to -1 */
		retCode = -1;
	}

	return retCode;
}