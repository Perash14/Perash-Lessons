//
// Created by Lotus on 10/05/2020.
//

#include <iostream>
#include "array_handler.h"

using namespace std;

int RecieveElement(){
    int element;
    cout <<  "Which number would you like to add: ";
    cin >> element;
    return element;
}

int* reduceArrSize(int* current_arr, int size){
    int* newArr = new int[size + 1];
    for(int i = 0;i < size;i++){
        newArr[i] = current_arr[i];
    }
    delete current_arr;
    size--; // Changes the original
    return newArr; // Returns the new array
}

int* addElement(int* current_arr, int& size, int element) {

    int* newArr = new int[size + 1];
    for(int i = 0;i < size;i++){
        newArr[i] = current_arr[i];
    }
    newArr[size] = element;
    delete current_arr;
    size++; // Changes the original
    return newArr; // Returns the new array
}


void printArray(int* current_arr, int size){
    cout << "Your numbers are: ";
    for(int i = 0;i < size - 1;i++) cout << current_arr[i] << ",";
    cout << current_arr[size - 1] << "." << endl;
}


//Unfinished: Need to finish sortarray first and then
void removeElement(int* current_arr, int& size , bool sorted){
    //Find out if the array is sorted first, if yes then BinarySearch, if not! fuck zicaron and go over em all.
    int ToFind;
    cout << "This is your array :";
    for(int i = 0;i < size - 1;i++) cout << current_arr[i] << ",";
    cout << current_arr[size - 1] << "." << endl;

    int* RecurringValueIndexArr = new int[0];
    int RecurringValueIndexArrSize = 0;

    while(RecurringValueIndexArrSize == 0){
        cout << "Which number would you like to delete? ";
        cin >> ToFind;
        if(!sorted){
            //Making an array out of the indexes of the reouccuring value if it occurs more than once in current arr

            int RecurringValueIndexArrSize = 0;
            //Going over current arr to find the recurring indexes of tofind
            for(int i = 0;i < size;i++){
                if(current_arr[i] == ToFind){
                    addElement(RecurringValueIndexArr, RecurringValueIndexArrSize, i);
                }
            }
            if(RecurringValueIndexArrSize == 0){
                cout << "This value doesn't exist within Your array, dipshit, try again" << endl;
                continue;
            }
            else if(RecurringValueIndexArrSize == 1){
                for(int i = RecurringValueIndexArr[0];i < size;i++){
                    current_arr[i] = current_arr[i+1];
                }
                current_arr = reduceArrSize(current_arr, size);
            }
            else{}//If the value exists more than once in currentarr then ask him which ones he would like to delete
        }
        else{
            //Use the searcharray function
        }
    }
}

void printArrayHelp() {
    cout << "Which changes do you wish to make:" << endl <<
         "\t" << "|0 - Add|" << endl <<
         "\t" << "|1 - Remove|" << endl <<
         "\t" << "|2 - Print|" << endl <<
         "\t" << "|3 - Sort|" << endl <<
         "\t" << "|4 - Search|" << endl <<
         "\t" << "|5 - Back|" << endl;
}

void arrayCommand() {
    int arr_size = 0;
    bool is_sorted = false;
    int command = -1;
    int* arr = new int[0];
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
            case 0: arr = addElement(arr, arr_size, RecieveElement()); break;
            case 1: removeElement(arr, arr_size, is_sorted); break;
            case 2: printArray(arr, arr_size); break;
            /*case 3: sortArray(arr, arr_size); break;
            case 4: searchArray(arr, arr_size, is_sorted); break;*/
        }
    }
}
