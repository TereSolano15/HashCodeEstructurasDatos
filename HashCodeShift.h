//
// Created by Tere Solano on 18/1/2021.
//

#ifndef HASH_HASHCODESHIFT_H
#define HASH_HASHCODESHIFT_H

#include <iostream>
using namespace std;

class HashCodeShift {

    int hashCode(const char* p, int len){ // hash a character array
        unsigned int h =0;
        for(int i =0; i<len; i++){
            h = (h<<5) | (h >>27); // 5-bit cyclin shift
            h += (unsigned  int) p[1]; // add in next character
        }
        return h;
    }
    int hashCode(const float& x){ // hash para un float
        int len= sizeof (x);
        const char* p = reinterpret_cast<const char *>(&x);
        return hashCode(p,len);
    }

    static int hashCode(string s){ // crea el hash code evitando mayormente "las colisiones"
        int h =0;
        for(int i=0; i<s.length(); i++){
            h= (h << 5) | (h >> 27);
            h+= (int) s.at(i);
        }
        return h;
    }
};

#endif //HASH_HASHCODESHIFT_H
