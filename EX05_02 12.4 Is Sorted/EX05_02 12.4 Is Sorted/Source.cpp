//Ryan Teo
//CS 172
//EX05_02 12.4 Is Sorted?

#include <iostream>
#include <string>
using namespace std;

//creates template
template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size - 1; i++) //checks all elements in the array
	{
		if (list[i] > list[i + 1]) //if the current element is greater than the one after then return false
		{						
			return false;
		}
	}
	return true; //if not false then return true
}

int main()
{
	//test program
	int intArray[] = { 1, 4, 4, 2, 5, -3, 6, 2 }; //array of ints
	cout << (isSorted(intArray, 8) ? "true" : "false") << endl;

	double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 }; //array of doubles
	cout << (isSorted(doubleArray, 5) ? "true" : "false") << endl;

	string stringArray[] = { "aa", "bb", "cc", "dd" }; //array of strings
	cout << (isSorted(stringArray, 4) ? "true" : "false") << endl;

	return 0;
}