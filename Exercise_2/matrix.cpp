#include<iostream>
using namespace std;
template<class T>
class Matrix {
	T matrix[5][7];
public:
	bool addValue(int, int, const T&);
	bool BelongTo(const T&) const;
	bool PrintRow(int) const;
	void Print() const;
	T MaxValue() const;
};
template<class T>
bool Matrix<T>::addValue(int r, int c, const T& value)
{
	if (r > 5 || c > 7)
		return false;
	matrix[r - 1][c - 1] = value;
	return true;
}
template<class T>
bool Matrix<T>::BelongTo(const T& value) const
{
	for (int i = 0; i < 5 ;i++)
		for (int j = 0; j < 7; j++)
			if (matrix[i][j] == value)
			{
				return true;
			}
	return false;
}
template<class T>
bool Matrix<T>::PrintRow(int r) const
{
	if (r > 5)
		return false;
	for (int i = 0;i < 7;i++)
		cout << matrix[r - 1][i] << " ";
	cout << endl;
	return true;
}
template<class T>
void Matrix<T>::Print() const
{
	PrintRow(1);
	PrintRow(2);
	PrintRow(3);
	PrintRow(4);
	PrintRow(5);
}
template <class T>
T Matrix<T>::MaxValue() const
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