#include "NumDays.h"
#include <ostream>
#include <iostream>
using namespace std;


int main()
{
	NumDays daysWorked(66);   //object of NumDays class

	//output info
	cout << "Here is how many days he worked: " << daysWorked.getDays() << endl;
	cout << "Here is how many hours he worked: " << daysWorked.getHours() << endl;

	
	cout << "Here is how many days and hours he worked: ";
	daysWorked.print(std::cout);
	cout << endl;
	cout << "Here we display results first and then increment hours by one: ";
	(daysWorked++).print(std::cout);
	cout << endl;
	cout << "Here we increment hours by 1 and then display results: ";
	(++daysWorked).print(std::cout);
	cout << endl;
	
	cout << "Here we decrement hours by 1 and then display results: ";
	(--daysWorked).print(std::cout);
	cout << endl;
	cout << "Here we display results first and then decrement hours by one: ";
	(daysWorked--).print(std::cout);
	cout << endl;
	cout << "Here is the decimal representation of days and hours worked: ";
	double days = daysWorked;
	cout << days << endl;

	cout << endl << endl;
	system("pause");
    return 0;
}

