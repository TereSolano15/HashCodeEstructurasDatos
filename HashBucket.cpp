//
// Created by Tere Solano on 18/1/2021.
//

#include "HashBucket.h"

int HashBucket::hashFuntion(int x) {
    return (x % tamBucket);
}

HashBucket::HashBucket(int v) {
    this->tamBucket = v;
    tabla = new list<int>[tamBucket];
}

void HashBucket::insertItem(int key) {
    int index= hashFuntion(key);
    tabla[index].push_back(key);
}

void HashBucket::deleteItem(int key) {
    //obtenga el indice hash de la llave
    int index = hashFuntion(key);
    //encuentra la llave i-esima en la lista
    list<int>::iterator i;
    for (i = tabla[index].begin(); i != tabla[index].end(); i++) {
        if (*i == key)
            break;
    }
    // si se encuentra la posicion se borra
    if (i != tabla[index].end())
        tabla[index].erase(i);
}
void HashBucket::displayHash() {
    for(int i=0; i<tamBucket; i++){
        cout<< i;
        for(auto x:tabla[i])
            cout<<" --> "<< x;
        cout<<endl;
    }
}
