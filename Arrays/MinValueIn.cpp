#include "MinValueIn.h"

template<typename T>T MinValueIn(T arr[], const int n)	//Возвращает минимальное значение в массиве;
{
	T min_value = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min_value) min_value = arr[i];
	}
	return min_value;
}

template <typename T>T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min_value = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] < min_value) min_value = arr[i][j];
		}
	}
	return min_value;
}