#include "Avg.h"


template<typename T>double Avg(T arr[], const int n)			//Возвращает среднее-арифметическое элементов массива;
{
	return (double)Sum(arr, n) / n;
}

template <typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}