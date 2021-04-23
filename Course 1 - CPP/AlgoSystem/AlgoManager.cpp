//
// Created by Lotus on 25/05/2020.
//
#include <iostream>
#include "list_handler.h"
#include "char_handler.h"
#include "AlgoManager.h"
#include "ArrayManager.h"
//#include "CharManager.h"

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

        ArrayManager arrayManager;
        //CharManager charmanager;

        switch(this->command) {
            //case 0: listCommand(); break;
            case 1: arrayManager.dataStructureCommandLine(); break; // TODO: Your mission bitch
            //case 2: charmanager.dataStructureCommandLine(); break;
        }
    }
}
