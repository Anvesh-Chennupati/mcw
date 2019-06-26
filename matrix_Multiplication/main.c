#include"header.h"

#define row 5
#define column 5

void main(int argc,char** argv){
    int** Matrix1 = generateMatrix(row,column,2);
    printMatrix(Matrix1,row,column);
}