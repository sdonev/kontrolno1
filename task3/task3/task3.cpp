// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	cout << "Enter the size of the array[5][5]: ";
	cin >> size;
	int arr[4][4];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "arr[" << i << "]" << "[" << j << "]";
			cin >> arr[i][j];
			bool taken;
		}
		if (arr[i][j] == 1) {
			bool taken = true;
		}
		else 
		{
			bool taken = false;
		    }
    return 0;
}

