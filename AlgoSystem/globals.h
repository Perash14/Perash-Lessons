//
// Created by Lotus on 27/05/2020.
//

#ifndef ALGOSYSTEM_GLOBALS_H
#define ALGOSYSTEM_GLOBALS_H

#include <iostream>

inline int ReceiveElement(){
    int element;
    std::cout <<  "Which number would you like to add: ";
    std::cin >> element;
    return element;
}

inline void swap(int& first, int& second){
    int temp = first;
    first = second;
    second = temp;
}

#endif //ALGOSYSTEM_GLOBALS_H
