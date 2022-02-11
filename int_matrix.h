//
// Created by Ааи on 07.02.2022.
//

#ifndef LAB1_INT_MATRIX_H
#define LAB1_INT_MATRIX_H

typedef struct INT_MATRIX {
    int ** data;
    int width;
    int height;
} int_matrix;

void int_matrix_destruct(int_matrix* instance);

int_matrix int_matrix_construct(int width, int height);

#endif //LAB1_INT_MATRIX_H
