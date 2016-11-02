//Ryan Teo
//CS 172
//EX05_03 12.8 Implement Vector Class

#include <iostream>
using namespace std;

//creates vector class
template<typename T>
class vector
{
private:
	int vectorSize; //number of elements in vector
	T elements[1000]; //a vector of any type that hold up to 1000 elements
public:
	
	//empty constructor with specified element type T
	vector<T>()
	{
		vectorSize = 0;
	}
	
	//constructor with initial size
	vector<T>(int size)

	{
		vectorSize = size;
	}

	//constructor with initial size and specified values
	vector<T>(int size, T defaultValue)
	{
		vectorSize = size;
		elements = defaultValue;
	}

	//add one to vectorSize and assign it the value of the new element
	void push_back(T element)
	{
		elements[vectorSize++] = element;
	}

	//decrease vectorSize by one which removes the last element
	void pop_back()
	{
		vectorSize--;
	}
	
	//returns vectorSize which is the number of elements
	unsigned const size()
	{
		return vectorSize;
	}

	//returns the value of the element at the specified index
	const T at(int index)
	{
		return elements[index];
	}

	//checks if the vectorSize is equal to zero. If it is then the vector is empty
	const bool empty()
	{
		if (vectorSize == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	//sets the vectorSize to zero which deletes all the elements
	void clear()
	{
		vectorSize = 0;
	}

	//swaps an existing vector "elements" with the specified vector "v2"
	void swap(vector& v2)
	{
		T temp[1000]; //creates temporary vector
		int tempSize = v2.size(); //sets size of temp vector to the size of v2

		//assigns all the elements in the temp vector the values of the elements in v2
		for (int i = 0; i < v2.size(); i++)
		{
			temp[i] = v2.at(i);
		}

		v2.clear(); //deletes all the elements in v2

		//stores the values of the existing vector's elements in v2
		for (int i = 0; i < size(); i++)
		{
			v2.push_back(at(i));
		}

		clear(); //deletes all the elements in the existing vector

		//stores the values of the temp vector(v2's values) in the existing vector
		for (int i = 0; i < tempSize; i++)
		{
			push_back(temp[i]);
		}
	}
};

int main()
{
	//test program
	vector<int> v1; //creates empty vector v1
	vector<int> v2; //creates empty vector v2

	//tests size() and at() functions for v1 and v2
	cout << "Numbers in v1: "; 
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "Numbers in v2: ";
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2.at(i) << " ";
	}
	cout << endl;

	//tests push_back function for v1 and v2
	cout << "After storing numbers using the push_back function" << endl;

	for (int i = 10; i < 20; i++)
	{
		v2.push_back(i + 1);
	}

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i + 1);
	}

	cout << "Numbers in v1: ";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "Numbers in v2: ";
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2.at(i) << " ";
	}
	cout << endl;

	//tests pop_back function
	v1.pop_back();

	cout << "After popping one element off v1" << endl;

	cout << "Numbers in v1: ";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//test swap function

	v1.swap(v2);

	cout << "After swapping v1 and v2" << endl;

	cout << "Numbers in v1: ";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "Numbers in v2: ";
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2.at(i) << " ";
	}
	cout << endl;

	//tests clear function
	cout << "v1 is empty? " << (v1.empty() ? "true" : "false") << endl;

	v1.clear();

	cout << "After clearing v1" << endl;

	cout << "v1 is empty? " << (v1.empty() ? "true" : "false") << endl;

	return 0;
}
