#include <iostream>
using namespace std;


int main(){
    int arr[3];
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i =0 ; i<size;i++){
        cout<<"Enter the numbers:";
        cin >> arr[i] ;
    }
   int xm=  arr[0]<arr[1] ? arr[1]: arr[0];
   if(xm<arr[2]){
    cout<<arr[2]<<endl; 
   }
   else{
    cout<<xm<< endl;
   }
}