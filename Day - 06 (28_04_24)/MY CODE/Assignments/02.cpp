/*
Q2. Print the Rhombus Pattern.
for n = 5
     *****
    *****
   *****
  *****
 *****    
*/

#include<iostream>
using namespace std;

int main(){
    int n = 5; 

    for(int i=1; i<=5; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}