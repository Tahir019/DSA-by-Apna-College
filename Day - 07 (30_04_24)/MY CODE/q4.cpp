// Question 4 : Write a function that prints the largest of 3 numbers.

#include<iostream>
using namespace std;

// Function to find the largest of three numbers
void findLargest(int a, int b, int c) {
    if (a >= b && a >= c) {
        cout << "The largest number is: " << a << endl;
    } 
    else if (b >= a && b >= c) {
        cout << "The largest number is: " << b << endl;
    } 
    else {
        cout << "The largest number is: " << c << endl;
    }
}

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Call the function to print the largest number
    findLargest(num1, num2, num3);

    return 0;
}
