#ifndef NUMDAYS_H 
#define NUMDAYS_H

#include <iostream>
using namespace std;

class NumDays
{
public:
	NumDays();
	NumDays(int h);

	void setHours(int h);
	void setHours(int d, int h);     
	int getDays() const;
	int getHours() const;
	friend NumDays operator+(const NumDays& r, const NumDays& l);
	friend NumDays operator-(const NumDays& r, const NumDays& l);
	NumDays operator++();
	NumDays operator++(int);
	NumDays operator--();
	NumDays operator--(int);
	void print(std::ostream& out);
	operator double() const;
private:
	int hours;
	
};

#endif 

