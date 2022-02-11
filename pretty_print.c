//
// Created by Ааи on 07.02.2022.
//

#include "pretty_print.h"
#include <stdio.h>

void int_matrix_console_write(int_matrix* matrix) {
    printf("======= Matrix =======\n");
    for (int i = 0; i < matrix->height; ++i) {
        for (int j = 0; j < matrix->width; ++j) {
            printf("%d\t", matrix->data[i][j]);
        }
        printf("\n");
    }
    printf("======================\n");
}