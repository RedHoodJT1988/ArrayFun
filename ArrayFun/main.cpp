#include <iostream>
#include <array>
using namespace std;

int main()
{
	/*const int ARRAY_SIZE = 5;
	int myArray[ARRAY_SIZE];
	string names[4]{ "Bob", "Sally", "John", "Ed" };

	myArray[0] = 15;
	myArray[1] = 20;
	myArray[2] = 22;
	myArray[3] = 13;
	myArray[4] = 6;*/

	/*for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}*/

	/*for (int i = 0; i < 4; i++)
	{
		cout << names[i] << endl;
	}*/
	/*for (string name : names)
	{
		cout << name << endl;
	}*/

	array<int, 5> myIntArray{};

	myIntArray[0] = 2;
	myIntArray[1] = 5;
	myIntArray[2] = 10;
	myIntArray[3] = 1;
	myIntArray[4] = 17;

	for (int a : myIntArray)
	{
		cout << a << endl;
	}

	cout << "Size of array: " << myIntArray.size() << endl;

	return 0;
}