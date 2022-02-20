/* File: Clock.cpp
*  Programmer: Steven Heid
*  Course: COP 2931
*
*  Purpose:
*  Write a class for time objects that store three integer values for hour, minute, and second.
*  Also, write a program to test the functionality of your class.  Make sure it does all of the following:
*
*	-Create time objects with no values (default)
*	-Create time objects with all three values (hour, minute, second)
*	-Change the value for hour
*	-Display military time
*	-Display standard time
*/

#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;


int main()
{
	Time defaultTime;  // creates class-'Time' called 'defaultTime'
	Time inputTime(0, 0, 0);  // creates class-'Time' called 'inputTime' with 3 variables

	inputTime.setHour(18);  // 'inputTime' > 'setHour' assigned value of 18

	defaultTime.printMilitary(); // 'defaultTime' constructor function call to output military time
	cout << endl;

	defaultTime.printStandard(); // 'defaultTime' constructor function call to output standard time
	cout << endl;

	inputTime.printMilitary(); // 'inputTime' constructor function call to output military time
	cout << endl;

	inputTime.printStandard(); // 'inputTime' constructor function call to output standard time
	cout << endl;

	system("pause");
}
