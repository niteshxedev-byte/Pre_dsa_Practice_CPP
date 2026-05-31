#include<iostream>
using namespace std;

void print_pattern_1(int c){
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print_pattern_2(int c){
    for(int i =0 ;i<c;i++){
        for(int j =0 ; j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print_pattern_3(int c){
    cout<<c<<endl;
    for(int i=0 ;i<c;i++){
        for(int j = 5;j>i;j--){
          cout<<"*";
        }
        cout<<endl;
    }
}



void print_pattern_4(int c){
    for(int i=0;i<c;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}


void print_pattern_5(int c){
  for(int i =0 ;i<c;i++){
      for(int j=0;j<i+1;j++){
          cout<<i+1;
      }
      cout<<endl;
  }
}


int main(){
    print_pattern_1(5);
    print_pattern_2(5);
    print_pattern_3(5);
    print_pattern_4(5);
       print_pattern_5(5);
    return 0;




    
}
