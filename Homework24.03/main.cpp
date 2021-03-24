#include <iostream>

using namespace std;

struct MaxHeap {
    int *array;
    int size;
    int maxSize;

    MaxHeap(int size) {
        array = new int[size];
        maxSize = size;
    }

    int parent(int i) {
        return (i - 1) / 2;
    }

    int leftChild(int i) {
        return 2 * i + 1;
    }

    int rightChild(int i) {
        return 2 * i + 2;
    }

    int getMax() {
        return *array;
    }


    void siftUp(int i) {
        while ((i > 0) && (array[i] > array[parent(i)])) {
            int temp = array[i];
            array[i] = array[parent(i)];
            array[parent(i)] = temp;
            i = parent(i);
        }
    }

    void siftDown(int i) {
        int maxIndex = i;

        if (leftChild(i) < size && array[leftChild(i)] > array[i])
            maxIndex = leftChild(i);
        if (rightChild(i) < size && array[rightChild(i)] > array[maxIndex])
            maxIndex = rightChild(i);
        if (maxIndex != i) {
            int temp = array[i];
            array[i] = array[maxIndex];
            array[maxIndex] = temp;
            siftDown(maxIndex);
        }
    }

    int ExtractMax() {
        if (size == 1) {
            size--;
            return array[0];
        }

        if ((size != 0) && (maxSize != 0)) {
            int maxNum = array[0];
            array[0] = array[size - 1];
            size--;

            siftDown(0);
            return maxNum;
        }
    }

    void ExpansionArray(int maxSize){
        int *arr = new int[maxSize];
        if(maxSize > 1) {
            for (int i = 0; i < size; ++i) {
                arr[i] = array[i];
            }
            delete[] array;
        }
        array = arr;
    }

    int insert(int p) {
        if (size < maxSize) {
            size++;
        } else {
            maxSize = maxSize * 2 + 1;
            ExpansionArray(maxSize);
            size++;
        }
        array[size - 1] = p;
        siftDown(size - 1);
    }
};


    int *HeapSort(int *array, int size) {
        MaxHeap *maxHeap = new MaxHeap(size);
        int *arr = new int[size];
        for (int i = 0; i < size; ++i) {
            maxHeap->insert(array[i]);
        }
        for (int i = 0; i < size; ++i) {
            arr[i] = maxHeap->ExtractMax();
        }
        delete[] array;
        return arr;
    }

    int main() {
        int mas[] ={2,1,5,6,3,4,5};

        HeapSort(mas, sizeof mas);

        for (int i = 0; i < sizeof (mas); ++i) {
            cout << mas;
        }
        return 0;
    }
