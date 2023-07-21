/// \mainpage Shape Project   
/// \note Creates and displays information about circles and squares.
/// \image html shape_intro.jpg
///
///
/// \section intro Program Introduction
/// The <b>Shape</b> program allows users to create and display information about
/// circles and squares. Users can select a shape, specify its attributes such as
/// color, radius, or side length, and view calculated measurements such as perimeter,
/// area, and overall dimension. The program prompts the user for input, creates 
/// the corresponding shape object, performs the necessary calculations, and displays 
/// the information.
///
///
/// Major Shape project features to note are:
/// 
/// - The program allows users to <b>create</b> and <b>display information</b> about circles and squares 
/// - Users can select a shape from the provided options: <b>Circle or Square</b>
/// - Users can set the shape's attributes, such as <b>color, radius</b> (for circles), or <b>side length</b> (for squares)
/// - The program calculates and displays measurements for the selected shape, <b>including perimeter, area, and overall dimension</b>
///
///
/// That list of major Shape project features are:
/// -# Creation and display of circles and squares 
/// -# Shape selection and attribute setting
/// -# Calculation and display of shape measurements
/// -# Input validation and error handling
/// -# Implementation of shape classes and objects
/// -# Utility functions for user input
///
///
///
/// <hr>
/// \section notes Special Release Notes
/// If you are tracking the versioning of your project software (as you would in the real world) then this is a good place to
/// indicate (on a per version basis):
/// - Create features and calculated its size
/// - Using overload operator +, *, =, ==
/// - etc.
///
/// <hr>
/// \section sampleTextFile Configuration File
/// I can include the contents of TEXT files <i>as is</i> directly into the DOxygen comments
/// \verbinclude DogProject.cfg
///
/// <hr>
/// \section requirements Project Requirements
/// There are Shpare project requirements
///
/// - Circle Class:
/// -# Overloaded + operation: Add two circles, set the color to LHS, and radius to the sum of radii.
/// -# Overloaded * operation: Multiply two circles, set the color to RHS, and radius to the product of radii.
/// -# Overloaded = operation: Assign color and radius of one circle to another.
/// -# Overloaded == operation: Check if two circles have the same color and radius with a small variance for floats.
/// - Square Class:
/// -# Overloaded + operation: Add two squares, set the color to LHS, and side length to the sum of sides.
/// -# Overloaded * operation: Multiply two squares, set the color to RHS, and side length to the product of sides.
/// -# Overloaded = operation: Assign color and side length of one square to another.
/// -# Overloaded == operation: Check if two squares have the same color and side length with a small variance for floats.
/// - TestHarness:
/// -# Remove previous main code.
/// -# Create Circle and Square objects with specified attributes and default constructors.
/// -# Print out the specifics of each shape.
/// -# Use overloaded operators to add, multiply, and assign circles and squares as required.
/// -# Print out the specifics of playARound and playASquare after the operations.
/// -# Test if playARound is equivalent to round1 and print "Hurray !!" or "Awww !!" based on the result.
///
///
/// <i>Please Note : The requirement(s) summary doesn't have to be an SRS by any means ...
/// <hr> 
/// \todo [optionally include text about more work to be done]
/// - REQ   : Professor will be given this week :'-(
///
/// <hr>
/// \bug [optionally include known bugs and limitations within the project here]
/// - BUG   : None #1
/// - ISSUE : None
/// 
/// <hr>
/// \section version Current version of the Shape Project :
/// <ul>
/// <li>\authors   The <b><i>Shape</i></b> Expert Team !!</li>
/// <li>\version   2.00</li>
/// <li>\date      2023-07-22</li>
/// <li>\pre       This is initial <i>Shape Project</i> version</li>
/// <li>\warning   It is not <i>perfect Shape project<i> <b>yet</b></li>
/// <li>\copyright Shape-Jongeon</li>
/// </ul>
///