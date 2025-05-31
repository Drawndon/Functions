#include "constants.h"

template<typename T>void ShiftLeft(T arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов влево;
{
	T t;
	for (int i = 0; i < shift % n; i++)
	{
		t = arr[0];
		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = t;
	}
}

template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftLeft(arr[i], COLS, shift);
	}*/
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}