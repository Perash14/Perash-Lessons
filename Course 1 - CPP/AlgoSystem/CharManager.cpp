#include "CharManager.h"

CharManager::CharManager()
{
    //ctor
    this->arr = new char[0];
    this->size = 0;
}

CharManager::~CharManager()
{
    //dtor
}

void CharManager::CharAdd(char element) {
    char* newArr = new char[this->size + 1];
    for(int i = 0;i < this->size;i++){
        newArr[i] = this->arr[i];
    }
    newArr[this->size] = element;
    delete this->arr;
    this->size++; // Changes the original
    this->arr = newArr;
    this->is_sorted = false;
}

void CharManager::remove(int index) {
    for(int i = index; i < this->size - 1; i++){
        this->arr[i] = this->arr[i + 1];
    }
    this->size--;
}

void CharManager::CharSearch(char value) {
    if(!is_sorted){
        for(int i = 0; i < this->size; i++) {
            if(this->arr[i] == value){
                std::cout << "Your characters index is: " << i << std::endl;
                break;
            }
            if(i == this->size - 1) std::cout << "Unable to find inserted character within array, maybe it doesn't exist?" << std::endl;
        }
    }
    else{
        // Binary search
        char Ending = this->arr[this->size - 1];
        char Start = this->arr[0];
        while(Ending != Start){
            if(value > this->arr[(Start + Ending)  / 2]) Start = (Start + Ending)  / 2;
            else if (value < this->arr[(Start + Ending)  / 2]) Ending = (Start + Ending)  / 2;
            else std::cout << "Your characters index is: " << (Start + Ending)  / 2 << std::endl;
        }
    }
}

// ------------------------------------------------Sorting char array? also error on line 68
void CharManager::sort() {
    //SelectionSort
    int MinimumIndex, MaximumIndex;
    for(int i = 0;i <= this->size / 2;i++){
        MinimumIndex = i;
        MaximumIndex = size - 1 - i;
        for(int j = i; j <= this->size - 1 - i;j++){
            if(this->arr[j] <= this->arr[MinimumIndex]) MinimumIndex = j;
            if(this->arr[j] >= this->arr[MaximumIndex]) MaximumIndex = j;
        }
        SwapChar(this->arr[i], this->arr[MinimumIndex]);
        SwapChar(this->arr[size - 1 - i], this->arr[MaximumIndex]);
    }
    this->is_sorted = true;
    std::cout << "Array sorted =)" << std::endl;
}

void CharManager::print() {
    std::cout << "Your characters are: ";
    for(int i = 0;i < this->size - 1;i++) std::cout << this->arr[i] << ",";
    std::cout << this->arr[this->size - 1] << "." << std::endl;
}

void CharManager::help() {
    std::cout << "Which changes do you wish to make:" << std::endl <<
         "\t" << "|0 - Add|" << std::endl <<
         "\t" << "|1 - Remove|" << std::endl <<
         "\t" << "|2 - Print|" << std::endl <<
         "\t" << "|3 - Sort|" << std::endl <<
         "\t" << "|4 - Search|" << std::endl <<
         "\t" << "|5 - Back|" << std::endl;
}

void CharManager::dataStructureCommandLine() {
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
            case 0: this->add(ReceiveAddChar()); break;
            case 1: this->remove(RecieveRemoveChar()); break;
            case 2: this->print(); break;
            case 3: this->sort(); break;
            case 4: this->search(RecieveSearchChar()); break;
        }
    }
}

