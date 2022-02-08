//
// Created by Ааи on 07.02.2022.
//

#include "int_matrix_filling.h"

#include <stdlib.h>
#include <stdio.h>

void int_matrix_random_fill(int_matrix* matrix) {
    for (int i = 0; i < matrix->height; ++i) {
        for (int j = 0; j < matrix->width; ++j) {
            int val = rand()%100;
            int sign = 1;
            if (val/2%2) {
                sign = -1;
            }
            matrix->data[i][j] = sign * val;
        }
    }
}

void int_matrix_fill_sorted(int_matrix* matrix) {
    for (int i = 0; i < matrix->height; ++i) {
        for (int j = 0; j < matrix->width; ++j) {
            matrix->data[i][j] = i * 10 + j
                    - (matrix->height * 10 + matrix->width) / 2;
        }
    }
}
void int_matrix_fill_keyboard(int_matrix* matrix) {
    for (int i = 0; i < matrix->height; ++i) {
        for (int j = 0; j < matrix->width; ++j) {
            int val;
            scanf("%d", &val);
            matrix->data[i][j] = val;
        }
    }
}
