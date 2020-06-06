#include "util.h"


int split(int *arr, int left, int right) {

    int axis = left;

    while (left <= right) {

        for (; right >= axis; right--) {
            if (arr[axis] > arr[right]) {
                swap(arr + axis, arr + right);
                left = axis + 1;
                axis = right;
                break;
            }
        }

        for (; left <= axis; left++) {
            if (arr[axis] < arr[left]) {
                swap(arr + left, arr + axis);
                right = axis - 1;
                axis = left;
                break;
            }
        }
    }

    return axis;
}


void quick_sort(int *arr, int left, int right) {

    if (left >= right) {
        return;
    }

    int axis = split(arr, left, right);

    quick_sort(arr, left, axis - 1);
    quick_sort(arr, axis + 1, right);
}


