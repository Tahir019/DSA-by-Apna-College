// Question 2 : Write a function to calculate the sum of digits of a number.

#include<iostream>
using namespace std;



int sum(int num){
    int sum = 0;
    while(num>0){
        int lastDigit = num % 10;
        sum += lastDigit;
        num = num / 10;
    }
    return sum;
}

int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    cout<<sum(num);

    return 0;
}