#include <iostream>
using namespace std;


int main(){
    int x;
    cout<<"Enter the Number: ";
    cin >> x;
    if(x>0){
        cout<<"number is postive"<<endl;

    }
    else if(x<0){
        cout<<"Number is negative"<<endl;

    }
    else{
        cout<<"Number is zero"<<endl;

    }
    return 0;
}