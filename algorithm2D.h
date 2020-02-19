#ifndef ALGORITHM2D_H
#define ALGORITHM2D_H
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define  max_matrix_size   30

struct matrix{

    int size;
    float A[max_matrix_size][max_matrix_size][max_matrix_size];
    float B[max_matrix_size][max_matrix_size][max_matrix_size];
    float results[max_matrix_size][max_matrix_size][max_matrix_size];
};

void intialize_matrix(struct matrix *matrix_ptr){
    matrix_ptr->size = 3;
 
     srand(time(0));
    for(int i = 0 ; i <matrix_ptr->size; i ++){

        for(int j =0; j <matrix_ptr->size; j++)
        {
             matrix_ptr->A[i][j][0] = rand() %30 +1 ;
             matrix_ptr->B[i][j][0] = rand() %30 +1 ;
        } 
    }

}

void display(struct matrix *matrix_ptr){
  printf("Matrix A :\n");
       for(int i = 0; i < matrix_ptr->size; i++){

         for(int j = 0; j < matrix_ptr->size; j++)
            {
                printf("%d ",(int) matrix_ptr->A[i][j][0]);ss

        }
        printf("\n");
    }
    printf("Matrix B :\n");
        for(int i = 0; i < matrix_ptr->size; i++){

         for(int j = 0; j < matrix_ptr->size; j++)
            {
                printf("%d ",(int) matrix_ptr->B[i][j][0]);

        }
        printf("\n");
    }
    printf("Matrix C:\n");
    for(int i = 0; i < matrix_ptr->size; i++){

         for(int j = 0; j < matrix_ptr->size; j++)
            {
                printf("%d ",(int) matrix_ptr->results[i][j][0]);

        }
        printf("\n");
    }
   //----------------------------------------
  

}

void RowColOperation(struct matrix *matrix_ptr, int plane ){

    for(int i = 0; i < matrix_ptr->size; i++){

         for(int j = 0; j < matrix_ptr->size; j++)
            {
            float sum = 0;

             for(int k = 0; k < matrix_ptr->size; k++)
                {
                 sum += matrix_ptr->A[i][k][plane]*matrix_ptr->B[k][j][plane];
            }
        matrix_ptr->results[i][j][plane] = sum;

        }
    }

}


void rank2TensorMul(struct matrix *matrix_ptr){

RowColOperation(matrix_ptr, 0);

}

#endif
