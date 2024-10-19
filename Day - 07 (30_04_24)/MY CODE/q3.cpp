// Question 3 : Write a function which takes 2 numbers as parameters (a & b) and
// outputs : a^2 + b^2 + 2*ab.

#include<iostream>
using namespace std;

int squareFormula(int a, int b){
    return a*a + b*b + 2*a*b;
}

int main(){
    cout<<squareFormula(3,4);
    return 0;
}