#include "ShiftRight.h"

template<typename T>void ShiftRight(T arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов вправо;
{
	ShiftLeft(arr, n, n - shift);
}

template<typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift)
{
	/*for (int i = 0; i < ROWS; i++)
	{
		ShiftRight(arr[i], COLS, shift);
	}*/
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 2; j >= 0; j--)
			{
				arr[i][j + 1] = arr[i][j];
			}
			arr[i][0] = arr[i - 1][COLS - 1];
		}
		arr[0][0] = buffer;
	}
}