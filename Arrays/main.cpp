#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
template <typename T>
void Print(T arr[], const int n);
template<typename T>
void Sort(T arr[], const int n);
template<typename T>
T Sum(T arr[], const int n);			//Возвращает сумму элементов массива;

template<typename T>
double Avg(T arr[], const int n);			//Возвращает среднее-арифметическое элементов массива;

template<typename T>
T MinValueIn(T arr[], const int n);	//Возвращает минимальное значение в массиве;

template<typename T>
T MaxValueIn(T arr[], const int n);	//Возвращает максимальное значение в массиве;
template<typename T>
void ShiftLeft(T arr[], const int n, int shift = 0);		//Циклически сдвигает массив на заданное количество элементов влево;
template<typename T>
void ShiftRight(T arr[], const int n, int shift = 0);

// 60 строк кода
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

template <typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void Sort(T arr[], const int n)
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

template<typename T>
T Sum(T arr[], const int n)			//Возвращает сумму элементов массива;
{
	T s = 0;
	for (int i = 0; i < n; i++) s += arr[i];
	return s;
}

template<typename T>
double Avg(T arr[], const int n)			//Возвращает среднее-арифметическое элементов массива;
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
T MinValueIn(T arr[], const int n)	//Возвращает минимальное значение в массиве;
{
	T min_value = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min_value) min_value = arr[i];
	}
	return min_value;
}
template<typename T>
T MaxValueIn(T arr[], const int n)	//Возвращает максимальное значение в массиве;
{
		int max_value = arr[0];
		for (int i = 1; i < n; i++)
		{
			if (arr[i] > max_value) max_value = arr[i];
		}
		return max_value;
}

template<typename T>
void ShiftLeft(T arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов влево;
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
template<typename T>
void ShiftRight(T arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов вправо;
{
	ShiftLeft(arr, n, n - shift);
}
