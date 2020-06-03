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

int ArrayManager::search(int value) {
    if(!is_sorted){
        for(int i = 0; i < this->size; i++) {
            std::cout << i;
            if(arr[i] == value) return i; break;
            if(i = this->size - 1) std::cout << "Unable to find inserted value within array, maybe it doesn't exist?" << std::endl;
        }
    }
    else{
        // Binary search
        int Ending = this->arr[this->size - 1];
        int Start = this->arr[0];
        while(Ending != Start){
            if(value > this->arr[(Start + Ending)  / 2]) Start = (Start + Ending)  / 2;
            else if (value < this->arr[(Start + Ending)  / 2]) Ending = (Start + Ending)  / 2;
            else return (Start + Ending)  / 2;
        }
    }
}

void ArrayManager::sort() {
    //SelectionSort
    int MinimumIndex, MaximumIndex;
    for(int i = 0;i <= this->size / 2;i++){
        MinimumIndex = i;
        MaximumIndex = i;
        for(int j = i; j <= this->size - 1 - i;j++){
            if(this->arr[j] <= this->arr[MinimumIndex]) MinimumIndex = j;
            if(this->arr[j] >= this->arr[MaximumIndex]) MaximumIndex = j;
        }
        swap(this->arr[i], this->arr[MinimumIndex]);
        swap(this->arr[size - 1 - i], this->arr[MaximumIndex]);
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
            case 4: std::cout << "Your Numbers index is: " << this->search(RecieveSearch()) << std::endl; break;
        }
    }
}
