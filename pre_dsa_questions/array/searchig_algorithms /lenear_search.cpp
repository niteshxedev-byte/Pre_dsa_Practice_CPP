#include <iostream>
using namespace std;


void linearSearch(int arr[],int n,int key ){
    for(int i=0;i<n;i++){
        if(arr[i]==key){ cout<<i<<endl;
            break;
        }
    }
     
  
  
  
}





int main(){
    int arr[7]={23,34,5,6,8,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    linearSearch(arr,n,8);
    
    
    
  
    
    return 0;
}