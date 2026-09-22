/**
* @file Lab3_maldosari.cpp
* @author Musab Aldosari
* @date 2026-09-21
* @brief A program that calculates the Area of a Rectangle and a Circle
*/

#include <iostream>

using namespace std;

int main()
{
	//Step 1 Declare variables
	const double PI = 3.14159;
	int choice;
	double length, width, radius;

	//Step 2 Display menu and get user choice
	cout << "Menu\n";
    cout << "1. Calculate Area of a Rectangle\n";
	cout << "2. Calculate Area of a Circle\n";
	cout << "3. Quit\n";
	cout << "Please make a menu selection: ";
	cin >> choice;

	//Step 3 - User Choice 1. Calculate Area of Rectangle
	if (choice == 1)
	{
		cout << "Please enter the length of the rectangle: ";
		cin >> length;
		cout << "Please enter the width of the rectangle: ";
		cin >> width;
		cout << "The area of the rectangle is: " << length * width << endl;
	}
	//Step 4 - User Choice 2. Calculate Area of Circle
	else if (choice == 2)
	{
		cout << "Please enter the radius of the circle: ";
		cin >> radius;
		cout << "The area of the circle is: " << PI * (radius * radius) << endl;
	}

	//End program
	return 0;
}