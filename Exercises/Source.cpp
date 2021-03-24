#include<iostream>
using namespace std;
template<class T>
T getMin(const T* Arr, int size) 
{
	// set min initially to first element in array
	T min = Arr[0];
	// loop from second element to the end of the array  
	for (int i = 1; i < size;i++)
	{
		// check if the current element is smaller than the min
		if (Arr[i] < min)
		{ 
			min = Arr[i];
		}
	}
	return min;
}
int main()
{
	int intArray[] = { 1, 6, 8, 0, 6, -8, 10 }; // size = 7
	char charArray[] = { 'c', 'v', 'a', 'F', 'X', 'M' }; // size = 6
	long longArray[] = { 100000, 320461, 34324121, 24234234, 11111111 }; // size = 5
	double doubleArray[] = { 23.1, 3.5, 79.4, 68.4 }; // size = 4
	string stringArray[] = { "mohamed", "ahmed", "ali" }; // size = 3
	// Test with int
	cout << "Testing With int" << endl;
	cout << getMin(intArray , 7) << endl;
	// Test with long
	cout << "Testing With long" << endl;
	cout << getMin(longArray, 5) << endl;
	// Test with char
	cout << "Testing With char" << endl;
	cout << getMin(charArray, 6) << endl;
	// Test with double
	cout << "Testing With double" << endl;
	cout << getMin(doubleArray, 4) << endl;
	// Test with string
	cout << "Testing With string" << endl;
	cout << getMin(stringArray, 3) << endl;
	return 0;
}