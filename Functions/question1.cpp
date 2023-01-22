// find all the odd values in the given array,size;

#include<iostream>
using namespace std;
void odd(int *arr, int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0)cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    odd(arr,size);
    return 0;
}