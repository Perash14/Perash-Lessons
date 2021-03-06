//
// Created by Lotus on 10/05/2020.
//

#ifndef ALGOSYSTEM_ARRAY_HANDLER_H
#define ALGOSYSTEM_ARRAY_HANDLER_H

void printArrayHelp();

/**
 * System for managing an array
 */
void arrayCommand(); // Declaration

int* addElement(int* current_arr, int& size);
void removeElement(int* current_arr, int size);
void printArray(int* current_arr, int size);
void sortArray(int* current_arr, int size);
int searchArray(int* current_arr, int size, bool is_sorted);
int* reduceArrSize(int* current_arr, int& size);

#endif //ALGOSYSTEM_ARRAY_HANDLER_H
