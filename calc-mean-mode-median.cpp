#include <iostream>
using namespace std;

float calculateMean( int inputNumbers[], int size) {
	int sum = 0;
	for(int i = 0; i < size ; i++) {
		sum += inputNumbers[i];
	}

	return sum/size;
}

int modalNumber(int inputNumbers[]) {
return 0;	
}

int medianNumber(int inputNumbers[]) {
return 0;

}

int main() {
	int inputNumbers[5];
	cout <<"Enter 5 interger values"<<endl;
	for(int counter = 0; counter < 5; counter++) {
		cout<<counter+1<<" -> enter value : ";
		cin>>inputNumbers[counter];
	}
	cout<<"---------------------------"<<endl;
	cout<<"The mean is -> "<<calculateMean(inputNumbers, 5)<<endl<<endl<<endl;
		
	return 0;
}
