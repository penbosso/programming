#include <iostream>
using namespace std;

void displayEvenOdd(int number) {
	if(number % 2 == 0) {
		cout<<"\nTwenty row multiplication table for "<<number<<endl;
		for(int count = 1; count <= 20; count++) {
			cout<<number <<" X  "<< count <<" = "<<count*number<<endl;
		}
	} else {
		int notFactor = 0 , count = 0;
		cout<<"\nFirst thirty intergers not divicible by "<<number<<endl;
		while(count <=30) {
			if(notFactor % number != 0) {
				
				cout<<count<<" -> "<<notFactor<<endl;
			       count +=1;	
			}
			notFactor+=1;
		}
	}
}

int main() {
	cout<<"------------------------------\n";
	cout<<"Enter an integer value : ";
	int numb;
	cin>>numb;
	displayEvenOdd(numb);
	return 0;
}
