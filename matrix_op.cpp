#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int** input_matrix(int n)
{
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[n];
	for (int i1 = 0; i1 < n; i1++)
		for (int i2 = 0; i2 < n; i2++)
			cin >> matrix[i1][i2];
	return matrix;
}

int** matrix_degree(int** matrix, int** matrix2, int n)
{
	int sum = 0;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}
	for (int i1 = 0; i1 < n; i1++)
	{
		for (int i2 = 0; i2 < n; i2++)
		{
			sum = 0;
			for (int i3 = 0; i3 < n; i3++)
				sum += matrix2[i1][i3] * matrix[i3][i2];
			arr[i1][i2] = sum;
		}
	}
	return arr;
	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;
}

int** plus_matrixes(int** arr1, int** arr2, int n)
{
	int** arr3 = new int* [n];
	for (int i = 0; i < n; i++)
		arr3[i] = new int[n];
	for (int i1 = 0; i1 < n; i1++)
		for (int i2 = 0; i2 < n; i2++)
			arr3[i1][i2] = arr1[i1][i2] + arr2[i1][i2];
	return arr3;
}

int** minus_matrixes(int** arr1, int** arr2, int n)
{
	int** arr3 = new int* [n];
	for (int i = 0; i < n; i++)
		arr3[i] = new int[n];
	for (int i1 = 0; i1 < n; i1++)
		for (int i2 = 0; i2 < n; i2++)
			arr3[i1][i2] = arr1[i1][i2] - arr2[i1][i2];
	return arr3;
}

int** matrixE(int** matrix,int num, int n)
{
	for (int i1 = 0; i1 < n; i1++)
		matrix[i1][i1] = matrix[i1][i1] + num;
	return matrix;
}




