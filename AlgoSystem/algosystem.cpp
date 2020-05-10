#include<iostream>
using namespace std;



int main(){
    int Assortment = -1;
    while(0 > Assortment || Assortment > 2){
        cout << "Which assortment do you wish to change: |Linked list - 0||Array - 1||Character Array - 2| :";
        cin >> Assortment;
        //LinkedList
        if(Assortment == 0){
            int LL_sort_type;
            cout << "leg";
        }
        //Array
        else if(Assortment == 1){
            int ArrayCommand = -1;
            int Arrsize;
            int Array[Arrsize];
            while(0 > ArrayCommand || ArrayCommand > 3){
                cout << "What would you like to do  with your array sir?: |Add Numbers - 0||Remove Numbers - 1||Re-Sort - 2||Find Number index - 3| :";
                cin >> ArrayCommand;
                switch(ArrayCommand){
                case 0: AddNumbers(Array, Arrsize); break;
                case 1:
                case 2:
                case 3:
                    default: cout << "You shithead put in a valid number:" << endl; break;
                }
            }
        }
        //Char Array
        else if(Assortment == 2){

        }
        else cout << "Wrong number bitch" << endl;
    }
}
