//
// Created by Lotus on 27/05/2020.
//

#ifndef ALGOSYSTEM_DATASTRUCTUREPARENT_H
#define ALGOSYSTEM_DATASTRUCTUREPARENT_H

#include "globals.h"

class DataStructureParent { // Abstract class
public:
    virtual void add(int element) = 0;
    virtual void remove(int index) = 0;
    virtual int search(int element) = 0;
    virtual void sort() = 0;
    virtual void print() = 0;
    virtual void help() = 0;
};


#endif //ALGOSYSTEM_DATASTRUCTUREPARENT_H
