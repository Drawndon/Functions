#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"
#include "Shift.h"

using std::cout;
using std::cin;
using std::endl;


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//FillRand(arr, n);
	Print(arr, n);
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
	Print(brr, SIZE);

}
