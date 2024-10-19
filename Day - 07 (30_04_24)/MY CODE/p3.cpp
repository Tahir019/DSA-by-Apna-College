//Q. WAF to print the factorial of a number, n.

#include<iostream>
using namespace std;

int n;

int factorial(){
    
    int f=1;

    for(int i=1; i<=n; i++){
        f=f*i;
    }

    return f;
}

int main(){

    cout<<"Enter any No. : ";
    cin>>n;
    int result =factorial();
    cout<<result;
    return 0;
    
}