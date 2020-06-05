//
// Created by svenlee on 2020-06-02.
//

void swap(int *a, int *b) {

    if (a == b) {
        return;
    }

    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void min_by_ptr(int *ptr1, int *ptr2) {

    if (*ptr1 <= *ptr2) {
        return ptr1;
    } else {
        return ptr2;
    }
}
