//
// Created by admin on 14.04.2021.
//

#ifndef SEMESTRY_HASHTABLE_H
#define SEMESTRY_HASHTABLE_H

#include <vector>
#include "iostream"


template<typename K, typename V>
class HashTable {


private:
    int size;
    std::vector<V> mas;

    int indexHash(K key) {
        std::hash<K> hashKey;
        return hashKey(key) % (size - 1);
    }

public:
    HashTable() {
        size = 10;
        mas.resize(size);
    }

    void put(K key, V item) {
       mas[indexHash(key)] = item;
    }

    V get(K key) {
        return mas[indexHash(key)];
    }

    void remove(K key) {
        mas[indexHash(key)] = nullptr;
    }
};


#endif //SEMESTRY_HASHTABLE_H
