#include <iostream>
#include "function.h"

using namespace std;
using namespace std;

int main() {
    int size = 9;
    const int finalSize = size;
    int a[size];
    for (int i = 0; i < size; i++) {
        a[i] = i;
    }
    int s = sum(a, size);

    cout << s << endl;
///////////////////////////////////////////////////
    int sizeQ = 5;
    int sizeW = 5;
    int sizeArray = sizeW + sizeQ;
    int *q = new int[sizeQ]{1, 2, 3, 4, 5};
    int *w = new int[sizeW]{6, 7, 8, 9, 10};
    int *array = new int[sizeArray];
    for (int i = 0; i < sizeArray; i++) {
        if (i < 5) {
            array[i] = q[i];
        }
        array[i] = w[i - 5];
    }
    delete[] q;
    delete[] w;
    cout << array[1] << endl << array[9] << endl;
//////////////////////////////////////////////////

    int k = 7;
    const int f = k;
    int unsorted[f] = {7, 15, 84, 1, 8, 23, 7};
    sort(unsorted, k);
    for (int i = 0; i < k; i++) {
        cout << unsorted[i] << " ";
    }


    return 0;
}