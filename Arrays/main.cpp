#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

const int ROWS = 5;
const int COLS = 8;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);


template <typename T>void Print(T arr[], const int n);
template <typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>void Sort(T arr[], const int n);
template <typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>T Sum(T arr[], const int n);			//Возвращает сумму элементов массива;
template <typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);			//Возвращает среднее-арифметическое элементов массива;
template <typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T MinValueIn(T arr[], const int n);	//Возвращает минимальное значение в массиве;
template <typename T>T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T MaxValueIn(T arr[], const int n);	//Возвращает максимальное значение в массиве;
template <typename T>T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void ShiftLeft(T arr[], const int n, int shift = 0);		//Циклически сдвигает массив на заданное количество элементов влево;
template <typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift = 0);

template<typename T>void ShiftRight(T arr[], const int n, int shift = 0);
template <typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift = 0);

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
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

template <typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}


template <typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template <typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k > i ? 0 : j + 1; l < COLS; l++)
				{
						if (arr[k][l] < arr[i][j])
						{
							T buffer = arr[i][j];
							arr[i][j] = arr[k][l];
							arr[k][l] = buffer;
						}
				}
			}

		}
	}
}

template<typename T>T Sum(T arr[], const int n)			//Возвращает сумму элементов массива;
{
	T s = 0;
	for (int i = 0; i < n; i++) s += arr[i];
	return s;
}

template <typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T s = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			s += arr[i][j];
	}
	return s;
}

template<typename T>double Avg(T arr[], const int n)			//Возвращает среднее-арифметическое элементов массива;
{
	return (double)Sum(arr, n) / n;
}

template <typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

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