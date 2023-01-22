#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int second_min(int *arr,int size){
	int min = INT_MAX;
	int min2 = INT_MAX;

	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min2=min;
			min=arr[i];
		}
		else if(arr[i]<min2){
			min2=arr[i];
		}
	}
	return min2;
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<second_min(arr,size);
	return 0;
}