#include<iostream>
#include"matrix.cpp"
using namespace std;
ostream& operator<<(ostream& out, const Date& D)
{
	out << D.year << "/" << D.month << "/" << D.day;
	return out;
}
int main()
{
	//DateMatrix m;
	Matrix<Date> m;
	for(int i = 0;i< 5;i++)
		for (int j = 0; j < 7; j++)
		{
			m.addValue(i + 1, j + 1, Date(2000, i + 1, j + 1));
		}
	m.Print();
	cout << endl;
	cout << m.BelongTo(Date(2000,1,10)) << endl;
	cout << m.BelongTo(Date(2000,1,5)) << endl;
	cout << endl;
	m.PrintRow(5);
	cout << m.MaxValue().getYear()<<"/" <<m.MaxValue().getMonth() << "/"<< m.MaxValue().getDay() << endl;
	return 0;
}
