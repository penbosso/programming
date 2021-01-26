#include <iostream>

using namespace std;

int main() {
    enum {RED, YELLOW, AMBER=YELLOW, GREEN };

    cout<<"----------------------------------------\n";
    cout<<"RED      -> "<<RED<<endl;
    cout<<"YELLOW   -> "<<YELLOW<<endl;
    cout<<"AMBER    -> "<<AMBER<<endl;
    cout<<"GREEN    -> "<<GREEN<<endl;
    cout<<"----------------------------------------\n";
    
    return 0;
}