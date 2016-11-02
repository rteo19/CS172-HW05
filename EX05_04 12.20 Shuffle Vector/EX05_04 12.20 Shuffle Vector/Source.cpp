//Ryan Teo
//CS 172
//EX05_04 12.20 Shuffle Vector

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

template<typename T>
void shuffle(vector<T> &v);

int main()
{
	//test program
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 }; //creates vector with 10 int values

	//outputs original vector
	cout << "Unshuffled vector: ";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	shuffle(v); //shuffles the vector

	//ouputs the shuffled vector
	cout << "Shuffled vector: ";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
		
	return 0;
}

template<typename T>
void shuffle(vector<T> &v)
{
	srand(time(NULL));
	for (int i = 0; i < v.size(); i++) //shuffles every element at least once
	{
		int x = rand() % v.size(); //picks a random number between 0 and 1 less than the size of v (since vectors count from 0)
		T temp = v[x]; //creates a temp vector and assigns it the value at the random element
		v[x] = v[i]; //assigns the value at i to the random element
		v[i] = temp; //assigns the value of the temp vector(value at the random element) to the element at i

		//the above code basically picks a random element at swaps its value with the value of whatever element i is
		//so if the random number is 5 and i = 0, then it will swap the values of the first and sixth elements
	}
}
