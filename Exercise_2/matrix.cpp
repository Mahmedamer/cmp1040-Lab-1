#pragma once
#include<iostream>
#include"Date.cpp"
using namespace std;
template<class T>
class Matrix {
protected:
	T matrix[5][7];
public:
	bool addValue(int r, int c, const T& value)
	{
		if (r > 5 || c > 7)
			return false;
		matrix[r - 1][c - 1] = value;
		return true;
	}
	bool BelongTo(const T& value) const
	{
		for (int i = 0; i < 5;i++)
			for (int j = 0; j < 7; j++)
				if (matrix[i][j] == value)
				{
					return true;
				}
		return false;
	}
	bool PrintRow(int r) const
	{
		if (r > 5)
			return false;
		for (int i = 0;i < 7;i++)
			cout << matrix[r - 1][i] << " ";
		cout << endl;
		return true;
	}
	void Print() const
	{
		PrintRow(1);
		PrintRow(2);
		PrintRow(3);
		PrintRow(4);
		PrintRow(5);
	}
	T MaxValue() const
	{
		T max = matrix[0][0];
		for (int i = 0; i < 5;i++)
			for (int j = 0; j < 7; j++)
				if (matrix[i][j] > max)
				{
					max = matrix[i][j];
				}
		return max;
	}
};
// Class Template Specialization

//template<>
//class Matrix<Date>{
//protected:
//	Date matrix[5][7];
//public:
//	bool addValue(int r, int c, const Date& value)
//	{
//		if (r > 5 || c > 7)
//			return false;
//		matrix[r - 1][c - 1] = value;
//		return true;
//	}
//	bool BelongTo(const Date& value) const
//	{
//		for (int i = 0; i < 5;i++)
//			for (int j = 0; j < 7; j++)
//				if (matrix[i][j].getYear() == value.getYear() && matrix[i][j].getMonth() == value.getMonth() && matrix[i][j].getDay() == value.getDay())
//				{
//					return true;
//				}
//		return false;
//	}
//	bool PrintRow(int r) const
//	{
//		if (r > 5)
//			return false;
//		for (int i = 0;i < 7;i++)
//			cout << matrix[r - 1][i].getYear() << "/" << matrix[r - 1][i].getMonth() << "/" << matrix[r - 1][i].getDay() << " ";
//		cout << endl;
//		return true;
//	}
//	void Print() const
//	{
//		PrintRow(1);
//		PrintRow(2);
//		PrintRow(3);
//		PrintRow(4);
//		PrintRow(5);
//	}
//	Date MaxValue() const
//	{
//		Date max = matrix[0][0];
//		for (int i = 0; i < 5;i++)
//			for (int j = 0; j < 7; j++)
//				if (
//					(matrix[i][j].getYear() > max.getYear()) 
//					||
//					(matrix[i][j].getYear() == max.getYear() && matrix[i][j].getMonth() > max.getMonth()) 
//					|| 
//					(matrix[i][j].getYear() == max.getYear() && matrix[i][j].getMonth() == max.getMonth() && matrix[i][j].getDay() > max.getDay())
//					)
//				{
//					max = matrix[i][j];
//				}
//		return max;
//	}
//};

// Inheritance

//class DateMatrix : public Matrix<Date> {
//public:
//	bool BelongTo(const Date& value) const
//	{
//		for (int i = 0; i < 5;i++)
//			for (int j = 0; j < 7; j++)
//				if (matrix[i][j].getYear() == value.getYear() && matrix[i][j].getMonth() == value.getMonth() && matrix[i][j].getDay() == value.getDay())
//				{
//					return true;
//				}
//		return false;
//	}
//	bool PrintRow(int r) const
//	{
//		if (r > 5)
//			return false;
//		for (int i = 0;i < 7;i++)
//			cout << matrix[r - 1][i].getYear() << "/" << matrix[r - 1][i].getMonth() << "/" << matrix[r - 1][i].getDay() << " ";
//		cout << endl;
//		return true;
//	}
//	Date MaxValue() const
//	{
//		Date max = matrix[0][0];
//		for (int i = 0; i < 5;i++)
//			for (int j = 0; j < 7; j++)
//				if (
//					(matrix[i][j].getYear() > max.getYear()) 
//					||
//					(matrix[i][j].getYear() == max.getYear() && matrix[i][j].getMonth() > max.getMonth()) 
//					|| 
//					(matrix[i][j].getYear() == max.getYear() && matrix[i][j].getMonth() == max.getMonth() && matrix[i][j].getDay() > max.getDay())
//					)
//				{
//					max = matrix[i][j];
//				}
//		return max;
//	}
//};
