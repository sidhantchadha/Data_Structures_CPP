//============================================================================
// Name        : RemoveSpecifiedChars.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Remove Specified Characters in string in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
using namespace std;
//Complexity: Linear : O(M+N)//

void getCount(string s, string str) {
	vector<int>count(s.size(),0);
	int size=s.length();
	string final="";
	for(int i=0;i<size;i++)
		count[s[i]]++;
	for(int j=0;j<str.size();j++) {
		if(count[str[j]]!=1)
		final=final+str[j];
}
	cout<<final;
}

int main() {
	string a="Thqe ruqnytqyimqe pyoqf yqtphisq pqcypoqdye yisq lqinyeqayr!! yOp(qqyNy+pM) ;) ";
	string b="qyp";
	getCount(b,a);
	return 0;
}
