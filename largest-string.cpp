#include <iostream>
#include <string>

using namespace std;

int main() {
	typedef string str [10];

	str stringArray;
	int largestString = 0, largestStringIndex;
	cout<<"------------------------------------------\n";
	for(int count =0; count < 10; count ++) {

	cout<<"Enter word "<<count+1<<" -> ";
	cin>>stringArray[count];

	if(stringArray[count].length() > largestString) {
		largestString = stringArray[count].length();
		largestStringIndex = count;
	}
	}

	cout<<"The string with the largest size is -> "<<stringArray[largestStringIndex]<<endl;


}
