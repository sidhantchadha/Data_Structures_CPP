//============================================================================
// Name        : Quick_Sort.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Quick Sort in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int partition(int list[],int start,int end) {
	int mid=(start+end)/2;
	swap(list[start],list[mid]);
	int pivotIndex=start;
	int pivotItem=list[start];
	for(int i=start+1;i<=end;i++) {
		if(list[i]< pivotItem){
			pivotIndex++;
			swap(list[pivotIndex],list[i]);
		}
	}
	swap(list[start],list[pivotIndex]);

	return pivotIndex;
}

void quickSort(int list[],int start,int end) {
	if(start<end){
		int pivotPoint=partition(list,start,end);
		quickSort(list,start,pivotPoint-1);
		quickSort(list,pivotPoint+1,end);
	}
}

void quickSort(int list[],int size) {
	quickSort(list,0,size-1);
}

int main() {
	int array[7]={34,65,12,76,22,1,9};
	quickSort(array,7);
	for(int i=0;i<7;i++) {
		cout<<array[i]<<" ";
	}
}
