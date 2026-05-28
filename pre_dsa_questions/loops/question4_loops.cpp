#include <iostream>
using namespace std;


int main(){
    int num =12345;
    cout << " original "<< num<< endl;
    int rev =0;

    while(n>0){
        int d = num % 10 ;
        rev = rev * 10 + d;
        num /= 10;
    }
    cout << rev<< endl;
    return 0;
}
