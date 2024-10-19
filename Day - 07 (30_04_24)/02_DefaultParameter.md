
# Function Syntax with Parameters in C++

## 📌 Syntax with Parameters
Functions in C++ can accept values (called **parameters**) when they are called. These parameters allow us to pass data to the function, enabling it to perform tasks based on the inputs.

### 🔧 General Syntax:
```cpp
return_type function_name(parameter_type parameter_name) {
    // code block
}
```
- **return_type**: The type of data the function returns (e.g., `int`, `void`).
- **function_name**: The name of the function.
- **parameter_type**: The data type of the parameter (e.g., `int`, `float`).
- **parameter_name**: The name of the variable that will hold the argument passed to the function.

### 📝 Example:
```cpp
#include <iostream>
using namespace std;

int add(int x, int y) {  // Function with two parameters
    return x + y;
}

int main() {
    int result = add(10, 5);  // Calling the function with arguments
    cout << "The sum is " << result;
    return 0;
}
```
**Output:**
```
The sum is 15
```
In this example, the function `add()` takes two parameters `x` and `y`, and returns their sum.

---

## 🎯 Default Parameters
In C++, we can assign **default values** to function parameters. These default values are used if no arguments are provided when the function is called.

### 🔧 Syntax with Default Parameters:
```cpp
return_type function_name(parameter_type parameter_name = default_value) {
    // code block
}
```
- **default_value**: A value provided in the function declaration, used if no argument is passed for that parameter.

### 📝 Example:
```cpp
#include <iostream>
using namespace std;

void greet(string name = "Guest") {  // Default parameter 'Guest' for name
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();              // Calls greet() with default argument
    greet("Tahir");       // Calls greet() with a provided argument
    return 0;
}
```
**Output:**
```
Hello, Guest!
Hello, Tahir!
```
Here, if no value is passed to the `greet()` function, it defaults to "Guest". When an argument is passed, the default is overridden.

---

## 🛑 Important Rule: Default Parameter Restrictions
You **cannot** provide a default value for the **first parameter** if a subsequent parameter does not have a default value. This ensures that when the function is called, the compiler can correctly match the arguments to the parameters.

### 🔧 Invalid Example:
```cpp
void example(int x = 5, int y) {  // This is invalid!
    // code block
}
```
In this case, you must either provide a default value for `y` as well or move the default parameter to the end.

### ✔ Correct Example:
```cpp
void example(int x, int y = 10) {  // Default parameter for the second argument
    // code block
}
```

---

## 🔑 Summary:
- Functions can accept **parameters** to make them more flexible and reusable.
- **Default parameters** allow you to call functions without providing all arguments, as default values will be used.
- **Default parameter restrictions**: You can't assign a default value to the first parameter if the subsequent ones don't have default values.
