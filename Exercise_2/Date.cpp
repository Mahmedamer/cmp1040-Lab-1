#pragma once
#include<iostream>
using namespace std;
class Date {
	int day, month, year;
public:
	// Must Decare a defualt constructor
	Date(int y = 1990, int m = 1, int d = 1) :year(y), month(m), day(d) {}; // Validation Should Be Considered
	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }
	// Operator Overloading
	bool operator==(const Date& D2) const
	{
		if (year == D2.year && month == D2.month && day == D2.day)
		{
			return true;
		}
		return false;
	}
	bool operator>(const Date& D2) const
	{
		if (
			(year > D2.year)
			||
			(year == D2.year && month > D2.month)
			||
			(year == D2.year && month == D2.month && day > D2.day)
			)
		{
			return true;
		}
		return false;
	}
	friend ostream& operator<<(ostream&, const Date& );
};
