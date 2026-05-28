#include <iostream>
using namespace std;


int main(){
    int yr ;
    cout <<"Enter the year: ";
    cin >> yr;

    if(yr%400==0){
        cout<<"leap"<<endl;
    
    }
    else if(yr%100==0){
         cout<<" not leap"<<endl;
    }
    else if(yr%4==0){
           cout<<"leap"<<endl;
    }else{
         cout<<" not leap"<<endl;
    }

    return 0; 
}