#include "swap.h"


void heap_sort(int* array, int array_size) {

    build_heap(array, array_size);
}


void build_heap(int* array, int array_size) {

    int edge_pos = (array_size - 2) / 2;

    for (int i = edge_pos; i >= 0; i--) {
        for (int j = i; i < array_size; ) {
            int left_child_idx = 2 * i + 1;
            int right_child_idx = 2 * i + 2;

            int min_child_idx;
            if (array + left_child_idx >= array + right_child_idx) {
                min_child_idx = right_child_idx;
            } else {
                min_child_idx = left_child_idx;
            }

            if (array[j] > array[min_child_idx]) {
                swap(array + j, array + min_child_idx);
            }

            j = min_child_idx;
        }
    }
}