// factorial 
//  5! = 5x4x3x2x1

#include <iostream>
using namespace std;


int main(){
int n ;
cout << "Enter the Number: ";
cin >> n;
int ans = 1;
while(n>0){
    ans =ans*n;
    n--;
}
cout<<ans<<endl;
return 0;
}