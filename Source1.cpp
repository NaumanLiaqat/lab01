#include<iostream> //including library
using namespace std;

int matmul(); // declaration of matrix multiplication function

void main(){
	matmul();    //calling matrix multiplication function
	
int matmul(){

	const int size = 3;  //constant int for both the matrices to be square
	int i , j = 0,k=0,sum=0;
	int array[size][size];
	int array2[size][size];
	int array3[size][size];

	cout << "Values of first matrix : " << endl;
	for (int x = 0; x < size; x++){
		for (int y = 0; y < size; y++){
			i = rand() % 100 + 1;  //generating random values for matrix 1
		 array[x][y]=i;
		 cout <<array[x][y] << "\t" ;
		}
		cout << "\n";
	}
	cout << "Values of second matrix : " << endl;
	for (int a = 0; a < size; a++){
		for (int b = 0; b < size; b++){
			i = rand() % 100 + 1;    //generating random values for matrix 2
			array2[a][b] = i;
			cout << array2[a][b] << "\t";
		}
		cout << "\n";
	}
	cout << "\n\nAfter Multiplication: \n";
	for (i = 0; i<size; i++)
	{
		for (j = 0; j<size; j++)
		{
			sum = 0;
			for (k = 0; k<size; k++)
			{
				sum = sum + array[i][k] * array2[k][j];    //calculating sum
			}
			array3[i][j] = sum;   
		}
	}
	
	for (i = 0; i<size; i++)
	{
		for (j = 0; j<size; j++)                     //displaying of result
		{
			cout << array3[i][j] << "\t";
		}
		cout << "\n";
	}
	return 0;
}

