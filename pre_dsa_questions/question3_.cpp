#include <iostream>
using namespace std;


int main(){
    int a,b,temp ;
    //  taking inputs 
    cout<<"Enter first number: ";
    cin>>a;
     cout<<"Enter second number: ";
    cin>>b;
    // printing original values of a and b 

    cout << "a =>" <<a << "b =>"<<b << endl; 

    // swaping values 

    temp = a ;
    a=b ;
    b=temp;

    // after swaping values

    cout << "a =>" <<a << "b =>"<<b << endl; 




}