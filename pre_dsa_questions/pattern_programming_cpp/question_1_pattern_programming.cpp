// Star Triangle
// *
// **
// ***
// ****
// nested for loop lagegi

#include <iostream>
using namespace std;

int main(){
    int n; cout << "Enter the number:";
    cin>>n;

    // main logic
    for(int i = 1 ;i<=n;i++){
        for(int j =1 ;j<=i;j++){
            cout<<"*";
        }
cout<<" "<<endl;
    }
    return 0;
}