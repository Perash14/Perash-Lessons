//
// Created by Lotus on 27/05/2020.
//

#ifndef ALGOSYSTEM_GLOBALS_H
#define ALGOSYSTEM_GLOBALS_H

#include <iostream>

inline int ReceiveAdd(){
    int element;
    std::cout <<  "Which number would you like to add: ";
    std::cin >> element;
    return element;
}

inline int RecieveRemove(){
    int Index;
    std::cout <<  "Which index would you like to delete: ";
    std::cin >> Index;
    return Index;
}

inline int RecieveSearch(){
    int Index;
    std::cout <<  "Which value's index would you like to revealed: ";
    std::cin >> Index;
    return Index;
}

inline void swap(int& first, int& second){
    int temp = first;
    first = second;
    second = temp;
}

inline void SwapChar(char& first, char& second){
    char temp = first;
    first = second;
    second = temp;
}

inline char ReceiveAddChar(){
    char element;
    std::cout <<  "Which character would you like to add: ";
    std::cin >> element;
    return element;
}

inline char RecieveRemoveChar(){
    char Index;
    std::cout <<  "Which index would you like to delete: ";
    std::cin >> Index;
    return Index;
}

inline char RecieveSearchChar(){
    char Index;
    std::cout <<  "Which characters index would you like to revealed: ";
    std::cin >> Index;
    return Index;
}


#endif //ALGOSYSTEM_GLOBALS_H
