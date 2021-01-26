//
// Created by Tere Solano on 18/1/2021.
//
#ifndef HASH_HASHBUCKET_H
#define HASH_HASHBUCKET_H
#include <iostream>
#include <list>
using namespace std;

class HashBucket {
private:
    int tamBucket;
    list<int>* tabla;
public:
    HashBucket(int v);
    void insertItem(int key);
    void deleteItem(int key);
    int hashFuntion(int x);
    void displayHash();
};

#endif //HASH_HASHBUCKET_H
