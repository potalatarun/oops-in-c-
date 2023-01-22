#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// this function is for getting minimum of the array
int min(int *arr){
	int size = sizeof(arr)/sizeof(arr[0]);
	int ans = INT_MAX;
	for(int i=0;i<size;i++){
		if(arr[i]<ans){
			ans=arr[i];
		}
	}
	return ans;
}

// this function is for getting min of the array compared to given number otherwise return 0;

int min(int *arr,int val){
	int size = sizeof(arr)/sizeof(arr[0]);
	int ans = -1;
	for(int i=0;i<size;i++){
		if(arr[i]<val){
			ans=arr[i];
		}
	}
	if(ans==-1)return 0;
	return ans;
}
int main(){
	int arr[]={1,0,4,5,89,10000};
	cout<<min(arr)<<endl;
	cout<<min(arr,1)<<endl;
	return 0;
}