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
	ShiftLeft(arr, n, n - shift);
}
void ShiftRight(float arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов вправо;
{
	ShiftLeft(arr, n, n - shift);
}
void ShiftRight(double arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов вправо;
{
	ShiftLeft(arr, n, n - shift);
}
void ShiftRight(char arr[], const int n, int shift)		//Циклически сдвигает массив на заданное количество элементов вправо;
{
	ShiftLeft(arr, n, n - shift);
}