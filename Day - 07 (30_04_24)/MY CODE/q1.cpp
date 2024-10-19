// Question 1 : Write a function to check if a number is a palindrome in C++.
// (121 is a palindrome, 321 is not)

// A number is called a palindrome if the number is equal to the reverse of a number.
// Eg : 121 is a palindrome because the reverse of 121 is 121 itself. On the other hand, 321
// is not a palindrome because the reverse of 321 is 123, which is not equal to 321.

#include<iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    int original = n;     // Save the original number to compare later
    int reversed = 0;     // This will store the reversed number

    // Reverse the number
    while (n > 0) {
        int lastDigit = n % 10;          // Get the last digit of the number
        reversed = reversed * 10 + lastDigit;  // Build the reversed number
        n = n / 10;                      // Remove the last digit from the number
    }

    // Check if the reversed number is the same as the original
    return original == reversed;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Call the function to check if it's a palindrome
    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
