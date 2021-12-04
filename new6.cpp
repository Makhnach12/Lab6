#include <iostream>
#include <windows.h>
#include <string>
#include "correct_input.h"
#include "matrix_operations.h"
using namespace std;

void free(int**& matr, int n)
{
	for (int i = 0; i < n; i++)
		delete[] matr[i];
	delete[] matr;
	matr = 0;
}

int main()
{
	int kaka;
	int n;
	setlocale(0, "RUS");
	cout << "Ââåäèòå ðàçìåð êâàäðàòíîé ìàòðèöû:" << endl;
	correct_input_matrix_size(int& num);

	int** matrix = input_matrix(n);

	int** matrix_4th_degree = matrix_degree(matrix,matrix, n);
	matrix_4th_degree = matrix_degree(matrix,matrix_4th_degree, n);
	matrix_4th_degree = matrix_degree(matrix,matrix_4th_degree, n);

	int** matrix_2nd_degree = matrix_degree(matrix, matrix, n);

	int** matrix_sum1 = plus_matrixes(matrix_4th_degree, matrix_2nd_degree, n);

	matrix_sum1 = matrixE(matrix_sum1, 1, n);

	int** matrix_3rd_degree = matrix_degree(matrix, matrix, n);
	matrix_3rd_degree = matrix_degree(matrix, matrix_3rd_degree, n);

	int** matrix_sum2 = plus_matrixes(matrix_3rd_degree, matrix, n);

	int** matrix_sum = minus_matrixes(matrix_sum1, matrix_sum2, n);

	for (int i1 = 0; i1 < n; i1++)
	{
		for (int i2 = 0; i2 < n; i2++)
		{
			cout << matrix_sum[i1][i2] << " ";
		}
		cout << endl;
	}
	free(matrix, n);
	free(matrix_4th_degree, n);
	free(matrix_3rd_degree, n);
	free(matrix_2nd_degree, n);
	free(matrix_sum1, n);
	free(matrix_sum2, n);
	free(matrix_sum, n);
	return 0;
}

