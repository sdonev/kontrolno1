// ConsoleApplication35.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

int main()
{
	int n = 0;
	int arr[MAX_SIZE];
	cout << "Enter the size of the array: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "]:";
		cin >> arr[i];
	}
	int c1 = 0, c2 = 11, c3 = 12, c4 = 13;
	for (int i = 0; i < n; i++) {
		if (arr[i] = { c1,c2,c3,c4 }) {
			cout << "There are enough cards for one full deck"<<endl;
		
		
		}
		else {
			cout << "There are not enough cards." << endl;
		}
		

	}
    return 0;
}

