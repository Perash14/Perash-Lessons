#include<iostream>

using namespace std;

//Making the sum,sub,mul and div functions using int
float sum(float x, float y){
    return x + y;
}

float sub(float x, float y){
    return x - y;
}

float mul(int x, int y){
    return x * y;
}

float div(float x, float y){
    return x / y;
}

//External equation to take Number and operation and give out the answer
float CompleteEquation(float* Number, char* operation){
    //The array in which we store the multiplication and division answers that are clung together(meaning if 1st scond and 3rd operation are m and d then the answer to all three of them together
    //get stored in PemdasOne[0]
    float PemdasOne[100];
    int PemdasOneCounter = 0;
    //Start with multiplication and division, go through all the operations and find all the m and d's and do them first, and then do the sub and add's
    for(int i = 0;operation[i - 1] != '/0';i++){
        //The answer to the multiplication and division sections of the equation, what will in the end of the for loop be stored as PemdasOne[0]
        float MDAnswer;
        //Need the final JI ratio after second loop is do so that it can be added to I to make it skip over the md's its already done
        int Final_JI_Ratio;
        //We go through all the multiplication/division that comes in a row and save it as Answer
        for(int j = i;operation[j] != '+' && operation[j] != '-' && operation[j] != '/0';j++){
            //Mul
            cout << j;
            if(operation[j] == '*'){
                //The first equation doesn't have a "MDanswer" so I do an "if" just for the first equation
                if(j = i)MDAnswer = mul(Number[j], Number[j+1]);
                else MDAnswer = mul(MDAnswer,  Number[j+1]);
            }
            //Div
            if(operation[j] == '/'){
                //The first equation doesn't have a "MDanswer" so I do an "if" just for the first equation
                if(j = i)MDAnswer = div(Number[j], Number[j+1]);
                else MDAnswer = div(MDAnswer,  Number[j+1]);
            }
            Final_JI_Ratio = j - i;
        }
        i = i + Final_JI_Ratio;
        if(Final_JI_Ratio > 0){
            PemdasOne[PemdasOneCounter] = MDAnswer;
            PemdasOneCounter++;
            MDAnswer = 0;
            Final_JI_Ratio = 0;
        }
    }
    //Do the subs and adds using the filled up PemdasOne and the plus and minus areas from the operations char
    float Answer;
    PemdasOneCounter = 0;
    if(operation[0] == '*' || operation[0] == '/'){
        Answer = PemdasOne[0];
        PemdasOneCounter++;
    }
    else Answer = Number[0];
    //Going over the entire operation array until I find plus and minus and then I take the number before PM(which is stored in PemdasOne and then I
    //Tip Answer = Number + Pemdas or Pemdas + Number or Number + Number
    for(int i = 0;operation[i - 1] != '/0';i++){
        switch(operation[i]){
            case '+': if(operation[i+1] == '*' || operation[i+1] == '/'){
                          Answer = sum(Answer, PemdasOne[PemdasOneCounter]);
                      }
                      else Answer = sum(Answer, Number[i+1]);
            case '-': if(operation[i+1] == '*' || operation[i+1] == '/'){
                          Answer = sub(Answer, PemdasOne[PemdasOneCounter]);
                      }
                      else Answer = sub(Answer, Number[i+1]);
            case '*': break;
            case '/': break;
        }
    }
    return Answer;
}

int main(){
    //Asking the user to enter the input
    float Number[100];
    char operation[100];
    for(int i = 0;operation[i - 1] != '=';i++){
        cout << "Enter number: ";
        cin >> Number[i];
        cout << "Enter operation: ";
        cin >> operation[i];
    }
    cout << "Your answer is " << CompleteEquation(Number, operation) << ".";
}
