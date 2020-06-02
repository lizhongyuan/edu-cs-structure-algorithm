#include <iostream>
#include "sort.h"


using namespace std;


int arr[] = { 1, 4, 2, 8, 5, 7 };
int array_size = sizeof(arr) / sizeof(int);


void array_show(int *arr, int array_size) {

    for (int i = 0; i < 6; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}


int main(int argc, char** argv) {

    // insert_sort(arr, array_size); // 插入排序
    // select_sort(arr, array_size); // 选择排序
    // bubble_sort(arr, array_size); // 选择排序

    array_show(arr, array_size);

    quick_sort(arr, 0, array_size - 1);

    array_show(arr, array_size);

    return 0;
}

