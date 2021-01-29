#include <iostream>
#include <string>
using namespace std;

namespace my {
	int strcmp(const char *l, const char *r) {
		while(*l && (*l == *r)){
			*l++;
			*r++;
		}
		return *(const unsigned char*)l - *(const unsigned char *) r;
	}

	int strlen(const char *s) {
		int counter = 0;
		while(*s++){
			counter++;
		}

		return counter;
	
	}

	char *strcat(char *l, const char *r){
		while(*l++);
		while(*l++ = *r++);

		return l;
	}
	

	char *strcpy(char *l, const char *r) {
		char *start {l};
		while(*l++ = *r);
		return start;
	
	}
}

int main() {

	cout<<"==========================================================\n";
	cout<<"Enter word 1: ";
	string word1, word2;
	cin>>word1;
	cout<<"Enter word 2: ";
	cin>>word2;
	//cout<<"Number of words in word 1 is: "<<my::strlen(word2.c_str())<<endl;
	//cout<<"The two words joined is: "<<my::strcat(word1.c_str(),word2.c_str())<<endl;
	cout<<"Result of comparison : "<<my::strcmp(word1.c_str(),word2.c_str()) <<"\n\n";


}
