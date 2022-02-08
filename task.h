//
// Created by Ааи on 07.02.2022.
//

#ifndef LAB1_TASK_H
#define LAB1_TASK_H

#include "pair.h"
#include "int_matrix.h"
#include "int_vector.h"

pair task(const int_matrix* instance) {
    int_vector values = int_vector_construct();
    int_vector positions = int_vector_construct();
    for (int i = 0; i < instance->height; ++i) {
        int val = 0;
        int pos = -1;
        for (int j = 0; j < instance->width; ++j) {
            if (instance->data[i][j] < 0) {
                val = instance->data[i][j];
                pos = j;
            }
        }
        int_vector_push_back(&values, val);
        int_vector_push_back(&positions, pos);
    }
    pair to_return;
    pair_set_values(values, positions, to_return);
    return to_return;
}

#endif //LAB1_TASK_H
