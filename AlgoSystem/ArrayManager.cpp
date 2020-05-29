#include "ArrayManager.h"
#include <iostream>

using namespace std;

ArrayManager::ArrayManager()
{
    //ctor
}

ArrayManager::~ArrayManager()
{
    //dtor
}

void ArrayManager::add(int element) {
    int* newArr = new int[this->size + 1];
    for(int i = 0;i < this->size;i++){
        newArr[i] = this->arr[i];
    }
    newArr[this->size] = element;
    delete this->arr;
    this->size++; // Changes the original
    this->arr = newArr;
}

void ArrayManager::remove(int index) {
    for(int i = index; i < this->size - 1; i++){
        this->arr[i] = this->arr[i + 1];
    }
    this->size--;
}

int ArrayManager::search(int element) {
    return 0;
}

void ArrayManager::sort() {

}

void ArrayManager::print() {
    cout << "Your numbers are: ";
    for(int i = 0;i < this->size - 1;i++) cout << this->arr[i] << ",";
    cout << this->arr[this->size - 1] << "." << endl;
}

void ArrayManager::help() {
    cout << "Which changes do you wish to make:" << endl <<
         "\t" << "|0 - Add|" << endl <<
         "\t" << "|1 - Remove|" << endl <<
         "\t" << "|2 - Print|" << endl <<
         "\t" << "|3 - Sort|" << endl <<
         "\t" << "|4 - Search|" << endl <<
         "\t" << "|5 - Back|" << endl;
}

void ArrayManager::dataStructureCommandLine() {
    int command = -1;
    const int END_COMMAND = 5;

    while(command != END_COMMAND) {
        this->help();
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
            case 0: this->add(ReceiveElement()); break;
            case 1: this->remove(ReceiveElement()); break;
            case 2: this->print(); break;
            case 3: this->sort(); break;
            /*case 4: searchArray(arr, arr_size, is_sorted); break;*/
        }
    }
}
