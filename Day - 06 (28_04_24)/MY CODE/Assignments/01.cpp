/*
Q1. Print the 0-1 Triangle Pattern
for n = 5
1
01
101
0101
10101
*/

#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            if( (i+j) % 2 == 0){
                cout<< "1";
            }else{
                cout<< "0";
            }
        }

        cout<<endl;
    }
    return 0;
}