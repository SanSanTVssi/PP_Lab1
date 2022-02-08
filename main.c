///
/// Created by Ааи on 07.02.2022.
///

#include "int_matrix.h"
#include "int_matrix_filling.h"
#include "int_vector.h"
#include "pair.h"
#include "task.h"
//#include "typedef.h"

int main(int argc, char ** argv) {
    int_matrix matrix = int_matrix_construct(5, 10);
    int_matrix_fill_sorted(&matrix);
    int_matrix_console_write(&matrix);
    pair result = task(&matrix);
    int_vector vector1 = pair_first(int_vector, result);
    int_vector vector2 = pair_second(int_vector, result);
    int_vector_console_write(&vector1);
    int_vector_console_write(&vector2);
    int_matrix_destruct(&matrix);
    int_vector_destruct(&vector1);
    int_vector_destruct(&vector2);
}
