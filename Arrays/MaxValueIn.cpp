#include "MaxValueIn.h"

template<typename T>T MaxValueIn(T arr[], const int n)	//Возвращает максимальное значение в массиве;
{
	int max_value = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max_value) max_value = arr[i];
	}
	return max_value;
}

template <typename T>T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max_value = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max_value) max_value = arr[i][j];
		}
	}
	return max_value;
}