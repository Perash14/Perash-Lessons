//
// Created by Lotus on 10/05/2020.
//

#include <iostream>
#include "array_handler.h"

using namespace std;

void printArrayHelp() {
    cout << "Which changes do you wish to make:" << endl <<
         "\t" << "|0 - Add|" << endl <<
         "\t" << "|1 - Remove|" << endl <<
         "\t" << "|2 - Sort|" << endl <<
         "\t" << "|3 - Search|" << endl <<
         "\t" << "|4 - Back|" << endl;
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
            case 0: addElement(); break;
            case 1: removeElement(); break;
            case 2: printArray(); break;
            case 3: sortArray(); break;
            case 4: searchArray(); break;
        }
    }
}
