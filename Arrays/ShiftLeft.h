#pragma once
#include "constants.h"

template<typename T>void ShiftLeft(T arr[], const int n, int shift = 0);		//Циклически сдвигает массив на заданное количество элементов влево;
template <typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shift = 0);