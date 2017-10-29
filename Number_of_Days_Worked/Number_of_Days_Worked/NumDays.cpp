#include "NumDays.h"
#include <ostream>
#include <iostream>
using namespace std;

NumDays::NumDays()        // default constructor
{
	hours = 0;
}
NumDays::NumDays(int h)   //constructor
{
	hours = h;
}
void NumDays::setHours(int h)
{
	hours = h;
}
/*
This function takes number of days and hours as input
and converts to hours and stores it into hours member variable 
*/
void NumDays::setHours(int d, int h)
{
	hours = (d * 8) + h;
}
int NumDays::getDays() const
{
	return hours / 8;     //8 hours in the working day
}
/*
This function returns hours remaining after
hours have been divided by 8 to calculate days.
If there 12 hours worked then function will return 4 (12 % 8 = 4)
*/
int NumDays::getHours() const
{
	return hours % 8;
}
/*
overloaded "+" operator
*/
NumDays operator+(const NumDays& r, const NumDays& l)
{
	return r.hours + l.hours;
}
/*
overloaded "-" operator
*/
NumDays operator-(const NumDays& r, const NumDays& l)
{
	return r.hours - l.hours;
}
/*
overloaded prefix increment operator
 */
NumDays NumDays::operator++()
{
	return ++hours;
}
/*
overloaded postfix increment operator
*/
NumDays NumDays::operator++(int)
{
	int temp = hours;
	hours += 1;
	return temp;

}
/*
overloaded prefix decrement operator
*/
NumDays NumDays::operator--()
{
	return --hours ;
}
/*
overloaded postfix decrement operator
*/
NumDays NumDays::operator--(int)
{
	int temp = hours;
	hours -= 1;
	return temp;
}
/*
conversion function to convert NumDays to double
*/
NumDays::operator double() const
{
	return hours / 8.0;
}
/*
Prints days and hours into the output stream
*/
void NumDays::print(std::ostream& out)
{
	out << getDays() << "d " << getHours() << "h";
}