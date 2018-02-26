//First non repeating character in a string//
#include <iostream>
#include <string>
#include <vector>
using  namespace std;
//Complexity: Linear : O(N)

int firstNonRep(char *s, int n) {
	vector<int>count(256,0);
	for(int i=0;i<n;i++)
		count[s[i]]++;
	int index=0;
	for(int j=0;j<n;j++)
	{
		if(count[s[j]]==1) {
			index=j;
			break;
		}
	}
	return index;
}

int main() {
	char s[256];
	cout<<"Enter a string: "<<endl;
	cin>>s;
	int size=sizeof(s);
	cout<<"First non repeating character is: "<<s[firstNonRep(s,size)];


}



