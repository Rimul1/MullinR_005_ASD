//
// Created by admin on 24.02.2021.
//

#ifndef UNTITLED_FUNCTION_H
#define UNTITLED_FUNCTION_H
int sum(int * a, int size) {
    int sum = 0;
    for (int * p = a; p < a + size; p++) {
        sum += *p;
    }
    return sum;
}

void sort(int * a, int size) {
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
}
#endif //UNTITLED_FUNCTION_H
