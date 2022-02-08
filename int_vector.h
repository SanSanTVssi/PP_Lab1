//
// Created by Ааи on 07.02.2022.
//

#ifndef LAB1_INT_VECTOR_H
#define LAB1_INT_VECTOR_H

struct INT_VECTOR {
    int * data;
    int size;
};
typedef struct INT_VECTOR int_vector;

int_vector int_vector_construct(void);
void int_vector_destruct(int_vector* vector);
void int_vector_push_back(int_vector* vector, int item);
void int_vector_console_write(int_vector* vector);

#endif //LAB1_INT_VECTOR_H
