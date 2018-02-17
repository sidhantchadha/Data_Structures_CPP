//============================================================================
// Name        : Merge_Sort.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Merge Sort in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void merge(int a[],int low,int high,int mid){
	int i=low;
	int j=mid+1;
	int k=0;
	int temp[high-low+1];
	while(i<=mid && j<=high) {
		if(a[i]<a[j]) {
		temp[k]=a[i];
		k++;
		i++;
	}
		else
	{
		temp[k]=a[j];
		k++;
		j++;
	}
	}
	while(i<=mid) {
		temp[k]=a[i];
		k++;
		i++;
	}
	while(j<=high) {
		temp[k]=a[j];
		k++;
		j++;
	}

	for(i=low;i<=high;i++)
		a[i]=temp[i-low];
}


void mergeSort(int a[],int low,int high) {
	int mid;
	if(low<high) {
		 mid=(low+high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,high,mid);
	}
}

int main() {
	int a[7]={23,54,12,76,4,66,8};
	mergeSort(a,0,6);
	for(int i=0;i<7;i++)
		cout<<a[i]<<" ";
	return 0;
}
