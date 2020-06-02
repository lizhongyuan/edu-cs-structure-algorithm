//
// Created by svenlee on 2020-06-02.
//

#include "swap.h"


void select_sort(int *arr, int arr_size) {

    for (int i = 0; i < arr_size; i++) {

        int select_idx = i;
        int select_value = arr[select_idx];

        for (int j = i + 1; j < arr_size; j++) {
            if (arr[j] < select_value) {
                select_idx = j;
                select_value = arr[j];
            }
        }

        swap(arr + i, arr + select_idx);
    }
}