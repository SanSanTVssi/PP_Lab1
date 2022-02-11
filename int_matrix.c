///
/// Created by Ааи on 07.02.2022.
///

#include <stdlib.h>
#include "int_matrix.h"

#define new(type, size) (type*) malloc(size * sizeof(type))

void int_matrix_destruct(int_matrix* instance);

int_matrix int_matrix_construct(int width, int height) {
    struct INT_MATRIX to_return;
    to_return.width = width;
    to_return.height = height;
    to_return.data = new(int*, height);
    for (int i = 0; i < height; ++i) {
        to_return.data[i] = new(int, width);
    }
    return to_return;
}

void int_matrix_destruct(int_matrix* instance) {
    for (int i = 0; i < instance->height; ++i) {
         free(instance->data[i]);
    }
    free(instance->data);
    instance->height = 0;
    instance->width = 0;
    instance->data = NULL;
}