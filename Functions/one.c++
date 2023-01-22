#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[] = {12, 13,14,15,16};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int sum =0;
    for(int i=0;i<size;i++){
        sum+=arr1[i];
        cout<<arr1[i]<<" ";
    }
    cout <<endl<<"sum of the elements in the array: "<<sum<<endl;
    return 0;
}