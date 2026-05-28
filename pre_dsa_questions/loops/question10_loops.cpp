// prime number

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number: "; 
    cin>>n;
    
    if(n<=1){
    cout<<"not a prime"<<endl;
    return 0;

    }
    bool isprime = true;
    for(int i =2 ; i<n;i++){
        if(n%i==0){
           isprime = false;
           break;

        }
    }
    if(isprime){
        cout<<"prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }
    return 0;
}