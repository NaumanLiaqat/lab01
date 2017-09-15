#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){


	const int size = 2;
	int array[size][size], array2[size][size], array3[size][size], i, j, k;

	cout << "Enter the elements of matrix 1" << endl;
	for (i = 0; i < size; i++){
		for (j = 0; j < size; j++){
			cout << "Enter element: " << i << j << endl;
			cin >> array[i][j];
		}
	}

	cout << "Enter the elements of matrix 2" << endl;
	for (i = 0; i < size; i++){
		for (j = 0; j < size; j++){
			cout << "Enter element: " << i << j << endl;
			cin >> array2[i][j];
		}
	}
	int A, B, C, D, E, F, G;

	A = (array[0][0] + array[1][1]) * (array2[0][0] + array2[1][1]);
	B = (array[1][0] + array[1][1]) * array2[0][0];
	C = array[0][0] * (array2[0][1] - array2[1][1]);
	D = array[1][1] * (array2[1][0] - array2[0][0]);
	E = (array[0][0] + array[0][1]) * array2[1][1];
	F = (array[1][0] - array[0][0]) * (array2[0][0] + array2[0][1]);
	G = (array[0][1] - array[1][1]) * (array2[1][0] + array2[1][1]);

	array3[0][0] = A + D - E + G;
	array3[0][1] = C + E;
	array3[1][0] = B + D;
	array3[1][1] = A - B + C + F;
	cout << "\nThe resultant is:\n";
	cout << array3[0][0] << "\t";
	cout << array3[0][1] << endl;
	cout << array3[1][0] << "\t";
	cout << array3[1][1] << endl;
	getchar();
	getchar();
	return 0;
}

