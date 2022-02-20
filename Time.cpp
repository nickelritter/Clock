#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

// Constructor Function
Time::Time()
{
	// value of 0 assigned to 3 integers in class 'Time'
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int h, int m, int s)
{
	setTime(h, m, s);
}

void Time::setTime(int h, int m, int s)
{
	// runs thru constructor functions to validate inputs. 
	// after validation, assigns input to 'class' integers.
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	if (h >= 0 && h <= 23)
	{
		hour = h;
	}
}

void Time::setMinute(int m)
{
	if (m >= 0 && m <= 59)
	{
		minute = m;
	}
}

void Time::setSecond(int s)
{
	if (s >= 0 && s <= 59)
	{
		second = s;
	}
}


void Time::printMilitary() // outputs military time
{
	cout << setfill('0') << setw(2) << hour
		<< setfill('0') << setw(2) << minute;
}

void Time::printStandard() // outputs standard time
{
	cout << (hour > 12 ? hour - 12 : hour) << ":"
		<< setfill('0') << setw(2) << minute << ":"
		<< setfill('0') << setw(2) << second
		<< (hour >= 12 ? " pm" : " am");  //Figure out am/pm
}
