#include <iostream>
#include "sort.h"


using namespace std;


// int arr[] = { 1, 4, 2, 8, 5, 7 };
int arr[] = { 8, 4, 2, 1, 5, 7 };
// int arr[] = { 2, 4, 1 };
int array_size = sizeof(arr) / sizeof(int);


void array_show(int *arr, int array_size) {

    for (int i = 0; i < array_size; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}


int main(int argc, char** argv) {

    array_show(arr, array_size);

    heap_sort(arr, array_size); // 快速排序
    // quick_sort(arr, 0, array_size - 1); // 快速排序
    // insert_sort(arr, array_size); // 插入排序
    // select_sort(arr, array_size); // 选择排序
    // bubble_sort(arr, array_size); // 选择排序

    array_show(arr, array_size);

    return 0;
}

