//
// Created by Tere Solano on 18/1/2021.
//

#include <iostream>
#include "HashBucket.h"
using namespace std;

int main() {
    // MAIN HASH CODE SHIFT
    //  float f = 683974.15;
    //string s = "this is just a random phrase";
    //cout<<"Float: "<< hashCode(f)<<endl;
    //cout<<"String: " <<hashCode(s)<<endl;

    // MAIN HASH BUCKET
    int a[] = {15, 11, 27, 8, 12};
    int n = sizeof(a) / sizeof(a[0]);
    //construccion de la tabla hash
    HashBucket h(7);
    for (int i = 0; i < n; i++) {
        h.insertItem(a[i]);
    }
    // se borra el 12
     h.deleteItem(12);
    // se muestran los datos
    h.displayHash();

    return 0;
}