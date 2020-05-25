//
// Created by Lotus on 25/05/2020.
//
#include <iostream>
#include "array_handler.h"
#include "list_handler.h"
#include "char_handler.h"
#include "AlgoManager.h"

using namespace std;

AlgoManager::AlgoManager() {

}

AlgoManager::~AlgoManager() {

}

void AlgoManager::printHelp(){
    cout << "Which assortment do you wish to change:" << endl <<
         "\t" << "|0 - Linked list|" << endl <<
         "\t" << "|1 - Array|" << endl <<
         "\t" << "|2 - Character Array|" << endl <<
         "\t" << "|3 - Exit|" << endl;
}

void AlgoManager::startCommandLine(){
    while(this->command != this->END_COMMAND){
        this->printHelp();
        cout << "Your choice: ";
        cin >> this->command;

        // Validate
        if(this->command < 0 || this->command > END_COMMAND) {
            cout << "Wrong number bitch" << endl;
            continue;
        }

        // Check ending
        if(this->command == END_COMMAND) {
            cout << "Goodbye MF!" << endl;
            break;
        }

        switch(this->command) {
            case 0: listCommand(); break;
            case 1: arrayCommand(); break;
            case 2: charCommand(); break;
        }
    }
}