# Piscine-CPP

## C++ Fundamentals

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes.”

### 🔄 Difference between C and C++

C++ was developed as an extension of [C](https://www.w3schools.com/c/index.php), and both languages have almost the same syntax.

The main difference between C and C++ is that C++ supports classes and objects, while C does not.

### 🖋 Syntax

**Line 1:** `#include <iostream>` is a header file library that lets us work with input and output objects, such as `cout` (used in line 5). Header files add functionality to C++ programs.

**Line 2:** `using namespace std` means that we can use names for objects and variables from the standard library.

### ⚙ Scope Resolution Operator in C++

In C++, the scope resolution operator is `::`. It is used to access global variables with local variables of the same name and to define a function outside a class.

### 🌐 Difference between Namespace and Library

A namespace is used to differentiate similar functions, variables, etc., with the same name in different libraries. The `iostream` library, for example, is part of the `std` namespace.

### 📚 C++ std Identifiers

All standard library identifiers provided by header files like `<iostream>`, `<string>`, `<vector>`, etc., are declared in the `std` namespace.

### ➖ Line Continuation

Outside of quoted strings, a backslash `\` is used as a line continuation character.

### 📥 Input

`cin` is a predefined variable that reads data from the keyboard with the extraction operator (`>>`).

### 📤 Output

`cout` is used for output. When using `using namespace std`, you can omit the `std::` prefix.

### 🛑 Constant Function vs. Function with const

`const bool isReady()` returns a constant bool, while `bool getReady() const` is a constant function that does not modify class variables.

### 🌐 Global Variable

A variable defined outside all functions is a global variable, accessible and changeable throughout the program.

### ⚡ Static Variables vs. Non-Static

Static variables have a lifetime equal to the program's duration, while non-static variables exist until the end of the block.

### 🚫 NULL vs. nullptr

`NULL` is typically defined as `(void *)0`, allowing conversion to integral types. `nullptr` is a keyword that is not implicitly convertible or comparable to integral types.

## 🚀 Inline Function in C++

Inline functions are replaced at compile time, saving execution time. Use the `inline` keyword:

```cpp
inline return_type function_name(parameters) {
    // function code
}
```
# 📄 .HPP Files
`.hpp` files are C++ Header Files, inserted into `.cpp` files using the `#include` directive.

## ⚙ Compile Time
Ensure correct compilation using appropriate tools. Understand the difference between compilation and execution.

Feel free to explore and modify the content to match your learning experience.

```cpp
// Example: Compile and run a C++ program
$ g++ -o main main.cpp
$ ./main
```

Inline functions are replaced at compile time, saving execution time. Use the `inline` keyword:

```cpp
inline return_type function_name(parameters) {
    // function code
}
```

If you want more informations, send your email Notion to my Email:

📧 oussamadakhch1999@gmail.com
