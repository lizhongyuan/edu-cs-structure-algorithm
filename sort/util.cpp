//
// Created by svenlee on 2020-06-02.
//
#include <iostream>


using namespace std;


void swap(int *a, int *b) {

    if (a == b) {
        return;
    }

    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int* min_by_ptr(int *ptr1, int *ptr2) {

    if (*ptr1 <= *ptr2) {
        return ptr1;
    } else {
        return ptr2;
    }
}


void array_show(int *arr, int array_size) {

  for (int i = 0; i < array_size; i++) {
    cout<<arr[i]<<" ";
  }

  cout<<endl;
}
