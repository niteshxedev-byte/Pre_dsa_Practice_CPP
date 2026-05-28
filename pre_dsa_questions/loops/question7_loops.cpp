// question7_loops.cpp
// A positive integer is called an Armstrong number (of order n) if
// abcd... = an + bn + cn + dn + 
// In the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself. For example, 153 is an Armstrong number because
// 153 = 1*1*1 + 5*5*5 + 3*3*3 

#include <iostream>
using namespace std;

int main(){
    int num,originalNum, reminder,result=0; 
    cout<<"Enter the three digit Number: ";
    cin>> num;
    originalNum = num;
    while(originalNum>0){
        reminder = originalNum % 10 ;
        result = result +reminder*reminder*reminder;
        originalNum  = originalNum/10;

    }
    if(result=num){
        cout<<"Armstrong number"<< endl;
    }
    else{
         cout<<"not Armstrong number"<< endl;
    }
    return 0;
}