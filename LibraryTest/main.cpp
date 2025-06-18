#include <iostream>
#include "FillRand.h"
#include "Print.h"
#include "FillRand.cpp"
#include "Print.cpp"

using namespace std;

void main()
{
	const int ROWS = 5;
	const int COLS = 4;
	int arr2[ROWS];
	FillRand(arr2[ROWS], ROWS);
	Print(arr2[ROWS], ROWS);
	


}