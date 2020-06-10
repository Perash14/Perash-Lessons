#include "ArrayManager.h"
#include <iostream>

ArrayManager::ArrayManager()
{
    this->arr = new int[0];
    this->size = 0;
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
    this->is_sorted = false;
}

void ArrayManager::remove(int index) {
    for(int i = index; i < this->size - 1; i++){
        this->arr[i] = this->arr[i + 1];
    }
    this->size--;
}

void ArrayManager::search(int value) {
    if(!is_sorted){
        for(int i = 0; i < this->size; i++) {
            if(this->arr[i] == value){
                std::cout << "Your Numbers index is: " << i << std::endl;
                break;
            }
            if(i == this->size - 1) std::cout << "Unable to find inserted value within array, maybe it doesn't exist?" << std::endl;
        }
    }
    else{
        // Binary search
        int ending = this->size - 1;
        int start = 0;
        while(ending != start){
            if(value > this->arr[(start + ending)  / 2]) start = (start + ending)  / 2;
            else if (value < this->arr[(start + ending)  / 2]) ending = (start + ending)  / 2;
            else {
                std::cout << "Your Numbers index is: " << (start + ending)  / 2 << std::endl;
                break;
            }
        }
    }
}

void ArrayManager::sort() {
    //SelectionSort
    int minimumIndex, maximumIndex;
    for(int i = 0; i <= this->size / 2 + (this->size % 2); i++){
        minimumIndex = i;
        maximumIndex = size - i - 1;
        for(int j = i; j <= this->size - i - 1;j++){
            if(this->arr[j] <= this->arr[minimumIndex]) minimumIndex = j;
            else if(this->arr[j] >= this->arr[maximumIndex]) maximumIndex = j;
        }
        swap(this->arr[i], this->arr[minimumIndex]);
        swap(this->arr[size - i - 1], this->arr[maximumIndex]);
    }
    this->is_sorted = true;
    std::cout << "Array sorted =)" << std::endl;
}

void ArrayManager::print() {
    std::cout << "Your numbers are: ";
    for(int i = 0;i < this->size - 1;i++) std::cout << this->arr[i] << ",";
    std::cout << this->arr[this->size - 1] << "." << std::endl;
}

void ArrayManager::help() {
    std::cout << "Which changes do you wish to make:" << std::endl <<
         "\t" << "|0 - Add|" << std::endl <<
         "\t" << "|1 - Remove|" << std::endl <<
         "\t" << "|2 - Print|" << std::endl <<
         "\t" << "|3 - Sort|" << std::endl <<
         "\t" << "|4 - Search|" << std::endl <<
         "\t" << "|5 - Back|" << std::endl;
}

void ArrayManager::dataStructureCommandLine() {
    int command = -1;
    const int END_COMMAND = 5;

    while(command != END_COMMAND) {
        this->help();
        std::cout << "Your choice: ";
        std::cin >> command;

        // Validate
        if(command < 0 || command > END_COMMAND) {
            std::cout << "Wrong number bitch" << std::endl;
            continue;
        }

        // Check ending
        if(command == END_COMMAND) {
            std::cout << "Back you go." << std::endl;
            break;
        }

        switch(command) {
            case 0: this->add(ReceiveAdd()); break;
            case 1: this->remove(RecieveRemove()); break;
            case 2: this->print(); break;
            case 3: this->sort(); break;
            case 4: this->search(RecieveSearch()); break;
        }
    }
}
