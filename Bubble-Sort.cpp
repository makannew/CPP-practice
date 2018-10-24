#include "stdafx.h"
#include <iostream>

using namespace System;

int main(array<System::String ^> ^args)
{
	int x[] = { 6,94,0,-6,18,-76,100,4,6,3,9,10,2,1,76,25,23,212,-9,0 }; // Example array of integer that needs to be sorted
	bool sorted = false; // initialy assume array is not sorted
	int x_size = sizeof(x)/sizeof(x[0]); // calculate the number of array elements
	//here is bubble sort algorithm
	while (sorted != true)
	{
		sorted = true;
		for (int i = 0; i<x_size-1; ++i)
		{
			if(x[i] > x[i + 1])
			{
				std::swap(x[i], x[i + 1]);
				sorted = false;
			}
		}
	}
	//print sorted array
	for (int i = 0; i < x_size; ++i)
	{
		std::cout << x[i] << " ";
	}


    return 0;
}
