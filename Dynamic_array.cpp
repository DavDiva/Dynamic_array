#include <iostream>
using namespace std;

int main()
{
	int size = 10;
	int* arr;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%20;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
		cout << arr+i << endl;
	}
	delete[] arr;
	arr = nullptr;
	cout << arr << endl;
	return 0;
}

