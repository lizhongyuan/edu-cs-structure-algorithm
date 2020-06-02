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
