#include<iostream>

#include "array_handler.h"
#include "list_handler.h"
#include "char_handler.h"

using namespace std;

void printHelp() {
    cout << "Which assortment do you wish to change:" << endl <<
         "\t" << "|0 - Linked list|" << endl <<
         "\t" << "|1 - Array|" << endl <<
         "\t" << "|2 - Character Array|" << endl <<
         "\t" << "|3 - Exit|" << endl;
}

int main() {
    int assortment = -1;
    const int END_COMMAND = 3; // On change will give an error!

    while(assortment != END_COMMAND){
        printHelp();
        cout << "Your choice: ";
        cin >> assortment;

        // Validate
        if(assortment < 0 || assortment > END_COMMAND) {
            cout << "Wrong number bitch" << endl;
            continue;
        }

        // Check ending
        if(assortment == END_COMMAND) {
            cout << "Goodbye MF!" << endl;
            break;
        }

        switch(assortment) {
            case 0: listCommand(); break;
            case 1: arrayCommand(); break;
            case 2: charCommand(); break;
        }
    }

    // Ending scene!
}
