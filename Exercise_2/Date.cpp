#pragma once
class Date {
	int day, month, year;
public:
	// Must Decare a defualt constructor
	Date(int y = 1990, int m = 1, int d = 1) :year(y), month(m), day(d) {}; // Validation Should Be Considered
	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }
};