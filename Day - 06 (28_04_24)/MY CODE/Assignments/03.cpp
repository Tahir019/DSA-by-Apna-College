/*
Q3. Print the Palindromic Pattern with Numbers
for n = 5

    1
   212
  32123
 4321234
543212345    
*/

#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 1; i <= n; i++){
        // Print leading spaces
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        
        // Print decreasing numbers
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        
        // Print increasing numbers
        for(int j = 2; j <= i; j++){
            cout << j;
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
