void swap(int *a, int *b) {
    int tmp = *a; 
    *a = *b; 
    *b = tmp;
}

void insert_sort(int *arr, int arr_size) {

    for (int i = 1; i < arr_size; i++) {

        int select_idx = i;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[select_idx]) {
                swap(arr + i, arr + j); 
                select_idx = j;
            } else {
                break;
            }   
        }   
    }   
}
