//
// Created by Lotus on 27/05/2020.
//

#ifndef ALGOSYSTEM_DATASTRUCTUREPARENT_H
#define ALGOSYSTEM_DATASTRUCTUREPARENT_H

#include "globals.h"

class DataStructureParent { // Abstract class
public:
    virtual void add(int element) = 0;
    virtual void CharAdd(char element) = 0;
    virtual void remove(int index) = 0;
    virtual void search(int value) = 0;
    virtual void CharSearch(char value) = 0;
    virtual void sort() = 0;
    virtual void print() = 0;
    virtual void help() = 0;

    virtual void dataStructureCommandLine() = 0;
};


#endif //ALGOSYSTEM_DATASTRUCTUREPARENT_H
