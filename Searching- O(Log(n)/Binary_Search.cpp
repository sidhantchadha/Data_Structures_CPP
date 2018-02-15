//============================================================================
// Name        : Binary_Search.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Binary Search in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int target) {
	int first=0;
	int last=size-1;
	int middle;
	int position=-1;
	bool found=false;
	while(first<=last && !found) {
		middle=(first+last)/2;
		if(target==arr[middle]) {
			found=true;
		position=middle;
		}
		else if(middle<target) {
			last=middle-1;
		}
		else if(middle>target) {
			first=middle+1;
		}

	}
	return position;
}


int main() {
	int size;
	cout<<"Enter array size:" <<endl;
	cin>>size;

	int arr[size];
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<size;i++)
		cin>>arr[i];
	cout<<"Enter target element"<<endl;
	int target;
	cin>>target;
	cout<<"Position of element found is: (-1 if not found): "<<binarySearch(arr,size,target)<<endl;

	return 0;
}
