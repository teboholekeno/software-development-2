#include "algorithm3D.h"

int main(int argc, char *argv[]){

    struct matrix main_matrix_ptr;

    intialize_matrix(&main_matrix_ptr);
    rank2TensorMul(&main_matrix_ptr);
    display(&main_matrix_ptr);
    
    return 0;
}

