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