// question6_loops.cpp
// Palindrome number 121 = rev 121
// take the number revrse it and then use if conditon to cheak

#include <iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter the Number:";
    cin >> num;
    int x = num;
    int rev = 0 ;
    while(x>0){
         int d = x % 10 ;
        rev = rev * 10 + d;
        x /= 10;
    }
    if(rev == num){
        cout<< "The number is Palindrome";
    }
    else{
         cout<< "The number is not Palindrome";
    }

    return 0;
}