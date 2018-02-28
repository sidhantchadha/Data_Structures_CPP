//============================================================================
// Name        : ReverseWords.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Reverse words in string in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
//Complexity: Linear: O(N)

void reverseWord(string s) {

	for(int i=0;i<s.size();i++) {
		int begin=i;
		while(isalpha(s[i]))
			i++;
		int stop=i;
		reverse(s.begin()+begin,s.begin()+stop); 	//to reverse characters in a word//
	}

	reverse(s.begin(),s.end()); //to reverse the reversed characters in the words, and print
							   //the words back in reverse.
	cout<<s<<endl;

}
int main() {
	string str;
	cout<<"Enter a string to reverse its words: "<<endl;
	getline(cin,str);
	reverseWord(str);
}
