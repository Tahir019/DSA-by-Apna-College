//Q. WAF to print if a number is odd or even.

#include<iostream>
using namespace std;

void checkOddOrEven(int a){
    if(a % 2 == 0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}

int main(){
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    checkOddOrEven(number);

    return 0;
}
