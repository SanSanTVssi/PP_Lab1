//
// Created by Ааи on 07.02.2022.
//

#include "int_vector.h"

#include "stdlib.h"
#include "stdio.h"

#define new(type, size) (type*) malloc(size * sizeof(type))

void int_vector_destruct(int_vector* vector);
void int_vector_push_back(int_vector* vector, int item);

int_vector int_vector_construct(void) {
    int_vector to_return;
    to_return.data = NULL;
    to_return.size = 0;
    return to_return;
}
void int_vector_destruct(int_vector* instance) {
    free(instance->data);
    instance->size = 0;
    instance->data = NULL;
}

void int_vector_push_back(int_vector* vector, int item) {
    if (vector->data == NULL) {
        vector->data = new(int, 1);
        vector->size++;
    }
    else {
        vector->data = (int*) realloc(vector->data, ++vector->size * sizeof(int));
    }
    vector->data[vector->size - 1] = item;
}

void int_vector_console_write(int_vector* vector) {
    for (int i = 0; i < vector->size; ++i) {
        printf("%d\t", vector->data[i]);
    }
    printf("\n");
}