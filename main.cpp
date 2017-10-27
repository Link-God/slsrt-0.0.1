#include "stdafx.h"
#include < iostream>
#include <utility>
#include<sstream>
using namespace std;
void selection_sort(double * array , unsigned int size)
{
	for (unsigned int i = 0; i < size; i++)
	{
		for (unsigned int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				swap(array[i], array[j]);
			}
		}
	}
}
bool read(double * array, unsigned int size)
{
	string mas;
	unsigned int i = 0 , array_count=0;
	getline(cin, mas);
	istringstream stream(mas);
	for (i; i < size; i++)
	{
		if (stream >> array[i])
		{
			array_count++;
		}
	}
	if (array_count ==size) return true;
	else return false;
}
void print(double * array, unsigned int size)
{
	for (unsigned int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}
int main()
{
	double * array;
	unsigned int size;
	cin >> size;
	cin.get();
	array = new double[size];
	if(read(array, size))
	{ 
		selection_sort(array, size);
		print(array, size);
		cin.get();
	}
	else
	{
		cout << "fail input ";
		cin.get();
	}
	delete array;
    return 0;
}
