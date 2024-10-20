
# Functions in C++: A Beginner-Friendly Guide for Interviews

## 📌 What is a Function?
A **function** is a reusable block of code designed to perform a specific task. Instead of writing the same code multiple times, we can simply call the function whenever needed.

In simple terms, a function:
- Takes input (parameters).
- Performs a computation.
- Returns an output.

---

## 🔧 Syntax:
```cpp
return_type function_name(parameters) {
    // code block
}
```
- **return_type**: The type of data the function returns (e.g., `int`, `void`).
- **function_name**: The name you give to the function.
- **parameters**: Values passed to the function to perform the task (optional).

---

## 📝 Example:
```cpp
#include <iostream>
using namespace std;

int max(int x, int y) {    // Function to return the maximum of two numbers
    return (x > y) ? x : y;
}

int main() {
    int a = 10, b = 20;
    cout << "Max is " << max(a, b);  // Calling the function
    return 0;
}
```
**Output:**
```
Max is 20
```
- **Time Complexity**: O(1) (constant time)
- **Space Complexity**: O(1) (constant space)

---

## 🎯 Why Use Functions?
1. **Avoid Redundancy**: Reduces repetitive code by using a function to handle the same task multiple times.
2. **Modularity**: Breaks large code into smaller, manageable parts.
3. **Abstraction**: You don’t need to know how built-in functions work, just how to use them.

---

## 🆚 Function Declaration vs. Definition
- **Declaration**: Tells the compiler about the function (its return type, name, and parameters). 
  Example:
  ```cpp
  int max(int, int);
  ```
- **Definition**: Actual implementation of the function.
  Example:
  ```cpp
  int max(int x, int y) {
      return (x > y) ? x : y;
  }
  ```

---

## 💡 Example of Different Function Declarations:
1. **Function returning an integer**:
   ```cpp
   int max(int, int);  // Returns max of two integers
   ```

2. **Function returning a pointer**:
   ```cpp
   int* swap(int*, int);  // Swaps two integers using pointers
   ```

3. **Function returning a reference**:
   ```cpp
   char* call(char b);  // Returns a pointer to a character
   ```

4. **Function with mixed parameters**:
   ```cpp
   int fun(char, int);  // Takes a char and int, returns an integer
   ```

---

## 🔑 Summary:
- **Functions** help in writing clean, maintainable, and reusable code.
- **Function declaration** tells the compiler about a function's existence, while **function definition** provides its implementation.
- Common interview questions revolve around writing basic functions, understanding their declaration, and optimizing them for performance.

This guide provides you with essential knowledge to approach **C++ functions** confidently in interviews.
