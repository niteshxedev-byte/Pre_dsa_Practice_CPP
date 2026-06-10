// reverse array using two pointer approach


#include <bits/stdc++.h>
using namespace std;





void reverseArr(int arr[], int n ){
    int start = 0;
    int end = n-1;
    int temp;
    
    while(start<=end){
        temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}



int main(){
    int arr[7]={23,34,5,6,8,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    reverseArr(arr,n);
    
    
    
   
    
    return 0;
}