#include <iostream>
using namespace std;


int main(){
    int num; 
    cout << "Enter the Number: ";
    cin>>num;
    int ans;

    while(num >0){
         num /= 10; // remove the element 
         ans++;

    }
    cout<<ans<<endl;
    return 0;
}