//
// Created by Ааи on 08.02.2022.
//

#include "release_debug.h"

#include <stdio.h>
#include "int_matrix.h"
#include "int_matrix_filling.h"
#include "int_vector.h"
#include "pair.h"
#include "task.h"
#include "pretty_print.h"
#include "typedef.h"

void debug(int w, int h, char sort_mode) {
    matrix_for_task = int_matrix_construct(w, h);
    if (sort_mode == 's') {
        int_matrix_fill_sorted(&matrix_for_task);
    }
    else if (sort_mode == 'k'){
        int_matrix_fill_keyboard(&matrix_for_task);
    }
    else {
        int_matrix_random_fill(&matrix_for_task);
    }
    pair result = task(&matrix_for_task);
    int_vector vector1 = pair_first(int_vector, result);
    int_vector vector2 = pair_second(int_vector, result);
    int_matrix_console_write(&matrix_for_task);
    printf("Values:\t");
    int_vector_console_write(&vector1);
    printf("Positions:\t");
    int_vector_console_write(&vector2);
    printf("\nEnd\n");

    int_vector_destruct(&vector1);
    int_vector_destruct(&vector2);
    int_matrix_destruct(&matrix_for_task);
}
void release(int w, int h, char sort_mode) {
    int_vector vector1;
    int_vector vector2;
    matrix_for_task = int_matrix_construct(w, h);
    if (sort_mode == 's') {
        int_matrix_fill_sorted(&matrix_for_task);
    }
    else if (sort_mode == 'k'){
        int_matrix_fill_keyboard(&matrix_for_task);
    }
    else {
        int_matrix_random_fill(&matrix_for_task);
    }
    pair result = task(&matrix_for_task);
    vector1 = pair_first(int_vector, result);
    vector2 = pair_second(int_vector, result);
    int_vector_console_write(&vector1);
    int_vector_console_write(&vector2);
    printf("End");
    int_vector_destruct(&vector1);
    int_vector_destruct(&vector2);
    int_matrix_destruct(&matrix_for_task);
}