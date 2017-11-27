// ConsoleApplication36.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

int main()
{
	int size = 0;
	cout << "Enter the size of the array: ";
	cin >> size;
	int arr[100][100];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "arr[" << i << "]" << "[" << j << "]";
			cin >> arr[i][j];
		}
		int sum1, sum2;
		sum1 = arr[0][0] + arr[1][1] + arr[2][2] + arr[3][3] + arr[4][4];
		sum2 = arr[4][0] + arr[3][1] + arr[2][2] + arr[1][3] + arr[0][4];
		if (sum1 >= sum2) {
			cout << "The sum of the numbers in the main diagonal is bigger than the sum of the second one." << endl;

		}
		if (sum2 >= sum1) {
			cout << "The sum of the numbers in the main diagonal is smaller than the sum of the second one." << endl;

        }
		if (sum1 == sum2) {
			cout << "Both sums are equal.";
		}
		
	}

    return 0;
}

