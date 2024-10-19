// Question 5 : Write a function that accepts a character (ch) as parameters & returns
// the character that occurs after ch in the English alphabet.
// Eg : input = ‘c’, return value = ‘d’
// Note : for ch = ‘z’, return ‘a’.

#include<iostream>
using namespace std;

// Function to return the next character in the alphabet
char nextCharacter(char ch) {
    // If character is 'z', wrap around to 'a'
    if (ch == 'z') {
        return 'a';
    }
    // If character is 'Z', wrap around to 'A'
    else if (ch == 'Z') {
        return 'A';
    }
    // For other characters, return the next character
    else {
        return ch + 1;
    }
}

int main() {
    char input;
    cout << "Enter a character: ";
    cin >> input;

    // Call the function and print the result
    char result = nextCharacter(input);
    cout << "The next character is: " << result << endl;

    return 0;
}



/*

In C++, characters are internally represented as integers using the **ASCII** (American Standard Code for Information Interchange) system. Each character has a unique ASCII value (e.g., `'a'` is 97, `'b'` is 98, and so on). So when you add `1` to a character, you're essentially incrementing its ASCII value.



### ASCII Example:

- `'a'` in ASCII is **97**.
- `'b'` in ASCII is **98**.

So, when you do `ch + 1`, you're increasing the ASCII value of the character by 1.

### Example in Code:

If you have:

```cpp
char ch = 'a';   // ASCII value of 'a' is 97
ch = ch + 1;     // 'a' becomes 'b' (ASCII value 98)
```

The character `'a'` is represented as the integer `97` in memory. When you add `1`, it becomes `98`, which corresponds to `'b'`.

### Why This Works:
C++ allows you to add an integer to a character directly because characters are treated as small integers (according to their ASCII values). Therefore, `ch + 1` increments the ASCII value of the character, and C++ automatically converts this back to the corresponding character when you print it or assign it back to a `char` variable.

### In Your Function:
```cpp
return ch + 1;  // increments the ASCII value of ch by 1, giving the next character.
```

This makes the character `'a'` (97) turn into `'b'` (98) by incrementing the integer value by 1.
*/