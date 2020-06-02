#include <iostream>
#include "insert_sort.h"


using namespace std;


int arr[] = { 1, 4, 2, 8, 5, 7 };
int array_size = sizeof(arr) / sizeof(int);


int main(int argc, char** argv) {

    insert_sort(arr, array_size);

    for (int i = 0; i < 6; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

 return 0;
}

