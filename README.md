# C++ || Rapid Fire Notes

## Table of Contents
1. [Overview of C++](#overview-of-c)
2. [Basics of C++](#basics-of-c)
3. [Variables and Constants in C++](#variables-and-constants-in-c)
4. [Data Types and Literals in C++](#data-types-and-literals-in-c)
5. [Operators in C++](#operators-in-c)
6. [Input/Output in C++](#inputoutput-in-c)
7. [Control Statements in C++](#control-statements-in-c)
8. [Functions in C++](#functions-in-c)
9. [Pointers and References in C++](#pointers-and-references-in-c)
10. [Arrays in C++](#arrays-in-c)
11. [Strings in C++](#strings-in-c)
12. [Structures and Union in C++](#structures-and-union-in-c)
13. [Dynamic Memory Management in C++](#dynamic-memory-management-in-c)
14. [Object-Oriented Programming in C++](#object-oriented-programming-in-c)
15. [Encapsulation and Abstraction in C++](#encapsulation-and-abstraction-in-c)
16. [Polymorphism in C++](#polymorphism-in-c)
17. [Function Overloading in C++](#function-overloading-in-c)
18. [Operator Overloading in C++](#operator-overloading-in-c)
19. [Inheritance in C++](#inheritance-in-c)
20. [Virtual Functions in C++](#virtual-functions-in-c)
21. [Exception Handling in C++](#exception-handling-in-c)
22. [Files and Streams in C++](#files-and-streams-in-c)
23. [Templates in C++](#templates-in-c)
24. [STL in C++](#stl-in-c)
25. [Iterators in C++](#iterators-in-c)
26. [Preprocessors in C++](#preprocessors-in-c)
27. [Namespace in C++](#namespace-in-c)
28. [Advanced C++](#advanced-c)
29. [C vs C++](#c-vs-c)
30. [C++ vs Java](#c-vs-java)
31. [Competitive Programming in C++](#competitive-programming-in-c)
32. [Interview Questions in C++](#interview-questions-in-c)

## Overview of C++
### Introduction to C++
C++ is a high-level, compiled programming language that supports object-oriented, procedural, and generic programming. Developed by Bjarne Stroustrup in 1979, it is an extension of the C programming language.

### Features of C++
- Object-oriented: Supports encapsulation, inheritance, and polymorphism.
- Strongly typed: Enforces type safety.
- Memory management: Provides direct control over memory allocation.
- Standard Template Library (STL): Offers a rich set of templates for data structures and algorithms.

### Interesting Facts about C++
- C++ is used in system/software development, game development, and high-performance applications.
- It allows programmers to define new data types.

### Setting up C++ Development Environment
To set up a C++ development environment:
1. Install a C++ compiler (e.g., GCC, Clang, or Microsoft Visual C++).
2. Choose an IDE (e.g., Visual Studio, Code::Blocks, or Eclipse).
3. Write your C++ code and compile it using the chosen IDE or command line.

### Similarities and Differences between C++ and C
- **Similarities**: Syntax, data types, and control structures.
- **Differences**: C++ supports classes and objects, while C is procedural.

## Basics of C++
### First C++ Program
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

### C++ Basic Syntax
C++ syntax is case-sensitive and requires semicolons to end statements.

### C++ Comments
- Single-line: `// This is a comment`
- Multi-line: `/* This is a comment */`

### C++ Tokens
Tokens are the smallest individual units in a C++ program, including keywords, identifiers, literals, and operators.

### C++ Identifiers
Identifiers are names given to entities in C++. They must begin with a letter or underscore, followed by letters, digits, or underscores.

### C++ Keywords
Keywords are reserved words in C++ with special meaning (e.g., `int`, `return`, `if`, `else`).

### Difference between Keyword and Identifier
- **Keyword**: Predefined words with special meanings.
- **Identifier**: User-defined names for variables, functions, etc.

## Variables and Constants in C++
### C++ Variables
A variable is a named storage location that can hold a value. 
Example:
```cpp
int age = 25;
```

### C++ Constants
Constants are fixed values that do not change during program execution.
Example:
```cpp
const int MAX_AGE = 100;
```

### Scope of C++ Variables
Scope refers to the visibility of a variable. Local variables are accessible within a function, while global variables are accessible throughout the program.

### C++ Storage Classes
Storage classes define the lifetime and visibility of variables:
- Automatic: Local to the block.
- Static: Retains value between function calls.
- Register: Stored in CPU registers for fast access.
- External: Global variables accessible across files.

### C++ Static Variables
Static variables retain their value even after the function ends.
```cpp
void myFunction() {
    static int count = 0;
    count++;
    cout << count << endl;
}
```

## Data Types and Literals in C++
### C++ Data Types
C++ has several built-in data types:
- **Basic Types**: `int`, `char`, `float`, `double`
- **Derived Types**: Arrays, functions, pointers
- **User-Defined Types**: Structures, classes, unions

### C++ Literals
Literals are fixed values in the code, such as `5`, `'a'`, `3.14`, or `"Hello"`.

### C++ Derived Data Types
Derived types are formed from basic types:
- Arrays
- Pointers
- Functions

### C++ User-Defined Data Types
Users can define their own types using structures, unions, and classes.

### C++ Data Type Ranges and Their Macros
```cpp
#include <limits>
cout << "Range of int: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
```

### C++ Type Modifiers
Modifiers change the properties of basic data types:
- `signed`
- `unsigned`
- `long`
- `short`

### C++ Data Type Conversion
Implicit and explicit conversions between data types are possible.
```cpp
double d = 3.14;
int i = (int)d; // Explicit conversion
```

### C++ Typecasting Operators
C++ provides several typecasting operators:
- `static_cast`
- `dynamic_cast`
- `const_cast`
- `reinterpret_cast`

## Operators in C++
### C++ Operators
Operators perform operations on variables and values.

### C++ Arithmetic Operators
- `+`, `-`, `*`, `/`, `%`

### C++ Unary Operators
- `++`, `--`, `+`, `-`

### C++ Bitwise Operators
- `&`, `|`, `^`, `~`, `<<`, `>>`

### C++ Relational Operators
- `==`, `!=`, `<`, `>`, `<=`, `>=`

### C++ Logical Operators
- `&&`, `||`, `!`

### C++ Assignment Operators
- `=`, `+=`, `-=`, `*=`, `/=`, `%=`

### C++ Ternary/Conditional Operators
- `condition ? expr1 : expr2`

### C++ Sizeof Operator
Returns the size of a variable or data type in bytes.
```cpp
cout << sizeof(int) << endl; // Outputs size of int
```

### C++ Scope Resolution Operator
Used to define the context in which an identifier is defined.
```cpp
int x = 10;
int main() {
    int x = 20;
    cout << ::x; // Outputs 10
}
```

## Input/Output in C++
### C++ Basic Input/Output
Using `cin` and `cout` for input and output.

### C++ Standard Input Stream (cin)
Used to read input from the user.
```cpp
int age;
cin >> age;
```

### C++ Standard Output Stream (cout)
Used to display output to the console.
```cpp
cout << "Your age is: " << age << endl;
```

### C++ Standard Error Stream (cerr)
Used for error output.
```cpp
cerr << "Error: Invalid input!" << endl;
```

### C++ Input/Output Manipulator
Used to format input and output, such as `std::endl`, `std::fixed`, and `std::setprecision`.

## Control Statements in C++
### C++ Decision Making
Control the flow of execution based on conditions.

### C++ if Statement
```cpp
if (condition) {
    // code
}
```

### C++ if-else Statement
```cpp
if (condition

) {
    // code
} else {
    // code
}
```

### C++ Nested if Statement
```cpp
if (condition1) {
    if (condition2) {
        // code
    }
}
```

### C++ switch Statement
```cpp
switch (expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
```

### C++ Loops
Loops execute a block of code repeatedly.

### C++ for Loop
```cpp
for (int i = 0; i < 10; i++) {
    // code
}
```

### C++ while Loop
```cpp
while (condition) {
    // code
}
```

### C++ do-while Loop
```cpp
do {
    // code
} while (condition);
```

### C++ break and continue Statements
- `break` exits the loop.
- `continue` skips the current iteration.

## Functions in C++
### C++ Functions
A function is a block of code that performs a specific task.
```cpp
int add(int a, int b) {
    return a + b;
}
```

### C++ Function Declaration
Function declaration specifies the function's name and parameters.
```cpp
int add(int, int);
```

### C++ Function Definition
Function definition includes the actual implementation.
```cpp
int add(int a, int b) {
    return a + b;
}
```

### C++ Function Call
A function call executes the function.
```cpp
int result = add(5, 10);
```

### C++ Function Overloading
Multiple functions can have the same name with different parameters.
```cpp
int add(int a, int b);
double add(double a, double b);
```

### C++ Default Arguments
Default values can be assigned to parameters.
```cpp
int add(int a, int b = 10);
```

### C++ Inline Functions
Inline functions reduce the function call overhead.
```cpp
inline int square(int x) {
    return x * x;
}
```

### C++ Recursive Functions
A function that calls itself.
```cpp
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
```

### C++ Function Templates
Templates allow functions to operate with generic types.
```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}
```

## Pointers and References in C++
### C++ Pointers
A pointer is a variable that holds the address of another variable.
```cpp
int a = 5;
int* ptr = &a; // Pointer to a
```

### C++ Pointer Arithmetic
Pointers can be incremented or decremented.
```cpp
ptr++;
```

### C++ References
A reference is an alias for another variable.
```cpp
int& ref = a;
```

### C++ Dynamic Memory Allocation
Using `new` and `delete` for dynamic memory.
```cpp
int* arr = new int[5]; // Allocate memory
delete[] arr; // Free memory
```

### C++ Array of Pointers
An array can hold pointers to other variables.
```cpp
int* arr[5];
```

## Arrays in C++
### C++ Arrays
An array is a collection of elements of the same type.
```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

### C++ Multidimensional Arrays
Arrays with more than one dimension.
```cpp
int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
```

### C++ Array of Structures
An array can hold structures.
```cpp
struct Student {
    int roll_no;
    char name[50];
};

Student students[10];
```

## Strings in C++
### C++ Strings
Strings are arrays of characters terminated by a null character.
```cpp
char str[20] = "Hello";
```

### C++ String Functions
Common functions include `strlen()`, `strcpy()`, and `strcmp()`.

### C++ C++ Standard Library String Class
Using `std::string` for easier string manipulation.
```cpp
#include <string>
std::string name = "John";
```

## Structures and Union in C++
### C++ Structures
A structure groups different data types.
```cpp
struct Point {
    int x;
    int y;
};
```

### C++ Unions
A union allows storing different data types in the same memory location.
```cpp
union Data {
    int i;
    float f;
    char c;
};
```

## Dynamic Memory Management in C++
### C++ Dynamic Memory Allocation
Dynamic memory is allocated using `new`.
```cpp
int* ptr = new int;
```

### C++ Dynamic Memory Deallocation
Deallocate memory using `delete`.
```cpp
delete ptr;
```

## Object-Oriented Programming in C++
### C++ Classes and Objects
A class is a blueprint for creating objects.
```cpp
class Car {
public:
    void drive() {
        // code
    }
};
```

### C++ Access Modifiers
Control access to class members: `public`, `protected`, and `private`.

### C++ Constructors and Destructors
- **Constructor**: Initializes objects.
```cpp
Car() {
    // code
}
```
- **Destructor**: Cleans up resources.
```cpp
~Car() {
    // code
}
```

### C++ Static Members
Static members are shared across all instances of a class.
```cpp
static int count;
```

### C++ Friend Function
A friend function can access private members of a class.
```cpp
friend void display(Car);
```

## Encapsulation and Abstraction in C++
### C++ Encapsulation
Encapsulation restricts access to certain components.
### C++ Abstraction
Abstraction simplifies complex reality by modeling classes based on the essential properties.

## Polymorphism in C++
### C++ Polymorphism
Polymorphism allows methods to do different things based on the object type.

### C++ Function Overriding
A derived class can provide a specific implementation of a base class method.
```cpp
class Base {
public:
    virtual void show() {
        // code
    }
};
```

### C++ Virtual Functions
Virtual functions enable dynamic binding.
```cpp
class Base {
public:
    virtual void display() {
        // code
    }
};
```

### C++ Pure Virtual Functions
Declare a function as pure virtual to make a class abstract.
```cpp
virtual void show() = 0;
```

## Function Overloading in C++
### C++ Function Overloading
Multiple functions can share the same name with different parameters.
```cpp
int add(int a, int b);
double add(double a, double b);
```

## Operator Overloading in C++
### C++ Operator Overloading
Operators can be redefined for user-defined types.
```cpp
class Complex {
public:
    int real, imag;
    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
};
```

## Inheritance in C++
### C++ Inheritance
Inheritance allows a class to inherit properties and behavior from another class.
```cpp
class Base {
    // code
};

class Derived : public Base {
    // code
};
```

### C++ Types of Inheritance
- Single Inheritance
- Multiple Inheritance
- Multilevel Inheritance
- Hierarchical Inheritance
- Hybrid Inheritance

## Virtual Functions in C++
### C++ Virtual Functions
Virtual functions allow for dynamic binding and polymorphism.
```cpp
class Base {
public:
    virtual void display() {
        // code
    }
};
```

## Exception Handling in C++
### C++ Exception Handling
Used to handle runtime errors using `try`, `catch`, and `throw`.
```cpp
try {
    // code
} catch (exception& e) {
    // handle exception
}
```

## Files and Streams in C++
### C++ File Handling
Files can be opened, read, written, and closed.
```cpp
#include <fstream>
ofstream myfile("example.txt");
myfile << "Hello, World!";
myfile.close();
```

### C++ Stream Classes
Common classes include `ifstream`, `ofstream`, and `fstream`.

## Templates in C++
### C++ Templates
Templates allow writing generic and reusable code.
```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}
```

## STL in C++
### C++ Standard Template Library (STL)
STL provides data structures and algorithms for efficient programming.

### Components of STL
- Containers (e.g., `vector`, `list`, `map`)
- Algorithms (e.g., `sort`, `search`)
- Iterators (e.g., `begin()`, `end()`)

## Iterators in C++
### C++ Iterators
Iterators are used to traverse containers.
```cpp
std::vector<int> vec = {1, 2, 3, 4, 5};
for (auto it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << " ";
}
```

## Preprocessors in C++
### C++ Preprocessor Directives
Directives like `#include`, `#define`, and `#ifdef` are processed before compilation.

## Namespace in C++
### C++ Namespace
Namespaces prevent naming conflicts.
```

cpp
namespace MyNamespace {
    int myVar;
}
```

## Conclusion
This concise C++ programming notes cover fundamental concepts such as control structures, functions, OOP principles, and STL components, providing a solid foundation for further study and practice.
