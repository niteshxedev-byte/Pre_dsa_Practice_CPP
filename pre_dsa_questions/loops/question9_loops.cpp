// question9_loops.cpp
// The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21


#include <iostream>
using namespace std;


int main(){
    int n , firstnum,secondnum;
    firstnum = 0;
    secondnum=1;
    int nextnum= firstnum+secondnum;

    // get input 
    cout<<"Enter the Number: ";
    cin>>n;

    // print first and second 

    cout<< firstnum <<endl;
    cout<< secondnum << endl;

    for(int i = 3; i<n; i++){
        cout<<nextnum<<endl;
        firstnum = secondnum;
        secondnum = nextnum;
        nextnum= firstnum+secondnum;
    }
    return 0;
    


}