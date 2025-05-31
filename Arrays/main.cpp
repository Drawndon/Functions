#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
//#include "FillRand.cpp" //Реализации НЕ шаблонных функций никогда не подключаются на место вызова
#include "Print.h"
#include "Print.cpp" //Реализации шаблонных функций в обязательном порядке подключаются на место вызова
#include "Sort.h"
#include "Sort.cpp"
#include "Sum.h"
#include "Sum.cpp"
#include "Avg.h"
#include "Avg.cpp"
#include "MinValueIn.h"
#include "MinValueIn.cpp"
#include "MaxValueIn.h"
#include "MaxValueIn.cpp"
#include "ShiftLeft.h"
#include "ShiftLeft.cpp"
#include "ShiftRight.h"
#include "ShiftRight.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//FillRand(arr, n);
	/*Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << endl << "Сумма чисел массива arr: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое arr: " << Avg(arr, n) << endl;
	cout << "Минимальное значение arr: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение arr: " << MaxValueIn(arr, n) << endl << endl;
	int shift;
	cout << "На какое число сдвинуть массив: "; cin >> shift;
	ShiftLeft(arr, n, shift);
	cout << "Массив arr сдвинут влево " << shift << endl;
	Print(arr, n);
	ShiftRight(arr, n);
	cout << "Массив arr сдвинут вправо" << endl;
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << endl << "Сумма чисел массива brr: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое brr: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение brr: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение brr: " << MaxValueIn(brr, SIZE) << endl << endl;
	ShiftLeft(brr, SIZE, shift);
	cout << "Массив brr сдвинут влево " << shift << endl;
	Print(brr, SIZE);
	ShiftRight(brr, SIZE);
	cout << "Массив brr сдвинут вправо" << endl;
	Print(brr, SIZE); */

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS, 1, 100);
	Print(arr2, ROWS, COLS);
	cout << "Сумма двумерного массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое двумерного массива: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в двумерном массиве: " << MinValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в двумерном массиве: " << MaxValueIn(arr2, ROWS, COLS) << endl;
	Sort(arr2, ROWS, COLS);
	cout << endl << "Вывод отсортированного двумерного массива" << endl;
	Print(arr2, ROWS, COLS);
	ShiftLeft(arr2, ROWS, COLS, 5);
	cout << "Массив сдвинут влево на 5" << endl;
	Print(arr2, ROWS, COLS);
	ShiftRight(arr2, ROWS, COLS, 5);
	cout << "Массив сдвинут вправо на 5" << endl;
	Print(arr2, ROWS, COLS);
}