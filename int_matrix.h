//
// Created by Ааи on 07.02.2022.
//

#ifndef LAB1_INT_MATRIX_H
#define LAB1_INT_MATRIX_H

struct INT_MATRIX {
    int ** data;
    int width;
    int height;
};
typedef struct INT_MATRIX int_matrix;

int_matrix int_matrix_construct(int width, int height);
void int_matrix_destruct(int_matrix* instance);
void int_matrix_console_write(int_matrix* matrix);

#endif //LAB1_INT_MATRIX_H
