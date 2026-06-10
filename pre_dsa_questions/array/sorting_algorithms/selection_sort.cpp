#include <iostream>



  void selectionSort(int arr[],int n){
    // cout<<n<<endl;
    int temp = 0;
    
    for(int i= 0 ;i<n;i++){
        int minIdx =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        
        temp = arr[minIdx];
        arr[minIdx]=arr[i];
        arr[i]=temp;
        
        
    }
}

int main(){

     int arr[7]={23,34,5,6,8,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    
    
    
   
    return 0;
  


}