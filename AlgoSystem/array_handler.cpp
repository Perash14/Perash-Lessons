//
// Created by Lotus on 10/05/2020.
//

#include <iostream>
#include "array_handler.h"

using namespace std;

int addElement(int arr, int ArrSize){
    int element;
    cout <<  "Which number would you like to add: ";
    cin >> element;

    int* newArr = new int[ArrSize + 1];
    for(int i = 0;i < ArrSize;i++){
        newArr[i] = arr[i];
    }
    newArr[ArrSize] = element;
    delete arr;
    arr = newArr;
    ArrSize++;

    return *arr, ArrSize;
}

void printArrayHelp() {
    cout << "Which changes do you wish to make:" << endl <<
         "\t" << "|0 - Add|" << endl <<
         "\t" << "|1 - Remove|" << endl <<
         "\t" << "|2 - Sort|" << endl <<
         "\t" << "|3 - Search|" << endl <<
         "\t" << "|4 - Back|" << endl;
}

void arrayCommand() {
    int* arr_size;
    bool is_sorted = false;
    int command = -1;
    int* arr;
    const int END_COMMAND = 5;

    while(command != END_COMMAND) {
        printArrayHelp();
        cout << "Your choice: ";
        cin >> command;

        // Validate
        if(command < 0 || command > END_COMMAND) {
            cout << "Wrong number bitch" << endl;
            continue;
        }

        // Check ending
        if(command == END_COMMAND) {
            cout << "Back you go." << endl;
            break;
        }

        switch(command) {
            case 0: addElement(arr, arr_size); break;
            case 1: removeElement(arr, arr_size); break;
            case 2: printArray(arr, arr_size); break;
            case 3: sortArray(arr, arr_size); break;
            case 4: searchArray(arr, arr_size, is_sorted); break;
        }
    }
}