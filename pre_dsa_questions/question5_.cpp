#include <iostream>
using namespace std;


int main(){
    int cel;
    cout<< "Enter the Celsius: ";
    cin>> cel;
    double x = (cel*1.8)+32.0;

    cout<<"Fahrenheit: "<< x<<endl;
    return 0; 

}