#include <iostream>
using namespace std;


int main(){
    char ch ;
    cout<<"Enter the Alphabet: ";
    cin>>ch;


    char ch_upper = toupper(ch);

    if((ch_upper >= 'A'&& ch_upper<='Z')){
       if(ch_upper == 'A'||ch_upper == 'E'||ch_upper == 'I'||ch_upper == 'O'||ch_upper == 'U'){
        cout<<"The alphabet "<< ch <<" vowel"<< endl;
       }
       else{
            cout<<"The alphabet "<< ch <<"is consonent"<< endl;
     
       }

    
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}
