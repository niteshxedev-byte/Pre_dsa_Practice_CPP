#include <bits/stdc++.h>
using namespace std;






int  binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
         if(arr[mid]<key){
           start= mid+1; 
        }
        else {
        end = mid-1;
        }
        
       
        
    }
    return -1;
    
    
    
}


int main(){
    int arr[7]={23,34,5,6,8,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    reverseArr(arr,n);
    
    
    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}