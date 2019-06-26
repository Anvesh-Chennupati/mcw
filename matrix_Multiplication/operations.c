#include"header.h"

void printMatrix(int** Matrix, unsigned int row, unsigned int column){
    int i,j;
    for(i =0; i< row; i++){
        for(j =0; j<column; j++){
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }
}
int** multiply1(int** Matrix1, int** Matrix2,unsigned int row, unsigned int column){
    int i, j,k;
    int** Matrix = malloc(row * sizeof(int));
    for(i =0; i<row; i++)
        Matrix[i] = malloc(column * sizeof(int));
    for(i =0; i< row; i++){
        for(j =0; j< column; j++){
            Matrix[i][j] = 0;
            for(k =0; k< row; k++){
                Matrix[i][j] += Matrix1[i][k] * Matrix2[k][j]; 
            }
        }
    }
    return Matrix;
}

int** generateMatrix(unsigned int row, unsigned int column, unsigned int seed){
    int i,j;
    int** Matrix = malloc(row * sizeof(int));
    for(i =0; i<row; i++)
        Matrix[i] = malloc(column * sizeof(int));
    srand(time(NULL));
    for(i =0; i <row, i++)
        for(j =0; j<column; j++)
            Matrix[i][j] =seed + rand()% row;
    return Matrix;
}