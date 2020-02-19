#ifndef ALGORITHM3D_H
#define ALGORITHM3D_H

#include "algorithm2D.h"

void rank3TensorMul(struct matrix *matrix_ptr){

    for(int i = 0; i < matrix_ptr->size; i++){
 
       RowColOperation(matrix_ptr, i);

    }

}

#endif