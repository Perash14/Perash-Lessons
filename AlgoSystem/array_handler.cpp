//
// Created by Lotus on 10/05/2020.
//

#include <iostream>
#include "array_handler.h"

using namespace std;

void printArrayHelp() {
    cout << "Which assortment do you wish to change:" << endl <<
         "\t" << "|0 - Add|" << endl <<
         "\t" << "|1 - Remove|" << endl <<
         "\t" << "|2 - Sort|" << endl <<
         "\t" << "|3 - Search|" << endl;
}

void arrayCommand() {
    int arr_size;
    bool is_sorted = false;
    int command = -1;
    int* arr;
    const int END_COMMAND = 5;

    while(command != END_COMMAND) {
        printArrayHelp();
        cout << "Your choice: ";
        cin >> command;


    }
}
