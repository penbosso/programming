#include <iostream>
#include <string>
#include <cstring> //for version 2's strcp
using namespace std;

int main() {    
    cout<<"----------------------------------------\n";
    cout<<"Enter sentence with hypyhen separating the words \n"<<endl;
    string inputSentence;

    cin >> inputSentence;

// Version one
    cout<<"-----------normal strings------------\n";
    string tempStr="";
    for(int counter = 0; counter < inputSentence.length(); counter++) {
        if(inputSentence[counter] == '-') {
            cout<<"["<<tempStr.length()<<"] "<<tempStr<<endl;
            tempStr ="";
        } else {
            tempStr +=inputSentence[counter];
        }
    }
    cout<<"["<<tempStr.length()<<"] "<<tempStr<<endl;

// Version 2

    cout<<"------------Version 2 char [ ]--------------\n";
    char sentenceArray [inputSentence.length()];
    strcpy(sentenceArray, inputSentence.c_str());
    tempStr = "";
    for(int counter = 0; counter < sizeof(sentenceArray); counter++) {
        if(*(sentenceArray+counter) == '-') {
            cout<<"["<<tempStr.length()<<"] "<<tempStr<<endl;
            tempStr ="";
        } else {
            tempStr += *(sentenceArray+counter);
        }
    }
    // cout<<sizeof(sentenceArray)<<endl;
    cout<<"["<<tempStr.length()<<"] "<<tempStr<<endl;
}