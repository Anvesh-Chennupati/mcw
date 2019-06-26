#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printMatrix(int** Matrix, unsigned int row, unsigned int column);
int** multiply1(int** Matrix1, int** Matrix2,unsigned int row, unsigned int column);
int** generateMatrix(unsigned int row, unsigned int column, unsigned int seed);