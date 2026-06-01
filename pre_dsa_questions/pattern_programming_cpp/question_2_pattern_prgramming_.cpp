// question_2_pattern_prgramming_.cpp
// *
// **
// ***
// ****
// *****


// question_2_pattern_prgramming_.cpp
// *
// **
// ***
// ****
// *****

#include<iostream>
using namespace std;


void print_pattern_2(int c){
    for(int i=0;i<c;i++){
     
    
    for(int j = 0 ; j<i+1;j++){
      cout<<"*";

    
    }
    cout<<endl;
}
}

int main(){
    int num = 5;
    print_pattern_2(num);
    return 0;

}