#include "swap.h"
#include "iostream"

using namespace std;


void build_heap(int* array, int array_size);


void heap_sort(int* array, int array_size) {

    build_heap(array, array_size);
}


void build_heap(int* array, int array_size) {

    cout<<"array_size:"<<array_size<<endl;

    int edge_pos = (array_size - 2) / 2;

    cout<<"edge_pos:"<<edge_pos<<endl;

    for (int i = edge_pos; i >= 0; i--) {
        for (int j = i; j <= edge_pos; ) {
            int left_child_idx = 2 * j + 1;
            int right_child_idx = 2 * j + 2;

            int min_child_idx;
            if (array[left_child_idx] >= array[right_child_idx]) {
                min_child_idx = right_child_idx;
            } else {
                min_child_idx = left_child_idx;
            }

            cout<<"min_child_idx:"<<min_child_idx<<endl;

            if (array[j] > array[min_child_idx]) {
                swap(array + j, array + min_child_idx);
            }

            j = min_child_idx;
        }
    }
}