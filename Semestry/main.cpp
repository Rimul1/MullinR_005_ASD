#include <iostream>
#include "HashTable.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    HashTable<int, int> hashTable;
    for (int i = 0; i < 9; ++i) {
        hashTable.put(i,i);
    }

    for (int i = 0; i < 9; ++i) {
        cout<<hashTable.get(i)<< endl;
    }
    return 0;

}
