#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);			//Возвращает сумму элементов массива;
float Sum(float arr[], const int n);			//Возвращает сумму элементов массива;
double Sum(double arr[], const int n);			//Возвращает сумму элементов массива;
char Sum(char arr[], const int n);			//Возвращает сумму элементов массива;


double Avg(int arr[], const int n);			//Возвращает среднее-арифметическое элементов массива;
double Avg(float arr[], const int n);			//Возвращает среднее-арифметическое элементов массива;
double Avg(double arr[], const int n);			//Возвращает среднее-арифметическое элементов массива;
double Avg(char arr[], const int n);			//Возвращает среднее-арифметическое элементов массива;


int MinValueIn(int arr[], const int n);	//Возвращает минимальное значение в массиве;
float MinValueIn(float arr[], const int n);	//Возвращает минимальное значение в массиве;
double MinValueIn(double arr[], const int n);	//Возвращает минимальное значение в массиве;
char MinValueIn(char arr[], const int n);	//Возвращает минимальное значение в массиве;


int MaxValueIn(int arr[], const int n);	//Возвращает максимальное значение в массиве;
float MaxValueIn(float arr[], const int n);	//Возвращает максимальное значение в массиве;
double MaxValueIn(double arr[], const int n);	//Возвращает максимальное значение в массиве;
char MaxValueIn(char arr[], const int n);	//Возвращает максимальное значение в массиве;


void ShiftLeft(int arr[], const int n, int shift = 0);		//Циклически сдвигает массив на заданное количество элементов влево;
void ShiftLeft(float arr[], const int n, int shift = 0);		//Циклически сдвигает массив на заданное количество элементов влево;
void ShiftLeft(double arr[], const int n, int shift = 0);		//Циклически сдвигает массив на заданное количество элементов влево;
void ShiftLeft(char arr[], const int n, int shift = 0);		//Циклически сдвигает массив на заданное количество элементов влево;


void ShiftRight(int arr[], const int n, int shift = 0);
void ShiftRight(float arr[], const int n, int shift = 0);
void ShiftRight(double arr[], const int n, int shift = 0);
void ShiftRight(char arr[], const int n, int shift = 0);

// 60 строк кода
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
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


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}



void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}


int Sum(int arr[], const int n)			//Возвращает сумму элементов массива;
{
	int s = 0;
	for (int i = 0; i < n; i++) s += arr[i];
	return s;
}

float Sum(float arr[], const int n)			//Возвращает сумму элементов массива;
{
	float s = 0;
	for (int i = 0; i < n; i++) s += arr[i];
	return s;
}

double Sum(double arr[], const int n)			//Возвращает сумму элементов массива;
{
	double s = 0;
	for (int i = 0; i < n; i++) s += arr[i];
	return s;
}

char Sum(char arr[], const int n)			//Возвращает сумму элементов массива;
{
	char s = 0;
	for (int i = 0; i < n; i++) s += arr[i];
	return s;
}

double Avg(int arr[], const int n)			//Возвращает среднее-арифметическое элементов массива;
{
	return (double)Sum(arr, n) / n;
}

double Avg(float arr[], const int n)			//Возвращает среднее-арифметическое элементов массива;
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)		//Возвращает среднее-арифметическое элементов массива;
{
	return (double)Sum(arr, n) / n;
}

double Avg(char arr[], const int n)			//Возвращает среднее-арифметическое элементов массива;
{
	return (double)Sum(arr, n) / n;
}


int MinValueIn(int arr[], const int n)	//Возвращает минимальное значение в массиве;
{
	int min_value = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min_value) min_value = arr[i];
	}
	return min_value;
}

float MinValueIn(float arr[], const int n)	//Возвращает минимальное значение в массиве;
{
	float min_value = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min_value) min_value = arr[i];
	}
	return min_value;
}

double MinValueIn(double arr[], const int n)	//Возвращает минимальное значение в массиве;
{
	double min_value = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min_value) min_value = arr[i];
	}
	return min_value;
}

char MinValueIn(char arr[], const int n)	//Возвращает минимальное значение в массиве;
{
	char min_value = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min_value) min_value = arr[i];
	}
	return min_value;
}


int MaxValueIn(int arr[], const int n)	//Возвращает максимальное значение в массиве;
{
		int max_value = arr[0];
		for (int i = 1; i < n; i++)
		{
			if (arr[i] > max_value) max_value = arr[i];
		}
		return max_value;
}

float MaxValueIn(float arr[], const int n)	//Возвращает максимальное значение в массиве;
{
		float max_value = arr[0];
		for (int i = 1; i < n; i++)
		{
			if (arr[i] > max_value) max_value = arr[i];
		}
		return max_value;
}

double MaxValueIn(double arr[], const int n)	//Возвращает максимальное значение в массиве;
{
	double max_value = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max_value) max_value = arr[i];
	}
	return max_value;
}

char MaxValueIn(char arr[], const int n)	//Возвращает максимальное значение в массиве;
{
	char max_value = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max_value) max_value = arr[i];
	}
	return max_value;
}


void ShiftLeft(int arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов влево;
{
	int t;
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
void ShiftLeft(float arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов влево;
{
	float t;
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
void ShiftLeft(double arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов влево;
{
	double t;
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
void ShiftLeft(char arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов влево;
{
	char t;
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


void ShiftRight(int arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов вправо;
{
	int buffer;
	for (int i = 0; i < shift % n; i++)
	{
		buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(float arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов вправо;
{
	float buffer;
	for (int i = 0; i < shift % n; i++)
	{
		buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(double arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов вправо;
{
	double buffer;
	for (int i = 0; i < shift % n; i++)
	{
		buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(char arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов вправо;
{
	char buffer;
	for (int i = 0; i < shift % n; i++)
	{
		buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
