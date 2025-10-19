#include "../include/array_function.h"

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    if (size == 0 || src == NULL || min == NULL || max == NULL) {
        return; 
    }

    *min = src[0];
    *max = src[0];

    for (size_t i = 1; i < size; ++i) {
        if (src[i] < *min) {
            *min = src[i];
        }
        if (src[i] > *max) {
            *max = src[i];
        }
    }
}
