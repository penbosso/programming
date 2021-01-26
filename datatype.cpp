#include <iostream>

using namespace std;

int main() {
    int myInteger;
    int *myIntegerPtr;

    int &myIntegerRef = myInteger;

    const int MYCONST {2};

    myInteger = 5;
    myIntegerPtr = &myInteger;

    //increase via pointer
    (*myIntegerPtr)++;

    cout<<"----------------------------------------\n";
    cout<<"Value of myInteger -> "<<myInteger<<endl;
    cout<<"----------------------------------------\n";

    myIntegerRef++;

    cout<<"----------------------------------------\n";
    cout<<"Value of myInteger -> "<<myInteger<<endl;
    cout<<"----------------------------------------\n";

    // MYCONST=51;
    cout<<"----------------------------------------\n";
    cout<<"Change value of MYCONST -> "<< "error"<<endl;
    cout<<"----------------------------------------\n";
    
    cout<<"----------------------------------------\n";
    cout<<"Output decimal values of literals"<<endl;
    int a {'a'};
    cout<<"value of 'a' is "<<a<<endl;
    int decimalNumb = int(0xf3f2);
    cout<<"value of '0xf3f2' is "<<decimalNumb<<endl;
    decimalNumb = int(0437);
    cout<<"value of '0437' is "<<decimalNumb<<endl;
    cout<<"----------------------------------------\n";

    return 0;
}