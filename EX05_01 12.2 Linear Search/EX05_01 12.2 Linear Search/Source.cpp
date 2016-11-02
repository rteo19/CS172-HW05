//Ryan Teo
//CS 172
//EX05_01 12.2 Linear Search

#include <iostream>
#include <string>
using namespace std;

//create template
template <typename T>
int linearSearch(T list[], T key, int arraySize) //list[] and key are T because they must be any data type
{
	for (int i = 0; i < arraySize; i++) //checks every element in the array
	{
		if (key == list[i]) //if the key matches any element in the array, output the number of the element
			return i;
	}
	return -1; //else output -1 if there is no element that matches key
}

int main()
{
	//test program
	int intArray[] = { 1, 4, 4, 2, 5, -3, 6, 2 }; //array of ints
	cout << linearSearch(intArray, 4, 8) << endl;
	
	double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 }; //array of doubles
	cout << linearSearch(doubleArray, 2.2, 5) << endl;

	string stringArray[] = { "aa", "bb", "cc", "dd" }; //array of strings
	cout << linearSearch(stringArray, string("bb"), 4) << endl;

	return 0;
}