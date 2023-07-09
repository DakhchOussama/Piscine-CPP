# Piscine-CPP
# C++

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes”

**Difference between C and C++**

C++ was developed as an extension of [C](https://www.w3schools.com/c/index.php), and both languages have almost the same syntax.

The main difference between C and C++ is that C++ support classes and objects, while C does not.

**Syntax :** 

**Line 1:**`#include <iostream>`is a **header file library** that lets us work with input and output objects, such as `cout`(used in line 5). Header files add functionality to C++ programs.

**Line 2:**`using namespace std`means that we can use names for objects and variables from the standard library.

You might see some C++ programs that runs without the standard namespace library. The `using namespace std`line can be omitted and replaced with the `std`keyword, followed by the `::`operator for some objects (`string`and `cout`)

"std" a namespace. The "::" operator is the "scope" operator. It tells the compiler which class/namespace to look in for an identifier. So std::cout tells the compiler that you want the "cout" identifier, and that t is in the "std" namespace. If you just said cout then it will only look in the global namespace. Since cout isn't defined in the global namespace, it won't be able to find it, and it will give you an error. usingnamespace std tell the compiler "take everything that's in the std namespace and dump it in the global namespace". This allows you to use cout without the std:: prefix, but it increases the probability for name conflicts, since a bunch of extra names that you didn't expect also got added to the global namespace, and that might butt heads with some of your own names.

**Scope resolution operator in C++ :**

In C++, scope resolution operator is **::**. It is used for following purposes

**1) To access a global variable when there is a local variable with same name**

**2) To define a function outside a class.**

### Difference between namespace and library :

Consider this ,There are two students in one classroom having same name for example ***Vishal***. now if we need to differentiate each of them , we would have to use some info along their name like their area of living , physical characteristics etc.same goes with namespaces in C++ , you might have a variable named for example ***value*** in your C++ program , and there maybe a library which contains a variable named ***value*** in it. now there is no way for the compiler to know which version of variable ***value*** is being called in the code. a **namespace** is designed to overcome this difficulty and is used as additional information to differentiate similar functions , variables etc. with the same name available in different libraries. Using namespace, you can define the context in which names are defined.

Basically, without going too deep into what namespaces are, iostream is part of the std namespace. This basically means that when you use iostream stuff (ie cout for example) you have to "quantify" what namespace that stuff yoh are using is part of. To be more clear, when you just include iostream without declaring a namespace, you have to prefix all iostream stuff with std:,for example

If I want to print hello world, I would write std:cout << "hello world";

If we write using namespace std, we can omit the std: part, since we are in the std namespace, thus meaning we could write

### C++ std Identifiers :

All the standard library identifiers provided by the standard header files like `<iostream>`, `<string>`, `<vector>`, etc. are declared in the `std` namespace.

For example, identifiers `cin` and `cout` are defined inside the standard header file `<iostream>` of the namespace `std`.

String have 24 byte in memory size 

## As A Line Continuation

Outside of a quotes string (see below), a `\` is used as a line continuation character. The newline that follows at the end of the line (not visible) is effectively ignored by the preprocessor and the following line is appended to the current line.

So:

```cpp
string s23_foo += \
s8_foo * s16_bar;

```

Is parsed as:

```
s23_foo += s8_foo * s16_bar;
```

Another way to insert a new line, is with the `endl`manipulator :

# **Input :**

When you do not want others (or yourself) to override existing variable values, use the `const`keyword (this will declare the variable as "constant", which means **unchangeable and read-only**)

# Global Variable

If a variable is defined outside all functions, then it is called a global variable.

The scope of a global variable is the whole program. This means, It can be used and changed at any part of the program after its declaration.

# Difference between const function() and function() const:

They mean two different things:

```cpp
const bool isReady() {
    return ready;
}

```

This returns a constant bool. Meaning a bool which cannot change value from the time it's been created. The code above will return a `const bool`, but it does not guarantee that the object will not change its logic state.

```cpp
bool getReady() const {
    return ready;
}

```

This is a a constant function, meaning a function that will not alter any member variables of the class it belongs to. This is the style recommended to use for getters, since their only purpose is to retrieve data and should not modify anything in the process.

# **Output :**

`cin`is a predefined variable that reads data from the keyboard with the extraction operator(`>>`).

**Basic Data Types :**

- A byte is a set of adjacent bits operated on as a group;
- The octet is a set of 8 bits.
- 1 byte = 8 bits

A garbage value occurs when you allocate a memory for your variable, but you don't assign a value to your variable. The memory of the variable may still have a value from the previous program. We called the value garbage value.

double float name; is wrong 

# Inline function in C++

If make a function as inline, then the compiler replaces the function calling location with the definition of the inline function at compile time.

Any changes made to an inline function will require the inline function to be recompiled again because the compiler would need to replace all the code with a new code; otherwise, it will execute the old functionality.

**Syntax for an inline function:**

```cpp
inline return_type function_name(parameters)
{
 // function code?
}
```

**Let's understand the difference between the normal function and the inline function.**

Inside the **main()** method, when the function fun1() is called, the control is transferred to the definition of the called function. The addresses from where the function is called and the definition of the function are different. This control transfer takes a lot of time and increases the overhead.

When the inline function is encountered, then the definition of the function is copied to it. In this case, there is no control transfer which saves a lot of time and also decreases the overhead.

# WHAT IS A .HPP FILE?

HPP files are C++ Header Files or header files that are written in the C++ programming language. These files are mainly categorized as developer files wherein there is a possibility to insert these files to a .CPP source code file, provided the “#include directive” is used

## static variables vs non-static :

A static variable is a variable that is declared using the keyword static. The space for the static variable is allocated only one time and this is used for the entirety of the program.

static variable initialize with 0 if u don’t enter value in it 

Once this variable is declared, it exists till the program executes. So, the lifetime of a static variable is the lifetime of the program.

regular variable it is Available till End of Block ({})

**Static variables in a Function**: When a variable is declared as static, space for **it gets allocated for the lifetime of the program**. Even if the function is called multiple times, space for the static variable is allocated only once and the value of variable in the previous call gets carried through the next function call. This is useful for implementing **[coroutines in C/C++](https://www.geeksforgeeks.org/coroutines-in-c-cpp/)**
 or any other application where previous state of function needs to be stored.

Once this variable is declared, it exists till the program executes. So, the lifetime of a static variable is the lifetime of the program.

```clike
#include <iostream>
using namespace std;
void func() {
   static int num = 1;
   cout <<"Value of num: "<< num <<"\n";
   num++;
}
int main() {
   func();
   func();
   func();
   return 0;
}
```

```clike
OutPut :
Value of num: 1
Value of num: 2
Value of num: 3
```

Now, let us understand the above program.

In the function func(), num is a static variable that is initialized only once. Then the value of num is displayed and num is incremented by one. The code snippet for this is given as follows

## NULL vs nullptr :

**NULL** is typically defined as (void *)0 and conversion of NULL to integral types is allowed. So the function call fun(NULL) becomes ambiguous.

In the above program, if we replace NULL with nullptr, we get the output as “fun(char *)”. 

**nullptr** is a keyword that can be used at all places where NULL is expected. Like NULL, nullptr is implicitly convertible and comparable to any pointer type.**Unlike NULL, it is not implicitly convertible or comparable to integral types**.

# Compile time vs Runtime

Compile-time and Runtime are the two programming terms used in the software development. Compile-time is the time at which the source code is converted into an executable code while the run time is the time at which the executable code is started running. Both the compile-time and runtime refer to different types of error.

### Compile-time errors

Compile-time errors are the errors that occurred when we write the wrong syntax. If we write the wrong syntax or semantics of any programming language, then the compile-time errors will be thrown by the compiler. The compiler will not allow to run the program until all the errors are removed from the program. When all the errors are removed from the program, then the compiler will generate the executable file.

The compile-time errors can be:

- Syntax errors
- Semantic errors

### **Syntax errors**

When the programmer does not follow the syntax of any programming language, then the compiler will throw the syntax error.

For example,

int a, b:

The above declaration generates the compile-time error as in C, every statement ends with the semicolon, but we put a colon (:) at the end of the statement.

### **Semantic errors**

The semantic errors exist when the statements are not meaningful to the compiler.

For example,

a+b=c;

### Runtime errors

The runtime errors are the errors that occur during the execution and after compilation. The examples of runtime errors are division by zero, etc. These errors are not easy to detect as the compiler does not point to these errors.

## difference between gcc and g++ :

GCC (GNU Compiler Collection) is a compiler system that supports various programming languages, including C, C++, Objective-C, Fortran, Ada, and others. On the other hand, g++ is a specific command that invokes GCC and instructs it to compile C++ code.

In other words, g++ is just a GCC command that has been configured for compiling C++ code. When you use g++, you are essentially telling GCC to use the C++ language mode and enable C++-specific features and options.

In terms of usage, both GCC and g++ are similar in that they are command-line tools that are used to compile and link source code into executable programs. However, the difference lies in the language mode that each tool operates in, with g++ specifically geared towards C++ code.

# **C++ Strings :**

A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the `append()`function:

To get the length of a string, use the `length()`function:

You might see some C++ programs that use the `size()`function to get the length of a string. This is just an alias of `length()`. It is completely up to you if you want to use `length()`or `size()`

**Change String Characters :**

However, `cin`considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words):

From the example above, you would expect the program to print "John Doe", but it only prints "John".That's why, when working with strings, we often use the

```
getline()
```

function to read a line of text. It takes **cin** as the first parameter, and the string variable as second

# **What is C++ Getline?**

The C++ getline() is an in-built [function](https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-functions) defined in the <string.h> header file that allows accepting and reading single and multiple line strings from the input stream. In [C++](https://www.simplilearn.com/what-is-cpp-programming-article), the cin object also allows input from the user, but not multi-word or multi-line input. That’s where the getline() function comes in handy.

# **Math :**

The `max(*x*,*y*)`function can be used to find the highest value of *x* and *y*: max(5,10)⇒ input : 10

And the `min(*x*,*y*)`function can be used to find the lowest value of *x* and *y*

Other functions, such as `sqrt`(square root), `round`(rounds a number) and `log`(natural logarithm), can be found in the `<cmath>`header file

roundf is used for float. round is used for doubles. round is used for long doubles.

**array :**

**Get the Size of an Array :**

To get the size of an array, you can use the `sizeof()`operator:

Why did the result show `20` instead of `5`, when the array contains 5 elements?

It is because the `sizeof()` operator returns the size of a type in **bytes**.

You learned from the [Data Types chapter](https://www.w3schools.com/cpp/cpp_data_types.asp) that an `int` type is usually 4 bytes, so from the example above, *4 x 5 (4 bytes x 5 elements) = **20 bytes***.

**To find out how many elements an array has**, you have to divide the size of the array by the size of the data type it contains:

Pointer in C is just a variable that could store the address of the other variable. In C size of a pointer is not fixed as it depends on Word size of the processor. In general a 32-bit computer machine then size of a pointer would be 4 bytes while for a 64-bit computer machine, it would be 8 bytes.

# Struct :

Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a **member** of the structure.

**One Structure in Multiple Variables :** 

## One Structure in Multiple Variables

You can use a comma (`,`) to use one structure in many variables:

```cpp
struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with comma
```

## Named Structures

By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.

To create a named structure, put the name of the structure right after the `struct` keyword:

**Reference :** 

A reference variable is an alias (an alternate name), that is, another name for an already existing variable. Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the variable.

A reference variable is a "reference" to an existing variable, and it is created with the `&`operator :

the `&` operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.

To access it, use the `&` operator, and the result will represent where the variable is stored:

**Modify the Pointer Value :**

****Pass by value and Pass by reference :****

Inside the function, the reference is used to access the actual argument used in the call. This means that changes made to the parameter affect the passed argument.

u don’t need `return` in reference 

**typedef in C++ :**

typedef keyword in C++ is used for aliasing existing data types, user-defined data types, and pointers to a more meaningful name. Typedefs allow you to give descriptive names to standard data types, which can also help you self-document your code.

**Syntax:** 

```cpp
typedef <current_name> <new_name>
```

```cpp
// C++ for using typedef with predefined data types
#include <iostream>
  
using namespace std;
  
int main()
{
    // ulli can now be used for making more
    // unsigned long long int type variables
    typedef unsigned long long int ulli;
    // ulli used to make variables
    ulli a{ 1232133 };
    cout << a;
    return 0;
}
OutPut :
	1232133
```

## **Function Pointer  :**

A function pointer is a variable that stores the address of a function that can later be called through that function pointer. This is useful because functions encapsulate behavior.

As we know that pointers are used to point some variables; similarly, the function pointer is a pointer used to point functions. It is basically used to store the address of a function. We can call the function by using the function pointer, or we can also pass the pointer to another function as a parameter.

### Syntax for Declaration

The following is the syntax for the declaration of a function pointer:

```jsx
**int** (*FuncPtr) (parametre function pointed);
```

The above syntax is the function declaration. As functions are not simple as variables, but C++ is a type safe, so function pointers have return type and parameter list. In the above syntax, we first supply the return type, and then the name of the pointer, i.e., FuncPtr which is surrounded by the brackets and preceded by the pointer symbol, i.e., (*). After this, we have supplied the parameter list (int,int). The above function pointer can point to any function which takes two integer parameters and returns integer type value.

In C++ , function pointers when dealing with member functions (Methode) of classes or structs, it is invoked using an object pointer or a this call. We can only call members of that class (or derivatives) using a pointer of that type as they are type safe.

There is absolutely no performance difference. The the only thing the `static`keyword does on functions is given them internal [linkage](http://publications.gbdirect.co.uk/c_book/chapter4/linkage.html), which means they are only accessible in the file they are defined in.

**Pre-increment and Post-increment in C/C++ :**

**1) Pre-increment operator**: A pre-increment operator is used to increment the value of a variable before using it in an expression. In the Pre-Increment, value is first incremented and then used inside the expression.

```
 a = ++x;
```

Here, if the value of ‘x’ is 10 then the value of ‘a’ will be 11 because the value of ‘x’ gets modified before using it in the expression.

```cpp

// CPP program to demonstrate pre increment
// operator
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    int x = 10, a;
 
    a = ++x;
    cout << "Pre Increment Operation";
 
    // Value of a will change
    cout << "\na = " << a;
 
    // Value of x change before execution of a=++x;
    cout << "\nx = " << x;
 
    return 0;
}
OutPut :

Pre Increment Operation
a = 11
x = 11
```

**2) Post-increment operator**: A post-increment operator is used to increment the value of the variable after executing the expression completely in which post-increment is used. In the Post-Increment, value is first used in an expression and then incremented.

**Syntax:**

```
 a = x++;
```

```cpp
// CPP program to demonstrate post increment
// operator
#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    int x = 10, a;
 
    a = x++;
 
    cout << "Post Increment Operation";
 
    // Value of a will not change
    cout << "\na = " << a;
 
    // Value of x change after execution of a=x++;
    cout << "\nx = " << x;
 
    return 0;
}
OutPut :
Post Increment Operation
a = 10
x = 11
```

# Classes & Object :

- The `class` keyword is used to create a class called `MyClass`.
- The `public` keyword is an **access specifier**, which specifies that members (attributes and methods) of the class are accessible from outside the class.

# Classe Methods :

Methods are **functions** that belongs to the class.

There are two ways to define functions that belongs to a class:

- Inside class definition
- Outside class definition

In the following example, we define a function inside the class, and we name it "`myMethod`".

**Note:** You access methods just like you access attributes; by creating an object of the class and using the dot syntax (`.`):

To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution `::`operator, followed by the name of the function:

You can also add parameters:

# **Constructors :**

A constructor in C++ is a **special method** that is automatically called when an object of a class is created.

Constructor is used to initialize the object of the class while destructor is called by the compiler when the object is destroyed.

While programming, sometimes there might be the need for the initialization of data members and member functions of the objects before performing any operations on them. Data members are the variables that are declared in any class by using any fundamental data types (like int, char, float, etc) or derived data types (like class, structure, pointer, etc). The functions which are defined inside the class definition are known as member functions.

Suppose you are developing a game. In that game, each time a new player registers, we need to assign their initial location, health, acceleration and certain other quantities to some default value.

This can be done by defining separate functions for each quantity which will assign the quantities to the required default values. For this, we need to call a list of functions every time a new player registers. Now, this process can become lengthy and complicated.

What if we can assign the quantities along with the declaration of the new player automatically? A constructor can help do this in a better and simpler way.

Moreover, when the player deletes his account, we need to deallocate the memory assigned to him. This can be done using a destructor.

To create a constructor, use the same name as the class, followed by parentheses `()`:

**Note:**The constructor has the same name as the class, it is always `public`, and it does not have any return value.

Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.

Just like functions, constructors can also be defined outside the class. First, declare the constructor inside the class, and then define it outside of the class by specifying the name of the class, followed by the scope resolution `::`operator, followed by the name of the constructor (which is the same as the class):

In C++, there are three access specifiers:

- `public` - members are accessible from outside the class
- `private` - members cannot be accessed (or viewed) from outside the class
- `protected` - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
    
    A public member can be accessed from outside the class, which for practical considerations means "potentially anywhere". If something goes wrong with a public field, the culprit can be anywhere, and so in order to track down the bug, you may have to look at quite a lot of code.
    
    A private member, by contrast, can only be accessed from inside the same class, so if something goes wrong with that, there is usually only one source file to look at. If you have a million lines of code in your project, but your classes are kept small, this can reduce your bug tracking effort by a factor of 1000.
    
    Another advantage is related to the concept of 'coupling'. A public member m of a class A that is used by another class B introduces a dependency: if you change m in A, you also have to check usages of m in B. Worse yet, nothing in class A tells you where m is being used, so again you have to search through the entire codebase; if it's a library you're writing, you even have to make sure code outside your project doesn't break because of your change.
    
    So, as to when you should make things private: I'd say make everything private by default, and then expose only those parts that absolutely have to be public. The more you can make private, the better.
    

**Note:** By default, all members of a class are `private`if you don't specify an access specifier:

## **Copy Constructor in C++ :**

A **copy constructor** is a member function that initializes an object using another object of the same class. A copy constructor has the following general function prototype:

```cpp
ClassName (const ClassName &old_obj);
```

- Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
- Copy constructor takes a reference to an object of the same class as an argument.
- The copy constructor can be defined explicitly by the programmer. If the programmer does not define the copy constructor, the compiler does it for us.

### When is a user-defined copy constructor needed?

If we don’t define our own copy constructor, the C++ compiler creates a default copy constructor for each class which does a member-wise copy between objects. The compiler-created copy constructor works fine in general. We need to define our own copy constructor only if an object has pointers or any runtime allocation of the resource like *file handle*, a network connection, etc.

The default ***constructor does only shallow copy.***

***Deep copy is possible only with a user-defined copy constructor.***
 In a user-defined copy constructor, we make sure that pointers (or references) of copied objects point to new memory locations.

**Copy assignment operators :**

The *copy assignment operator* lets you create a new object from an existing one by initialization. A copy assignment operator of a class A is a nonstatic non-template member function that has one of the following forms:

- A::operator=(A)
- A::operator=(A&)
- A::operator=(const A&)
- A::operator=(volatile A&)
- A::operator=(const volatile A&)

If you do not declare a copy assignment operator for a class A, the compiler will implicitly declare one for you that is inline public.

**Copy Constructor vs Assignment operator :**

The difference between the copy constructor and the assignment operator causes a lot of confusion for new programmers, but it’s really not all that difficult. Summarizing:

- If a new object has to be created before the copying can occur, the copy constructor is used.
- If a new object does not have to be created before the copying can occur, the assignment operator is used.

**Example for assignment operator:**

```cpp
Base obj1(5); //calls Base class constructor
Base obj2; //calls Base class default constructor
obj2 = obj1; //calls assignment operator

```

**Example for copy constructor:**

```cpp
Base obj1(5);
Base obj2 = obj1; //calls copy constructor
```

# Scope :

When you declare a program element such as a class, function, or variable, its name can only be "seen" and used in certain parts of your program. The context in which a name is visible is called its *scope*. For example, if you declare a variable `x`within a function, `x`is only visible within that function body. It has *local scope*. You may have other variables by the same name in your program; as long as they are in different scopes, they do not violate the One Definition Rule and no error is raised.

For automatic non-static variables, scope also determines when they are created and destroyed in program memory.

In general, the scope is defined as the extent up to which something can be worked with. In programming also the scope of a variable is defined as the extent of the program code within which the variable can be accessed or declared or worked with. There are mainly two types of variable scopes:

1. Local Variables
2. Global Variables

# ****Class Member Functions :****

A member function of a class is a function that has its definition or its prototype within the class definition like any other variable. It operates on any object of the class of which it is a member, and has access to all the members of a class for that object.

Let us take previously defined class to access the members of the class using a member function instead of directly accessing them −

```clike
class Box {
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box
      double getVolume(void);// Returns box volume
};
```

# Destractor :

A destructor is a member function that is invoked automatically when the object goes out of scope or is explicitly destroyed by a call to **`delete`**. A destructor has the same name as the class, preceded by a tilde (`~`). For example, the destructor for class `String`is declared: `~String()`.

Consider the following declaration of a `String` class:

```clike
// spec1_destructors.cpp
#include <string>class String {
public:
   String( char *ch );  // Declare constructor
   ~String();           //  and destructor.
private:
   char    *_text;
   size_t  sizeOfText;
};

// Define the constructor.
String::String( char *ch ) {
   sizeOfText = strlen( ch ) + 1;

   // Dynamically allocate the correct amount of memory.
   _text = new char[ sizeOfText ];

   // If the allocation succeeds, copy the initialization string.
   if( _text )
      strcpy_s( _text, sizeOfText, ch );
}

// Define the destructor.
String::~String() {
   // Deallocate the memory that was previously reserved
   //  for this string.
   delete[] _text;
}

int main() {
   String str("The piper in the glen...");
}
```

## What is Initialization ?

*Initialization* of a variable provides its initial value at the time of construction. The initial value may be provided in the initializer section of a [declarator](https://en.cppreference.com/w/cpp/language/declarations) or a [new expression](https://en.cppreference.com/w/cpp/language/new). It also takes place during function calls: function parameters and the function return values are also initialized.

Variables are the names given by the user. A datatype is also used to declare and initialize a variable which allocates memory to that variable. There are several datatypes like int, char, float etc. to allocate the memory to that variable.

There are two ways to initialize the variable. One is static initialization in which the variable is assigned a value in the program and another is dynamic initialization in which the variables is assigned a value at the run time.

The following is the syntax of variable initialization.

```
datatype variable_name = value;
```

Here,

**datatype** − The datatype of variable like int, char, float etc.

**variable_name** − This is the name of variable given by user.

**value** − Any value to initialize the variable. By default, it is zero.

# **Initializer List :**

The above code is just an example for syntax of the Initializer list. In the above code, x and y can also be easily initialed inside the constructor. But there are situations where initialization of data members inside constructor doesn’t work and Initializer List must be used. Following are such cases:

**1) For initialization of non-static const data members:**

const data members must be initialized using Initializer List. In the following example, “t” is a const data member of Test class and is initialized using Initializer List. Reason for initializing the const data member in the initializer list is because no memory is allocated separately for const data member, it is folded in the symbol table due to which we need to initialize it in the initializer list.

Also, it is a Parameterized constructor and we don’t need to call the assignment operator which means we are avoiding one extra operation.

```cpp
#include<iostream>
using namespace std;

class Base
{
  private:
  int value;
  public:
  // default constructor
  Base(int v):value(v)
  {
    cout << "Value is " << value;
  }
};

int main()
{
  Base myobject(10);
  return 0;
}
Output :
			Value is 10
```

**2) For initialization of reference members:**

Reference members must be initialized using Initializer List. In the following example, “t” is a reference member of Test class and is initialized using Initializer List.

A reference must be initialised to refer to something; it can't refer to nothing, so you can't default-construct a class that contains one (unless, as others suggest, you define a global "null" value).

**3) For initialization of member objects which do not have default constructor:**

In the following example, an object “a” of class “A” is data member of class “B”, and “A” doesn’t have default constructor. Initializer List must be used to initialize “a”

# **Encapsulation :**

Encapsulation is one of the key features of object-oriented programming. It involves the bundling of data members and functions inside a single class.

Bundling similar data members and functions inside a class together also helps in data hiding.

The meaning of **Encapsulation**, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as `private`(cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public **get** and **set** methods.

To access a private attribute, use public "get" and "set" methods:

The `salary` attribute is `private`, which have restricted access.

The public `setSalary()` method takes a parameter (`s`) and assigns it to the `salary` attribute (salary = s).

The public `getSalary()` method returns the value of the private `salary` attribute.

Inside `main()`, we create an object of the `Employee` class. Now we can use the `setSalary()` method to set the value of the private attribute to `50000`. Then we call the `getSalary()` method on the object to return the value.

# **Why Classes Need Getters and Setters**

The convention when designing a C++ class is to make the member variables private to control access to them. With data hiding, you can write code that checks the data coming into a class to make sure it is valid before assigning it to member variables.

For example, if a class is storing a person’s age, by marking the member variable as private you can provide access to the variable through a function that first checks to make sure the data being passed in is a valid age. If not, you can assign a default value or ask the user to enter the data in again.

Without this check, the data entered for an age can be any legal value allowed for that type by the compiler. So an age passed to an integer variable can be 34 or it can be 123,345 since those are both valid integer values. A data validating function can stop illegal values from entering the object and preserving the integrity of the data.

Our object-oriented programs can meet these data setting and data retrieval needs by providing getter and setter member functions as part of the class interface.

**Why Encapsulation?**

- It is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
- Increased security of data

# **Inheritance**

In C++, it is possible to inherit (**يرث**) attributes and methods from one class to another. We group the "inheritance concept" into two categories:

- **derived class** (child) - the class that inherits from another class
- **base class** (parent) - the class being inherited from

To inherit from a class, use the `:` symbol.

In the example below, the `Car` class (child) inherits the attributes and methods from the `Vehicle` class (parent):

### Why And When To Use "Inheritance"?

It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

## **Multilevel Inheritance :**

A class can also be derived from one class, which is already derived from another class.

In the following example, `MyGrandChild` is derived from class `MyChild` (which is derived from `MyClass`).


A class can also be derived from more than one base class, using a **comma-separated list:**

- `protected` : is similar to `private`, but it can also be accessed in the **inherited** class

# **Polymorphism :**

Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance. 

Polymorphism is an important concept of object-oriented programming. It simply means more than one form. That is, the same entity (function or operator) behaves differently in different scenarios (different behaviors ). For example,

The `+` operator in C++ is used to perform two specific functions. When it is used with numbers (integers and floating-point numbers), it performs addition.

```cpp
int a = 5;
int b = 6;
int sum = a + b;    // sum = 11
```

And when we use the `+` operator with strings, it performs string concatenation. For example,

```cpp
string firstName = "abc ";
string lastName = "xyz";

// name = "abc xyz"
string name = firstName + lastName;
```

We can implement polymorphism in C++ using the following ways:

1. Function overloading : When there are multiple functions with the same name but different parameters, then the functions are said to be **overloaded,** hence this is known as Function Overloading
2. operator overloading : we can make operators work for user-defined classes ,  This means C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading
3. Function overriding : Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.
4. Virtual functions : is a member function that is declared in the base class using the keyword virtual and is re-defined (Overriden) in the derived class. Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism. A class may have virtual destructor but it cannot have a virtual constructor.

**NOTE:** If we have created a virtual function in the base class and it is being overridden in the derived class then we don’t need virtual keyword in the derived class, functions are automatically considered as virtual functions in the derived class.

Compile-time and Runtime are the two programming terms used in the software development. Compile-time is the time at which the source code is converted into an executable code while the run time is the time at which the executable code is started running. Both the compile-time and runtime refer to different types of error.

Like we specified in the previous chapter; **[Inheritance](https://www.w3schools.com/cpp/cpp_inheritance.asp)** lets us inherit attributes and methods from another class. **Polymorphism** uses those methods to perform different tasks. This allows us to perform a single action in different ways.

In C++, inheritance is a process in which one object acquires all the properties and behaviors of its parent object automatically. In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.

In C++, the class which inherits the members of another class is called derived class and the class whose members are inherited is called base class. The derived class is the specialized class for the base class.

### Why we use virtual destructor in C++?

When an object in the class goes out of scope or the execution of the main() function is about to end, a destructor is automatically called into the program to free up the space occupied by the class' destructor function. When a pointer object of the base class is deleted that points to the derived class, only the parent class destructor is called due to the early bind by the compiler. In this way, it skips calling the derived class' destructor, which leads to memory leaks issue in the program. And when we use virtual keyword preceded by the destructor tilde (~) sign inside the base class, it guarantees that first the derived class' destructor is called. Then the base class' destructor is called to release the space occupied by both destructors in the inheritance class.

# Advantage of C++ Inheritance

**Code reusability:** Now you can reuse the members of your parent class. So, there is no need to define the member again. So less code is required in the class.

# Types Of Inheritance

**C++ supports five types of inheritance:**

- Single inheritance
- Multiple inheritance
- Hierarchical inheritance
- Multilevel inheritance
- Hybrid inheritance

# C++ Single Inheritance

**Single inheritance** is defined as the inheritance in which a derived class is inherited from the only one base class.

!https://static.javatpoint.com/cpp/images/cpp-inheritance2.png

Where 'A' is the base class, and 'B' is the derived class.

# C++ Single Level Inheritance Example: Inheriting Fields

When one class inherits another class, it is known as single level inheritance. Let's see the example of single level inheritance which inherits the fields only.

```cpp
#include <iostream>
using namespace std;
class Account {
	public:
		float salary = 60000;
};
class Programmer: public Account 
{
	public:
		float bonus = 5000;
};
int main(void) 
{
	Programmer p1;
	cout<<"Salary: "<<p1.salary<<endl;
	cout<<"Bonus: "<<p1.bonus<<endl;
	return 0;
}
OutPut: 
		Salary: 60000
		Bonus: 5000
```

# How to make a Private Member Inheritable

The private member is not inheritable. If we modify the visibility mode by making it public, but this takes away the advantage of data hiding.

C++ introduces a third visibility modifier, i.e., **protected**. The member which is declared as protected will be accessible to all the member functions within the class as well as the class immediately derived from it.

# C++ Multilevel Inheritance

**Multilevel inheritance** is a process of deriving a class from another derived class.

!https://static.javatpoint.com/cpp/images/cpp-inheritance4.png

# C++ Multi Level Inheritance Example

When one class inherits another class which is further inherited by another class, it is known as multi level inheritance in C++. Inheritance is transitive so the last derived class acquires all the members of all its base classes.

```cpp
#include <iostream>  
using namespace std;  
 class Animal {  
   public:  
 void eat() {   
    cout<<"Eating..."<<endl;   
 }    
   };  
   class Dog: public Animal   
   {    
       public:  
     void bark(){  
    cout<<"Barking..."<<endl;   
     }    
   };   
   class BabyDog: public Dog   
   {    
       public:  
     void weep() {  
    cout<<"Weeping...";   
     }    
   };   
int main(void) {  
    BabyDog d1;  
    d1.eat();  
    d1.bark();  
     d1.weep();  
     return 0;  
}
OutPut:
			Eating...
			Barking...
			Weeping...
```

# C++ Multiple Inheritance

**Multiple inheritance** is the process of deriving a new class that inherits the attributes from two or more classes.

!https://static.javatpoint.com/cpp/images/cpp-inheritance5.png

**Syntax of the Derived class:**

```cpp
**class** D : visibility B-1, visibility B-2, ?
{
	// Body of the class;
}
```

Exemple : 

```cpp
#include <iostream>  
using namespace std;  
class A  
{  
    protected:  
     int a;  
    public:  
    void get_a(int n)  
    {  
        a = n;  
    }  
};  
  
class B  
{  
    protected:  
    int b;  
    public:  
    void get_b(int n)  
    {  
        b = n;  
    }  
};  
class C : public A,public B  
{  
   public:  
    void display()  
    {  
        std::cout << "The value of a is : " <<a<< std::endl;  
        std::cout << "The value of b is : " <<b<< std::endl;  
        cout<<"Addition of a and b is : "<<a+b;  
    }  
};  
int main()  
{  
   C c;  
   c.get_a(10);  
   c.get_b(20);  
   c.display();  
  
    return 0;  
}
OutPut:
			The value of a is : 10
			The value of b is : 20
			Addition of a and b is : 30
```

# Ambiquity Resolution in Inheritance

Ambiguity can be occurred in using the multiple inheritance when a function with the same name occurs in more than one base class.

```cpp
#include <iostream>  
using namespace std;  
class A  
{  
    public:  
    void display()  
    {  
        std::cout << "Class A" << std::endl;  
    }  
};  
class B  
{  
    public:  
    void display()  
    {  
        std::cout << "Class B" << std::endl;  
    }  
};  
class C : public A, public B  
{  
    void view()  
    {  
        display();  
    }  
};  
int main()  
{  
    C c;  
    c.display();  
    return 0;  
}

```

```cpp

class C : public A, public B  
{  
    void view()  
    {  
        A :: display();         // Calling the display() function of class A.  
        B :: display();         // Calling the display() function of class B.  
  
    }  
};
```

# C++ Hybrid Inheritance

Hybrid inheritance is a combination of more than one type of inheritance.

# Abstract Class

A class that contains a pure virtual function is known as an abstract class. *abstract class* is a class that is designed to be specifically used as a base class. An abstract class contains at least one *pure virtual function*. You declare a pure virtual function by using a *pure specifier* (`= 0`) in the declaration of a virtual member function in the class declaration.

By definition, an **abstract class in C++** is a class that has at least *one*
 pure virtual function (i.e., a function that has no definition). The classes inheriting the abstract class *must* provide a definition for the pure virtual function; otherwise, the subclass would become an abstract class itself.

An abstract class type object cannot be created.

The Abstract class type cannot be instantiated, but [pointers](https://www.simplilearn.com/tutorials/cpp-tutorial/pointers-in-cpp) and references to it can be generated.

# **Why Can't We Make an Abstract Class Object?**

When we construct a pure virtual function in Abstract, we reserve a slot in the VTABLE(discussed in the previous topic) for a function, but we don't put any address in that slot. As a result, the VTABLE will be unfinished.

V-tables (or virtual tables) are how most C++ implementations do polymorphism. For each concrete implementation of a class, there is a table of function pointers to all the virtual methods. A pointer to this table (called the virtual table) exists as a data member in all the objects. When one calls a virtual method, we lookup the object's v-table and call the appropriate derived class method.

# **What is a pure virtual function?**

A pure virtual function is a virtual function in C++ for which we need not to write any function definition and only we have to declare it. It is declared by assigning 0 in the declaration.

A pure virtual function is a function that must be overridden in a derived class and need not be defined. A virtual function is declared to be “pure” using the curious `=0` syntax. For example:

```cpp
class Base 
{    
	public:        
		void f1();// not virtual        
		virtual void f2();// virtual, not pure        
		virtual void f3() = 0;// pure virtual    
};    
Base b;// error: pure virtual f3 not overridden
```

Here, `Base`is an abstract class (because it has a pure virtual function), so no objects of class `Base`can be directly created: `Base`is (explicitly) meant to be a base class. For example:

```cpp
class Derived : public Base {
        // no f1: fine
        // no f2: fine, we inherit Base::f2
        void f3();
    };
  Derived d;  // ok: Derived::f3 overrides Base::f3
```

# P**ointer** & References :

A **pointer** in C++ is a variable that holds the memory address of another variable.

A **reference** is an alias for an already existing variable. Once a reference is initialized to a variable, it cannot be changed to refer to another variable. Hence, a reference is similar to a **const pointer**.

An alias occurs when different variables point directly or indirectly to a single area of storage.

**For Example,** if a function takes two pointers **A** and **B** which have the same value, then the name **A[0]** aliases the name **B[0]** i.e., we say the pointers **A** and **B** alias each other.

Below is the program to illustrate **aliasing** in C:

```clike
// C program to illustrate aliasing
#include <stdio.h>
  
// Function to add 10 to b
int gfg(int* a, int* b)
{
    *b = *b + 10;
    return *a;
}
  
// Driver Code
int main()
{
    // Given data
    int data = 20;
  
    // Function Call with aliasing
    int result = gfg(&data, &data);
  
    // Print the data
    printf("%d ", result);
}
OutPut : 30
```

## **Key differences**

### **Pointer**

- A pointer can be initialized to any value anytime after it is declared.
    
    ```
    int a = 5;
    // some code
    int *p = &a;
    ```
    
- A pointer can be assigned to point to a *NULL* value.
- Pointers need to be dereferenced with a ``.
- A pointer can be declared as void but a reference can never be void
- A pointer can be changed to point to any variable of the same type.
    
    Example:
    
    ```
    int a = 5;
    int *p;
    p = &a;
    int b = 6;
    p = &b;
    ```
    

### **Reference**

- A reference must be initialized when it is declared.
    
    ```
    int a = 5;
    int &ref = a;
    ```
    
- References cannot be *NULL*.
- References can be used ,simply, by name.
- Once a reference is initialized to a variable, it cannot be changed to refer to a variable object.

# Files :

The `fstream` library allows us to work with files.

To use the `fstream` library, include both the standard `<iostream>` **AND** the `<fstream>` header file:

There are three classes included in the `fstream` library, which are used to create, write or read files:

| Class | Description |
| --- | --- |
| ofstream | Creates and writes to files |
| ifstream | Reads from files |
| fstream | A combination of ofstream and ifstream: creates, reads, and writes to files |

# Create and Write To a File

To create a file, use either the `ofstream` or `fstream` class, and specify the name of the file.

To write to the file, use the insertion operator (`<<`).

## Read File :

`void open(const char *filename, ios::openmode mode);`

Here, the first argument specifies the name and location of the file to be opened and the second argument of the **open()** member function defines the mode in which the file should be opened.

## ****Closing a File :****

`void close();`

### Why do we close the file?

It is considered good practice, and it can clean up unnecessary memory space.

# Read a File

To read from a file, use either the `ifstream` or `fstream` class, and the name of the file.

Note that we also use a `while` loop together with the `getline()` function (which belongs to the `ifstream` class) to read the file line by line, and to print the content of the file:

## Npos & find & erase & insert & **is_open**:

## Npos :

`static const size_t npos = -1;`

**Maximum value for size_t**

npos is a static member constant value with the greatest possible value for an element of type [size_t](https://cplusplus.com/size_t).This value, when used as the value for a *len* (or *sublen*) parameter in [string](https://cplusplus.com/string)'s member functions, means *"until the end of the string"*.As a return value, it is usually used to indicate no matches.This constant is defined with a value of -1, which because [size_t](https://cplusplus.com/size_t) is an unsigned integral type, it is the largest possible representable value for this type.

## Find :

`template <class InputIterator, class T>   InputIterator find (InputIterator first, InputIterator last, const T& val);`

**Find value in range**

Returns an iterator to the first element in the range `[first,last)` that compares equal to val. If no such element is found, the function returns last.The function uses `operator==` to compare the individual elements to val.

## Erase :

****1. erase() :****

**`erase()`**will erase the complete string.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "Hello World";
  cout << "Initially: " << str << endl;

  str.erase();
  cout << "After using erase(): " << str;
  return 0;
}
```

****2. Using erase(position) :****

**`erase(position)`**will delete all the characters after the specified position. Take a look at the code below:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "Hello World";
  cout << "Initially: " << str << endl;

  str.erase(2);
  cout << "After using erase(2): " << str;
  return 0;
}
```

****3. Using erase(index, length) :****

**`erase(index, length)`**will delete the specified number (length) of characters after the specified position. Take a look at the code below:

## Insert :

The **`insert()` function** is defined in the `<vector>` header and is used to add an element or elements into a vector.

The function can be used in three main ways, as discussed below.

### **1. Single element**

### **Prototype**

```
iterator insert(iterator position, const value_type& val);

```

### **Syntax**

```
myVector.insert(position, val)

```

### **Arguments**

- **`position`**: an iterator that points to the position where the value is to be added.
- **`val`**: the single element that needs to be added at `position`.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec;

  vector<int>::iterator iter = vec.begin();

  iter = vec.insert(iter, 1);
  iter = vec.insert(iter, 2);

  int vecSize = vec.size();

  cout << vecSize << endl;

  for(int i = 0; i < 2; i++)
  {
    cout << vec.at(i) << " ";
  }

  cout << endl;

  return 0;
}
```

## **is_open :**

`bool is_open();`

Returns whether the stream is currently associated to a file.

## **this vs *this :**

`this` is a pointer to an object of a class, on which the non-static member function was called, and `*this` is a dereferenced pointer which is simply getting the value stored at the memory address.. If you had a function that returned `this`, it would be a pointer to the current object, while a function that returned `*this` would be a "clone" of the current object, allocated on the stack -- *unless* you have specified the return type of the method to return a reference.

Friend functions do not have a **this** pointer, because friends are not members of a class. Only member functions have a **this** pointer.

 A simple program that shows the difference between operating on copies and references:

```cpp
#include <iostream>

class Foo
{
    public:
        Foo()
        {
            this->value = 0;
        }

        Foo get_copy()
        {
            return *this;
        }

        Foo& get_copy_as_reference()
        {
            return *this;
        }

        Foo* get_pointer()
        {
            return this;
        }

        void increment()
        {
            this->value++;
        }

        void print_value()
        {
            std::cout << this->value << std::endl;
        }

    private:
        int value;
};

int main()
{
    Foo foo;
    foo.increment();
    foo.print_value();

    foo.get_copy().increment();
    foo.print_value();

    foo.get_copy_as_reference().increment();
    foo.print_value();

    foo.get_pointer()->increment();
    foo.print_value();

    return 0;
}
OutPut :
				1
				1
				2
				3
```

## Friend Function :

**Friend Class** A friend class can access private and protected members of other class in which it is declared as friend. It is sometimes useful to allow a particular class to access private members of other class. For example, a LinkedList class may be allowed to access private members of Node.

# Exceptions :

When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.

When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an **exception** (throw an error).

**C++ try and catch :**

Exception handling in C++ consist of three keywords: `try`, `throw` and `catch`:

The `try` statement allows you to define a block of code to be tested for errors while it is being executed.

The `throw` keyword throws an exception when a problem is detected, which lets us create a custom error.

The `catch` statement allows you to define a block of code to be executed, if an error occurs in the try block.

The `try` and `catch` keywords come in pairs:

We use the `try`block to test some code: If the `age`variable is less than `18`, we will `throw`an exception, and handle it in our `catch`block.

In the `catch` block, we catch the error and do something about it. The `catch` statement takes a **parameter**: in our example we use an `int` variable (`myNum`) (because we are throwing an exception of `int` type in the `try` block (`age`)), to output the value of `age`.

If no error occurs (e.g. if `age` is `20` instead of `15`, meaning it will be be greater than 18), the `catch` block is skipped:

You can also use the `throw`keyword to output a reference number, like a custom error number/code for organizing purposes:


If you do not know the `throw`**type** used in the `try`block, you can use the "three dots" syntax (`...`) inside the `catch`block, which will handle any type of exception:


it's simply redundant to use `this->`to call members, unless you want to semantically distinguish between locals and members quickly. use this when you have a hidden/private member =) in any other case it does not make a difference =)

## **vector : : resize() :**

**[Vectors](https://www.geeksforgeeks.org/vector-in-cpp-stl/)** are known as dynamic arrays which can change its size automatically when an element is inserted or deleted. This storage is maintained by container.

***`vectorname*.resize(int n, int val)`**

- ***n** – it is new container size, expressed in number of elements.*
- ***val** – if this parameter is specified then new elements are initialized with this value.*

# **Timer :**

The `time()` function takes the following parameters:

- **arg**: pointer to a `time_t` object which (if not `NULL`) stores the time.

return a value of integral type holding 86400 times the number of calendar days since [the Epoch](http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap04.html#tag_04_16) plus the number of seconds that have passed since the last midnight UTC.

## **Put_time() :**

<aside>
🕐      **template put_time( const [std::tm](http://en.cppreference.com/w/cpp/chrono/c/tm) tmb, const CharT* fmt );**

</aside>

converts the date and time information from a given calendar time `tmb`to a character string according to [format string](https://en.cppreference.com/w/cpp/io/manip/put_time#Format_string)`fmt`

## **Localtime():**

```
**tm* localtime(const time_t* time_pretr);**
```

The localtime() function takes a pointer of type `time_t` as its argument and returns a pointer object of structure `tm`. The value returned by localtime() function is the local time.

The localtime() function in C++ converts the given time since epoch to calendar time which is expressed as local time.

End Of File : 

In [computing](https://en.wikipedia.org/wiki/Computing), **end-of-file** (**EOF**)is a condition in a computer [operating system](https://en.wikipedia.org/wiki/Operating_system)
where no more data can be read from a data source. The data source is usually called a [file](https://en.wikipedia.org/wiki/File_(computing)) or [stream](https://en.wikipedia.org/wiki/Stream_(computing)).

`cin.eof()`test if the stream has reached end of file which happens if you type something like Ctrl+D (on Windows), or if input has been redirected to a file etc.

CtrlC tells the terminal to send a `[SIGINT](http://en.wikipedia.org/wiki/SIGINT_%28POSIX%29)` to the current foreground process, which by default translates into terminating the application. CtrlD tells the terminal that it should register a EOF on standard input, which bash interprets as a desire to exit.

For an input stream to enter the EOF state you have to actually make an attempt to *read past the end of stream*. I.e. it is not enough to reach the end-of-stream location in the stream, it is necessary to actually try to *read* a character past the end. This attempt will result in EOF state being activated, which in turn will make `cin.eof()`return true.

# **Memory Management: new and delete :**

A good understanding of how dynamic memory really works in C++ is essential to becoming a good C++ programmer. Memory in your C++ program is divided into two parts −

- **The stack** − All variables declared inside the function will take up memory from the stack.
- **The heap** − This is unused memory of the program and can be used to allocate the memory dynamically when program runs.

Many times, you are not aware in advance how much memory you will need to store particular information in a defined variable and the size of required memory can be determined at run time.

You can allocate memory at run time within the heap for the variable of a given type using a special operator in C++ which returns the address of the space allocated. This operator is called **new** operator.

C++ allows us to allocate the memory of a variable or an array in run time. This is known as dynamic memory allocation.

In other programming languages such as Java and Python, the compiler automatically manages the memories allocated to variables. But this is not the case in C++.

In C++, we need to deallocate the dynamically allocated memory manually after we have no use for the variable.

Dynamic memory allocation in C/C++ refers to performing memory allocation manually by a programmer. Dynamically allocated memory is allocated on **Heap,**
 and non-static and local variables get memory allocated on **Stack**

**How is it different from memory allocated to normal variables?**

For normal variables like “int a”, “char str[10]”, etc, memory is automatically allocated and deallocated. For dynamically allocated memory like “int *p = new int[10]”, it is the programmer’s responsibility to deallocate memory when no longer needed. If the programmer doesn’t deallocate memory, it causes a **[memory leak](https://www.geeksforgeeks.org/what-is-memory-leak-how-can-we-avoid/)** (memory is not deallocated until the program terminates).

# C++ new Operator

The `new` operator allocates memory to a variable. For example,

```php
// declare an int pointer
int* pointVar;

// dynamically allocate memory
// using the new keyword
pointVar = new int;

// assign value to allocated memory
*pointVar = 45;
```

Here, we have dynamically allocated memory for an `int` variable using the `new` operator.

Notice that we have used the pointer pointVar to allocate the memory dynamically. This is because the `new` operator returns the address of the memory location.

In the case of an array, the `new` operator returns the address of the first element of the array.

From the example above, we can see that the syntax for using the `new` operator is

```clike
pointerVariable = new dataType;
```

# delete Operator

Once we no longer need to use a variable that we have declared dynamically, we can deallocate the memory occupied by the variable.

For this, the `delete` operator is used. It returns the memory to the operating system. This is known as **memory deallocation**.

The syntax for this operator is

```clike
delete pointerVariable;
```

Consider the code:

```clike
// declare an int pointer
int* pointVar;

// dynamically allocate memory
// for an int variable
pointVar = new int;

// assign value to the variable memory
*pointVar = 45;

// print the value stored in memory
cout << *pointVar; // Output: 45

// deallocate the memory
delete pointVar;
```

Here, we have dynamically allocated memory for an `int` variable using the pointer pointVar.

### new operator

The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available, a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.

**Initialize memory:** We can also initialize the memory for built-in data types using a new operator. For custom data types, a constructor is required (with the data type as input) for initializing the value. Here’s an example of the initialization of both data types :

```clike
pointer-variable =new data-type(value);
```

**Allocate a block of memory:** new operator is also used to allocate a block(an array) of memory of type *data-type*.

```clike
pointer-variable =new data-type[size];
```

where size(a variable) specifies the number of elements in an array.

**Example:**

```clike
int *p = new int[10]
```

Dynamically allocates memory for 10 integers continuously of type int and returns a pointer to the first element of the sequence, which is assigned top(a pointer). p[0] refers to the first element, p[1] refers to the second element, and so on.

## What is Static Memory Allocation?

When the allocation of memory performs at the compile time, then it is known as static memory. In this, the memory is allocated for variables by the compiler.

## What is Dynamic Memory Allocation?

When the memory allocation is done at the execution or run time, then it is called dynamic memory allocation.

| Sr.No | Mode Flag & Description |
| --- | --- |
| 1 | ios::app
Append mode. All output to that file to be appended to the end. |
| 2 | ios::ate
Open a file for output and move the read/write control to the end of the file. |
| 3 | ios::in
Open a file for reading. |
| 4 | ios::out
Open a file for writing. |
| 5 | ios::trunc
If the file already exists, its contents will be truncated before opening the file. |

flag is just a variable that is given a value when some operation is performed .

The prevent from the multiple inclusion of same header file multiple time.

```clike
#ifndef __COMMON_H__
#define __COMMON_H__
//header file content
#endif
```

Suppose you have included this header file in multiple files. So first time __COMMON_H__ is not defined, it will get defined and header file included.

Next time __COMMON_H__ is defined, so it will not include again.

## **cin.fail() :**

his function returns true when an input failure occurs. In this case it would be an input that is not an integer. If the cin fails then the input buffer is kept in an error state.

The **fail()** method of **ios class** in C++ is used to check if the stream is has raised any fail error. It means that this

function will check if this stream has its failbit set.

## ****Floating-Point  :****

**Floating -point Arithmetic :** 

In computing, **floating-point arithmetic** (**FP**) is arithmetic that represents real numbers approximately, using an integer with a fixed      precision, called the significand, scaled by an integer exponent of a fixed base. For example, 12.345 can be represented as a base-ten floating-point number:

https://wikimedia.org/api/rest_v1/media/math/render/svg/dcd36557db1b343d74991d99aeb50aadce64eb3a

**Floating point Numbers  :** data type is a **built-in** data type in C++ like the integer data type.This type like the integer data type can represent a number,but with **fraction.**

So **floating point data type can represent a real number** .In this post we shall discuss the different types of floating point data and their differences among them.

**Real numbers** are numbers that have a fractional part. Because of the way they are stored internally, real numbers are also known as *floating-point numbers*. The numbers 5.5, 8.3, and -12.6 are all floating-point numbers. C++ uses the decimal point to distinguish between floating-point numbers and integers, so a number such as 5.0 is a floating-point number while 5 is an integer. Floating-point numbers must contain a decimal point. Numbers such as 3.14159, 0.5, 1.0, and 8.88 are floating-point numbers.

A fraction, or fractional number, is used to represent a part of a whole. Fractions consist of two numbers: a **numerator** (which is above the line) and a **denominator**
 (which is below the line).

Although it is possible to omit digits before the decimal point and specify a number as .5 instead of 0.5, the extra 0 makes it clear that you are using a floating-point number. A similar rule applies to 12. versus 12.0. Floating-point zero should be written as 0.0.

The form of a floating-point declaration is:

```
float variable;   //comment
```

Again, there is a limit on the range of floating-point numbers the computer can handle. The range varies widely from computer to computer.

There are three different floating point data types: **float**, **double**, and **long double**.

```
// creating float type variables
float num1 = 3.0f;
float num2 = 3.5f;
float num3 = 3E-5f; // 3x10^-5

// creating double type variables
double num4 = 3.0;
double num5 = 3.5;
double num6 = 3E-5; // 3x10^-5
```

We must add the suffix `f`or `F`at the end of a `float`value. This is because the compiler interprets decimal values without the suffix as `double`.

Consider this code.

```
float a = 5.6;
```

Here, we have assigned a `double` value to a `float` variable.

In this case, **5.6** is converted to `float` by the compiler automatically before it is assigned to the variable a. This may result in data loss.

# Difference Between float and double

**Note:** Unless you have a specific requirement, always use double instead of float, as float variables may be prone to introduce errors when working withlarge numbers.

| float | double |
| --- | --- |
| Size: 4 bytes | Size: 8 bytes |
| Precision: In general, 7 decimal digits precision | Precision: In general, 15 decimal digits precision |
| Example: 3.56f, 3e5f etc. | Example: 3.56, 3e5 etc. |

Digits are **the single numbers used to represent values in math**. 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9 are used in different combinations and repetitions to represent all the values in math. Any of the ten numbers from 0 to 9 can be represented by a symbol known as a digit.

### **Example 1: C++ float and double**

```
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    // Creating a double type variable
    double a = 3.912348239293;

    // Creating a float type variable
    float b = 3.912348239293f;

    // Printing the two variables
    cout << "Double Type Number  = " << a << endl;
    cout << "Float Type Number  = " << b << endl;

    return 0;
}
```

**Output**

```
Double Type Number  = 3.91235
Float Type Number = 3.91235
```

**Note:** The compiler used for this example (MinGW compiler) allowed for 6 digits. So, our variable values were rounded off and truncated to 6 digits by the compiler.

# setprecision() to Specify Decimal Points

We can specify the number of decimal points to print in `cout` by using the `setprecision()` function. This function is defined in the `iomanip` header file, which stands for **input/output manipulation**.

```
// Setting the precision to 12 decimal places
    cout << setprecision(13);
```

```
//Without setprecision() function
Double Type Number = 3.9123482393
Float Type Number    = 3.912348

// With setprecision 
Double Type Number  = 3.912348239293
Float Type Number      = 3.912348270416
```

## **Work with Exponential Numbers : (10^b)**

As mentioned above, `float` and `double` can also be used to represent **exponential numbers**. For example,

```
// ex = 325 X (10 ^ 25)
double ex = 325E25;
```

C++ outputs exponential numbers and very large numbers in a format called the **scientific** format. The variable ex will be outputted in this format by default since it is a very large number. 

In order to force C++ to display our floating-point numbers in the scientific format regardless of the size of the number, we use the format specifier scientific inside of cout.

```
double num = 3.25;

// ex = 325 X (10 ^ 25)
double ex = 325E25;

// using scientific format
cout << scientific << num;
cout << scientific << ex;
```

In addition to this, there is another format specifier known as `fixed`, which displays floating-point numbers in the decimal format.

It is similar to displaying floating-point numbers by only using cout without setprecision(), except for the fact that fixed displays numbers up to 6 decimal points.

On the other hand, only using `cout` displays digits according to the specific **compiler** (6 total digits in the case of **MinGW compiler**, including the digits before the decimal point).

In addition to this, there is another format specifier known as fixed, which displays floating-point numbers in the decimal format. It is similar to displaying floating-point numbers by only using cout without setprecision(), except for the fact that fixed displays numbers up to 6 decimal points. On the other hand, only using cout displays digits according to the specific **compiler** (6 total digits in the case of **MinGW compiler**, including the digits before the decimal point).

```
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    // Creating a decimal double type variable
    double a = 3.912348239293;

    // Creating an exponential double type variable
    double ex1 = 325e+2;

    // Creating a float type variable
    float b = 3.912348239293f;

    // Creating an exponential float type variable
    float ex2 = 325e+2f;

    // Displaying output with fixed
    cout << "Displaying Output With fixed:" << endl;
    cout << "Double Type Number 1 = " << fixed << a << endl;
    cout << "Double Type Number 2 = " << fixed << ex1 << endl;
    cout << "Float Type Number 1  = " << fixed << b << endl;
    cout << "Float Type Number 2  = " << fixed << ex2 << endl;

    // Displaying output with scientific
    cout << "\nDisplaying Output With scientific:" << endl;
    cout << "Double Type Number 1 = " << scientific << a << endl;
    cout << "Double Type Number 2 = " << scientific << ex1 << endl;
    cout << "Float Type Number 1  = " << scientific << b << endl;
    cout << "Float Type Number 2  = " << scientific << ex2 << endl;
    return 0;
}
```

**Output :** 

```
Displaying Output With fixed:
Double Type Number 1 = 3.912348
Double Type Number 2 = 32500.000000
Float Type Number 1  = 3.912348
Float Type Number 2  = 32500.000000

Displaying Output With scientific:
Double Type Number 1 = 3.912348e+000
Double Type Number 2 = 3.250000e+004
Float Type Number 1  = 3.912348e+000
Float Type Number 2  = 3.250000e+004
```

# long double :

Apart from `float` and `double`, there is another data type that can store floating-point numbers. This is known as `long double`.It usually occupies a space of 12 bytes (depends on the computer system in use), and its precision is at least the same as `double`, though most of the time, it is greater than that of `double`.

`long double` values should end with `L`. For example,

```
// declaring a long double variable

long double num_ldb = 2.569L;
```

## **Precision and Accuracy :**

**Precision**: It is the total number of digits in any number.For example 2.45 has 3 precision value, 0.3 has one precision.

**Accuracy**: It refers to the degree of exactness or correctness of a number.

On **Precision** we have two fuction :

1 - **setprecision();**

2- i**os_base::precision( x )**: This function is included under the <iostream> header’s file.

The output is,

```jsx
Before setting the precision
9.36749
After setting the precision up to 13 digits,
9.3674860000619.367486000061
```

3 - **Floor () Methode :**  

Output 

```
1
1
1
-2
-2
-2
```

4- **Ceil() Method :** 

Ceil rounds off the given value to the closest integer which is more than the given value. It is defined in the **<cmath>** header file.

**Output**

```
2
2
2
-1
-1
-1
```

**3. trunc() Method :**

Trunc rounds remove digits after the decimal point. It is defined in the **<cmath>** header file.

**Output**

```
1
1
1
-1
-1
-1
```

### 4. round()

Rounds gave numbers to the closest integer. It is defined in the header files: **<cmath>** and **<ctgmath>**.

**Output**

```
1
2
2
-1
-2
-2
```

**Accuracy :** 

The two functions does give us numbers having up to 13 digits precision value, but it is far from equal with the original value, that means it is not accurate. The next section shows how to solve the accuracy problem in C++.

By accuracy we mean how close is the value to the correct value and from the 3rd example(above) we have seen that being precise does not mean the value is always accurate.

Why is accuracy important. Take an example in banking application when Compound interest is calculated, inaccuracy can lead to an incorrect transaction of money. Since C++ does not provide us with any standard library to make a number precise and accurate at the same time, the solution is you can either develop a library of your own that can give a precise and accurate value or you can use a third party library like Boost to get a very precise and accurate value. The program given below shows how to obtain a precise and accurate value using Boost library.

The output is

```jsx
1234.57
1234.5659383873262372
Area =14.454546338982978435
Area =14.45454633898297843499758377255357475776328133576
```

You can see we have obtained a very precise and accurate value.

Boost is not a bad library(in fact it is the best C++ library) so you can install the library and check the output yourself. And also if you are planning to make a Calculator that can yield a high precision and very accurate value then Boost might come in handy.

## **Floating point number representation :**

The floating-point representation can implement operations for high range values. The numerical evaluations are carried out using floating-point values. It can create calculations easy, scientific numbers are described as follows −

The number 5,600,000 can be described as 0.56 * 107.

Therefore, 0.56 is the mantissa and 7 is the value of the exponent.

Binary numbers can also be described in exponential form. The description of binary numbers in the exponential form is called floating-point representation. The floating-point representation breaks the number into two parts, the left-hand side is a signed, fixed-point number known as a mantissa and the right-hand side of the number is known as the exponent. The floating-point values are also authorized with a sign; 0 denoting the positive value and 1 denoting the negative value.

The general structure of floating-point representation of a binary number −

$$
x=(x0*20+x1*21+x2*22±−−∓b−(n−1)*2−(n−1) )
$$

mantissa*2Exponent

In the following syntax, the decimal point is transferred left for negative exponents of two and right for positive exponents of two. Both the mantissa and the exponent are signed values enabling negative numbers and negative exponents commonly.

**Example** − Convert **111101.1000110** into floating-point value.

**111101.1000110** = **1.111011000110 * 2^5** Converted to floating-point value

In this example, the integer value is converted to a floating-point value by changing the radix point next to the signed integer and scaling up the number to the exponential form by multiplying the value with the base 2. The value remains unaltered and this phase is known as the normalized method.

Representation of floating point number is not unique. For example, the number `55.66`can be represented as `5.566×10^1`, `0.5566×10^2`, `0.05566×10^3`, and so on. The fractional part can be *normalized* . In the normalized form, there is only a single non-zero digit before the radix point. For example, decimal number `123.4567`can be normalized as `1.234567×10^2`; binary number `1010.1011B` can be normalized as `1.0101011B×2^3`.

A floating-point number is typically expressed in the scientific notation, with a *fraction*(`F`), and an *exponent* (`E`) of a certain *radix* (`r`), in the form of `F×r^E`. Decimal numbers use radix of 10 (`F×10^E`); while binary numbers use radix of 2 (`F×2^E`).

In computers, floating-point numbers are represented in scientific notation of *fraction*(`F`) and *exponent*(`E`) with a *radix* of 2, in the form of `F×2^E`. Both `E`and `F`can be positive as well as negative. Modern computers adopt IEEE 754 standard for representing floating-point numbers. There are two representation schemes: 32-bit single-precision and 64-bit double-precision.

**IEEE-754 32-bit Single-Precision Floating-Point Numbers :**

In 32-bit single-precision floating-point representation:

- The most significant bit is the *sign bit* (`S`), This makes the number negative if set. with 0 for positive numbers and 1 for negative numbers.
- The following 8 bits represent *exponent* (`E`).
- The remaining 23 bits represents *fraction* (`F`).

3.5 = 3.5 * 10e1 ⇒ `S` = 1 `F` = 0.5 `E` =  1

256 = 2*e8 = move 8 bits

### Normalized Form

Let's illustrate with an example, suppose that the 32-bit pattern is `1 1000 0001 011 0000 0000 0000 0000 0000`, with:

- `S = 1`
- `E = 1000 0001`
- `F = 011 0000 0000 0000 0000 0000`

In the *normalized form*, the actual fraction is normalized with an implicit leading 1 in the form of `1.F`. In this example, the actual fraction is `1.011 0000 0000 0000 0000 0000 = 1 + 1×2^-2 + 1×2^-3 = 1.375D`.

The sign bit represents the sign of the number, with `S=0` for positive and `S=1` for negative number. In this example with `S=1`, this is a negative number, i.e., `-1.375D`.

**IEEE-754 64-bit Double-Precision Floating-Point Numbers :**

The representation scheme for 64-bit double-precision is similar to the 32-bit single-precision:

- The most significant bit is the *sign bit* (`S`), with 0 for positive numbers and 1 for negative numbers.
- The following 11 bits represent *exponent* (`E`).
- The remaining 52 bits represents *fraction* (`F`).

The value (`N`) is calculated as follows:

- Normalized form: For `1 ≤ E ≤ 2046, N = (-1)^S × 1.F × 2^(E-1023)`.
- Denormalized form: For `E = 0, N = (-1)^S × 0.F × 2^(-1022)`. These are in the denormalized form.
- For `E = 2047`, `N` represents special values, such as `±INF` (infinity), `NaN` (not a number).

## ****Floating point comparison in C++ :****

Here we will see how to compare two floating point data using C++. The floating point comparison is not similar to the integer comparison.

To compare two floating point values, we have to consider the precision in to the comparison. For example, if two numbers are 3.1428 and 3.1415, then they are same up to the precision 0.01, but after that, like 0.001 they are not same.

To compare using this criteria, we will find the absolute value after subtracting one floating point number from another, then check whether the result is lesser than the precision value or not. By this we can decide that they are equivalent or not.

```clike
#include <iostream>
#include <cmath>
using namespace std;
bool compare_float(float x, float y, float epsilon = 0.01f){
   if(fabs(x - y) < epsilon)
      return true; //they are same
    return false; //they are not same
}
int main() {
   float x, y;
   x = 22.0f/7.0f;
   y = 3.1415f;
   if(compare_float(x, y)){
      cout << "They are equivalent" << endl;
   } else {
      cout << "They are not equivalent" << endl;
   }
   if(compare_float(x, y, 0.001f)){
   cout << "They are equivalent" << endl;
   } else {
      cout << "They are not equivalent" << endl;
   }
}
```

## **Output**

```clike
They are equivalent
They are not equivalent
```

The `fabs()` function in C++ returns the absolute value of the argument. It is defined in the [cmath](https://www.programiz.com/cpp-programming/library-function/cmath) header file.

Mathematically, `fabs(num) = |num|`.

```clike
std::numeric_limits<T>::epsilon
```

Returns the machine epsilon, that is, the difference between 1.0 and the next value representable by the floating-point type `T`.

| Property | Value for float | Value for double |
| --- | --- | --- |
| Largest representable number | 3.402823466e+38 | 1.7976931348623157e+308 |
| Smallest number without losing precision | 1.175494351e-38 | 2.2250738585072014e-308 |
| Smallest representable number(*) | 1.401298464e-45 | 5e-324 |
| Mantissa bits | 23 | 52 |
| Exponent bits | 8 | 11 |
| Epsilon(**) | 1.1929093e-7 | 2.220446049250313e-16 |

Epsilon is the smallest x such that 1+x > 1. It is the place value of the least significant bit when the exponent is zero (i.e., stored as 0x7f).

**Overflow :** 

Whether you're using integers or not, sometimes a result is simply too big and that's all there is to it. However, you must try to avoid overflowing results needlessly. Often the final result of a computation is smaller than some of the intermediate values involved; even though your final result is representable, you might overflow during an intermediate step. Avoid this numerical faux pas! The classic example (from "Numerical Recipes in C") is computing the magnitude of a complex number. The naive implementation is:

```clike
double magnitude(double re, double im)
{
    return sqrt(re*re + im*im);
}
```

Let's say both components are 1e200. The magnitude is 1.4142135e200, well within the range of a double. However, squaring 1e200 yields 1e400, which is outside the range—you get infinity, whose square root is still infinity. Here is a much better way to write this function:

`sqrt(x) = √x`

## **Fixed Point :**

`fpm` is designed to guard against accidental conversion to and from floats and supports many of the standard C++ maths functions, including trigonometry, power and logarithmic functions, with performance and accuracy generally comparable to alternative libraries.

In [computing](https://en.wikipedia.org/wiki/Computing), **fixed-point** refers to a method of representing [fractional (non-integer) numbers](https://en.wikipedia.org/wiki/Fraction_(mathematics)) by storing a fixed number of digits of their fractional part

## **Why use fixed-point math?**

There are several reasons why you can not or choose not to use floating-point math, but still want a similar type:

- Your target platform lacks an FPU, does not  support floating-point operations or its floating-point operations are considerably slower than fixed-point integer operations.
- You require deterministic calculations.

If any of these reasons apply for you, and your problem domain has a clearly outlined range and required resolution, then fixed-point numbers might be a solution for you.

I wouldn't use floating point at all on a CPU without special hardware for handling it. My advice is to treat ALL numbers as integers scaled to a specific factor. For example, all monetary values are in cents as integers rather than dollars as floats. For example, 0.72 is represented as the integer 72.

Addition and subtraction are then a very simple integer operation such as (0.72 + 1 becomes 72 + 100 becomes 172 becomes 1.72).

Multiplication is slightly more complex as it needs an integer multiply followed by a scale back such as (0.72 * 2 becomes 72 * 200 becomes 14400 becomes 144 (scale-back) becomes 1.44).

That may require special functions for performing more complex math (sine, cosine, etc) but even those can be sped up by using lookup tables. Example: since you're using fixed-2 representation, there's only 100 values in the range (0.0,1] (0-99) and sin/cos repeat outside this range so you only need a 100-integer lookup table.

A signed integer is a 32-bit datum that encodes an integer in the range [-2147483648 to 2147483647]. An unsigned integer is a 32-bit datum that encodes a nonnegative integer in the range [0 to 4294967295].

****The orthodox canonical class form :****

The orthodox canonical class form is a recipe, if you will, for proper class design. At the very least, the OCCF specifies four required functions that you implement when declaring user-defined data types to ensure they behave correctly in the four basic object usage contexts.

- user-defined data types :
    
    User Defined Data type in c++ is a type by which the data can be represented. The type of data will inform the interpreter how the programmer will use the data. A data type can be pre-defined or user-defined. Examples of pre-defined data types are char, int, float, etc. We will discuss user-defined data types in detail.
    
    As the [programming languages allow the](https://www.educba.com/best-programming-languages/) user to create their own data types according to their needs. Hence, the data types that are defined by the user are known as user-defined data types. For example; arrays, class, structure, union, Enumeration, pointer, etc. These data types hold more complexity than pre-defined data types.
    
    ### **Types of User-Defined Data in C++**
    
    Here are the types mentioned below:    

In C++98 and C++03 the OCCF had four different methods that the C++ compiler is willing to generate:

- Default constructor
- Copy constructor
- Destructor
- Copy assignment operator

C++ allows you to specify more than one definition for a **function** name or an **operator** in the same scope, which is called **function overloading** and **operator overloading** respectively.

An **overloaded declaration** is a declaration that is declared with the same name as a previously declared declaration in the same scope, except that both declarations have different arguments and obviously different definition (implementation).

When you call an overloaded **function** or **operator**, the compiler determines the most appropriate definition to use, by comparing the argument types you have used to call the function or operator with the parameter types specified in the definitions. The process of selecting the most appropriate overloaded function or operator is called **overload resolution**.

**Function Overloading in C++**

You can have multiple definitions for the same function name in the same scope. The definition of the function must differ from each other by the types and/or the number of arguments in the argument list. You cannot overload function declarations that differ only by return type.

```cpp
#include <iostream>
using namespace std;
 
class printData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};

int main(void) {
   printData pd;
 
   // Call print to print integer
   pd.print(5);
   
   // Call print to print float
   pd.print(500.263);
   
   // Call print to print character
   pd.print("Hello C++");
 
   return 0;
}
OutPut : 
				Printing int: 5
				Printing float: 500.263
				Printing character: Hello C++
```

**Operators overloading in C++**

means defining additional tasks to operators without changing its actual meaning.

The purpose of operator overloading is to provide a special meaning to the user-defined data types.

The advantage of Operators overloading is to perform different operations on the same operand.

An operator is a symbol that tells the compiler to perform specific mathematical, logical calculations or some other special operations.

You can redefine or overload most of the built-in operators available in C++. Thus, a programmer can use operators with user-defined types as well.

Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being defined. Like any other function, an overloaded operator has a return type and a parameter list.

```cpp
Box operator+(const Box&);
```

declares the addition operator that can be used to **add** two Box objects and returns final Box object. Most overloaded operators may be defined as ordinary non-member functions or as class member functions. In case we define above function as non-member function of a class then we would have to pass two arguments for each operand as follows −

```cpp
#include <iostream>
using namespace std;

class Box {
   public:
      double getVolume(void) {
         return length * breadth * height;
      }
      void setLength( double len ) {
         length = len;
      }
      void setBreadth( double bre ) {
         breadth = bre;
      }
      void setHeight( double hei ) {
         height = hei;
      }

      // Overload + operator to add two Box objects.
      Box operator+(const Box& b) {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }

   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here

   // box 1 specification
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Add two object as follows:
   Box3 = Box1 + Box2;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}
OutPut : 
				Volume of Box1 : 210
				Volume of Box2 : 1560
				Volume of Box3 : 5400
```

```cpp
Box operator+(const Box&, const Box&);
```

In C++, we can change the way operators work for user-defined types like objects and structures. This is known as **operator overloading**. For example,

Suppose we have created three objects c1, c2 and result from a class named `Complex` that represents complex numbers

Since operator overloading allows us to change how operators work, we can redefine how the `+` operator works and use it to add the complex numbers of c1 and c2 by writing the following code:

```cpp
result = c1 + c2;
```

instead of something like

```cpp
result = c1.addNumbers(c2);
```

This makes our code intuitive and easy to understand.

**Note:** We cannot use operator overloading for fundamental data types like `int`, `float`, `char` and so on.

u should to define copy constractror to work with operator overloading

A standard class should look like the following code:

```cpp
class A final
{
   public:
      A ();
      A (const A &a);
      ~A ();
      A & operator = (const A &a);
};
```

As you may see, this is simple and it should be nothing to worry about. In general, when we work with objects (not pointers to an object) we can assume that there is no need to overwrite all methods. When we copy an object, all its data is copied to the other using the copy constructors of their data members. That’s fine and most of the time it’s also enough. The problem arises when we want to work with pointers to objects, members that are pointers to objects, o more complex data structures (smart pointers, etc).

****A problematic example :****

```clike
class B final
{
  public:
    B () = default;

  private:
    int b = 0;
};

class A final
{
   public:
      A () = default;
      ~A () { delete member; }
  private:
      B *member = new B ();
};
```

**Overloading stream insertion (<>) operators in C++ :**

In C++, stream insertion operator “<<” is used for output and extraction operator “>>” is used for input.

**1)** We must know the following things before we start overloading these operators.

**2)** cout is an object of ostream class and cin is an object of istream class

These operators must be overloaded as a global function. And if we want to allow them to access private data members of the class, we must make them friend.

**Why these operators must be overloaded as global?**

In operator overloading, if an operator is overloaded as a member, then it must be a member of the object on the left side of the operator. For example, consider the statement “ob1 + ob2” (let ob1 and ob2 be objects of two different classes). To make this statement compile, we must overload ‘+’ in a class of ‘ob1’ or make ‘+’ a global function.

The operators ‘<<‘ and ‘>>’ are called like ‘cout << ob1’ and ‘cin >> ob1’. So if we want to make them a member method, then they must be made members of ostream and istream classes, which is not a good option most of the time. Therefore, these operators are overloaded as global functions with two parameters, cout and object of user-defined class.\

## Casts :

**Casting** is a conversion process wherein data can be changed from one type to another.

 C++ has two types of conversions:

**Implicit conversion:** Conversions are performed automatically by the compiler without the programmer's intervention. example :

```cpp
int iVariable = 10;
float fVariable = iVariable; //Assigning an int to a float will trigger a conversion.
```

**Explicit conversion:** Conversions are performed only when explicitly specified by the programmer. example :

```cpp
int iVariable = 20;
float fVariable = (float) iVariable / 10;
```

A **Cast operator** is an unary operator which forces one data type to be converted into another data type 

- ***Unary operators** are operators which are used to calculate the result on only one operand.*
- ***Unary operators** are used on a single operand in order to calculate the new value of that variable.*
In C++, there are four types of casting operators :

**- static_cast
- const_cast
- reinterpret_cast
- dynamic_cast**

**static_cast :** This is the simplest type of cast which can be [used.It](http://used.it/) is a compile time [cast.It](http://cast.it/) does things like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions (or implicit ones).

Format: *static_cast<type>(expression);*

```cpp
float fVariable = static_cast<float>(iVariable); /*This statement converts iVariable which is of type int to float. */
```

By glancing at the line of code above, you will immediately determine the purpose of the cast as it is very explicit. The static_cast tells the compiler to attempt to convert between two different data types. It will convert between built-in types, even when there is a loss of precision. In addition, the static_cast operator can also convert between **related** pointer types.

exemple : 

```cpp
int* pToInt = &iVariable;
float* pToFloat = &fVariable;
    
float* pResult = static_cast<float*>(pToInt); //Will not work as the pointers are not related (they are of different types).
```

### **const_cast :**

Format: *const_cast<type>(expression);*

```cpp
void aFunction(int* a)
{
    cout << *a << endl;
}

int main()
{
    int a = 10;
    const int* iVariable = &a;
    
    aFunction(const_cast<int*>(iVariable)); 
/*Since the function designer did not specify the parameter as const int*, we can strip the const-ness of the pointer iVariable to pass it into the function. 
Make sure that the function will not modify the value. */

    return 0;
}
```

Probably one of the most least used cast, the const_cast does not cast between different types. Instead it changes the "const-ness" of the expression. It can make something const what was not const before, or it can make something volatile/changeable by getting rid of the const. Generally speaking, you will not want to utilise this particular cast in your programs. If you find yourself using this cast, you should stop and rethink your design.

**reinterpret_cast :** It is used to convert a pointer of some data type into a pointer of another data type, even if the data types before and after conversion are [different.It](http://different.it/) does not check if the pointer type and data pointed by the pointer is same or not.

Format: *reinterpret_cast<type>(expression);*

Arguably one of the most powerful cast, the reinterpret_cast can convert from any built-in type to any other, and from any pointer type to another pointer type. However, it cannot strip a variable's const-ness or volatile-ness. It can however convert between built in data types and pointers without any regard to type safety or const-ness. This particular cast operator should be used only when absolutely necessary.

**dynamic_cast**: dynamic casting is mainly used for safe downcasting at run time. To work on dynamic_cast there must be one virtual function in the base class. A dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting.

Format: dynamic_cast < *new-type* > ( *expression* )

 This cast is used for handling polymorphism. You only need to use it when you're casting to a derived class. This is exclusively to be used in inheritance when you cast from base class to derived class.

**Dynamic Cast:** A cast is an operator that converts data from one type to another type. In C++, dynamic casting is mainly used for safe downcasting at run time. To work on **dynamic_cast** there must be one virtual function in the base class. A **dynamic_cast** works only polymorphic base class because it uses this information to decide safe downcasting.

**Syntax:**

- **Downcasting:** Casting a base class pointer (or reference) to a derived class pointer (or reference) is known as downcasting. In figure 1 casting from the Base class pointer/reference to the “derived class 1” pointer/reference showing downcasting (Base ->Derived class).

• **Upcasting:** Casting a derived class pointer (or reference) to a base class pointer (or reference) is known as upcasting. In figure 1 Casting from Derived class 2 pointer/reference to the “Base class” pointer/reference showing Upcasting (Derived class 2 -> Base Class).

# **RTTI :**

**RTTI** is short for **Run-time Type Identification**. RTTI is to provide a standard way for a program to determine the type of object during runtime.

In other words, RTTI allows programs that use pointers or references to base classes to retrieve the actual derived types of the objects to which these pointers or references refer.

RTTI is provided through two operators:

1. The **typeid** operator, which returns the actual type of the object referred to by a pointer (or a reference).
2. The **dynamic_cast** operator, which safely converts from a pointer (or reference) to a base type to a pointer (or reference) to a derived type.

## uintptr_t :

`uintptr_t`is an unsigned integer type that is capable of storing a **data pointer***(whether it can hold a function pointer is unspecified)*. Which typically means that it's the same size as a pointer.

****What is the size of a pointer in C/C++?****

The size of a pointer in C/C++ is not fixed. It depends upon different issues like Operating system, CPU architecture etc. Usually it depends upon the word size of underlying processor for example for a 32 bit computer the pointer size can be 4 bytes for a 64 bit computer the pointer size can be 8 bytes. So for a specific architecture pointer size will be fixed. It is common to all data types like int *, float * etc.

## Template :

is a simple yet very powerful tool in C++. The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types . C++ adds two new keywords to support templates: *‘template’* and *‘typename’*. The second keyword can always be replaced by the keyword ‘class’.

**How Do Templates Work?**

Templates are expanded at compiler time. This is like macros. The difference is, that the compiler does type checking before template expansion. The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of the same function/class.

The specified placeholder in the code gets replaced by the actual data type at the time of compilation, called the instantiation of code. The class or function written as the template is called Generics, and this entire concept is called Generic Programming in C++

**Function Templates**
 We write a generic function that can be used for different data types. Examples of function templates are sort(), max(), min(), printArray().

```cpp
#include <iostream>
using namespace std;
  
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
  
int main()
{
    cout << myMax<int>(3, 7) << endl; // Call myMax for int
    cout << myMax<double>(3.0, 7.0)
         << endl; // call myMax for double
    cout << myMax<char>('g', 'e')
         << endl; // call myMax for char
  
    return 0;
}
Output
7
7
g
```

**Class Templates** like function templates, class templates are useful when a class defines something that is independent of the data type. Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.

```cpp
#include <iostream>
using namespace std;
  
template <typename T> 
class Array {
private:
    T* ptr;
    int size;
  
public:
    Array(T arr[], int s);
    void print();
};
  
template <typename T> 
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}
  
template <typename T> 
void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}
  
int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array<int> a(arr, 5);
    a.print();
    return 0;
}
Output
 1 2 3 4 5
```

# STL : **Standard Template Library**

is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators.

Containers: A container is an object that stores a collection of objects of a specific type. For example, if we need to store a list of names, we can use a `vector`. 

# Types of STL Container in C++

In C++, there are generally 3 kinds of STL containers:

- Sequential Containers
- Associative Containers
- Unordered Associative Containers
- Container adapters

### 1. Sequential Containers in C++

In C++, sequential containers allow us to store elements that can be accessed in sequential order. Internally, sequential containers are implemented as **arrays** or **linked lists** data structures**.**

**Types of Sequential Containers**

- *Array*
- *Vector*
- *Deque*
- *List*
- *Forward List*

### 2. **Associative containers**

Associative containers implement sorted data structures that can be quickly searched

**Types of Associative Containers :**

- Set
- Map
- **multiset**
- **multimap**
1. **Container adapters :**
    
    **Stack : Adapts a container to provide stack (LIFO data structure) (class template).**
    
    Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only
    
    For creating  a stack, we must include the <stack> header file in our code. We then use this syntax to define the std::stack:
    
    ```cpp
    template <class Type, class Container = deque<Type> > class stack;
    ```
    
    ---
    
    **Type** – is the Type of element contained in the std::stack. It can be any valid C++ type or even a user-defined type.
    
    **Container** – is the Type of underlying container object.
    

## Vector :

Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container

Vectors in C++ are sequence containers representing arrays that can change their size during runtime

Is different from arrays which store sequential data and are static in nature, Vectors provide more flexibility to the program.

Vectors in C++ are sequence containers representing arrays that can change their size during runtime. In vectors, data is inserted at the end when we use push_back() function . Inserting an element at the end of a vector takes differential time, as sometimes there may be a need of extending the vector, but inserting the element at the beginning or at the middle takes linear time

```cpp
inserting the element at the beginning :
#include <vector>int main() {
    std::vector<int> v{ 1, 2, 3, 4, 5 };
    v.insert(v.begin(), 6);
}
```

**syntax :** 

```cpp
#include <vector> // most inclulde vector
std:: vector<data_type>vector_name;
```

Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container

```cpp
vector <int>vec;
vec.push_back(50); // add value at the back
vec.pop_back(50); // remove value at the back
vec.size(); // size of vector
vector<int>vec{10,20,30}; // create a vector vec and put these values in it.
vector <int> vec(3); // create a 3 element int vector
vector <int>vec(3,0); | vector <char>vec(3,'a'); // create a vector with 3 elements and put 0 or a in each element
vec.front(); // get fisrt element
vec.back(); // get last element
vec.at(1) // get value to the 1 element (vec.at(0) first element)

```

push() function is used to insert or ‘push’ an element at the top of the stack. This is an inbuilt function from C++ Standard Template Library(STL).This function belongs to the **<stack>**header file. The element is added to the stack container and the size of the stack is increased by 1.

The pop()function is used to remove or ‘pop’ an element from the top of the stack(newest or the topmost element in the stack). This is an inbuilt function from C++ Standard Template Library(STL). This function belongs to the **<stack>** header file. The element is removed from the stack container and the size of the stack is decreased by 1.

```cpp
listname.push_front(value)
Parameters :
The value to be added in the front is
passed as the parameter
Result :
Adds the value mentioned as the parameter
to the front of the list named aslistname
```

## List  : (LIFO : Last in First Out)

A linked list is a collection of nodes that contain a data part and a next pointer.

A *node* is a structured variable (or object) containing at least one field whose type is a pointer type.

List is similar to vector because in linked list user can add any number of elements to it

A linked list consist of nodes  a node consist of two blocks :

1 - to store data , like int , char , float , double

2 - A pointer which points to next node

Syntax of List :

```cpp
#include <list>
std:: list <data_type>name;
ex :
	list <int>li;
**insert data :
	At Front :** li.push_front();
	**At Back :** li.push_back();
	**Any Position :** we need to use iterator in here
	**************************************iterator of list :************************************** list ****************************************************************************<int> :: iterator it = li.begin();
	list<int> :: reverse_iterator it = vec.rbegin(); // it mean last elemenet in list
	for (it = li.begin(); it != li.end(); it++)
  {
			if (*it == 20)
	      numbers.insert(it, 15); // insert a value after the element that have 20 in his value
  }
	li.pop_front(); // remove first element
	li.pop_back(); // remove last element
std::vector::reserve(); //requests to reserve vector capacity be at least enough to contain n elements
```

**Why We Need Linked List ?**

The Green Blocks are free memory , but if i tried to make an array of 5 elements , program will show an out of space error . Because Arrays Are stored in adjacent memory block but we can’t see 5 adjacent free blocks 

- adjacent memory block
    
    This is a contiguous memory block of five bytes, spanning from location 1 to location 5:
    
    !https://i.stack.imgur.com/ejebS.png
    
    It represents bytes (colored light blue) that are together in memory with no gap bytes (white) between them.
    
    This is a non-contiguous set of five bytes of interest:
    
    !https://i.stack.imgur.com/o0Fie.png
    

So The solution is Linked List . In this we used 1 block to store Data and one Contains Address of Next Memory Location

**Deque : (LIFO)**

Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed.

Double Ended Queues are basically an implementation of the data structure double-ended queue. A queue data structure allows insertion only at the end and deletion from the front. This is like a queue in real life, wherein people are removed from the front and added at the back. Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends

The functions for deque are same as vector, with an addition of push and pop operations for both front and back.

# Iterator :

****
**Iterator** is an object (like a pointer) that points to an element inside the container. We can use iterators to move through the contents of the container.

Iterators are used to point at the memory addresses of **[STL](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)** containers They are primarily used in sequences of numbers, characters etc.

**Syntax :** 

```cpp
vector <data_type>:: iterator name_iterator
ex :
	vector<int> :: iterator it = vec.begin(); // pointer to first element in vector
	vector<int> :: iterator it = vec.end(); // pointer to last element (null )
	++it; // display the next element (we don't have this in normal pointer)
	vector<int> :: reverse_iterator it = vec.rbegin(); // it mean last elemenet in vector
	++it; // element befor last element
	vec.empty(); // if vector empty return 1 else 0
	vec.insert(it + 2, 500) // insert in element 2 value 5 (vector started with 0 in first element)
	for (int i = 0; i < vec.size(); i++)
	{
			std:: cout << vec[i] << std:: endl ; // display all vector
	}
```

## Map :

Maps are **[](https://www.geeksforgeeks.org/containers-cpp-stl/)associative containers** that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.

Mapp will created 2 connected arrays

**Syntax :**

```cpp
#include <map>
std:: map <data_type, data_type> name;
```


Property : In map the Key cannot be duplicated

How to add data in maps : 

```cpp
map<string, int> coffee;
				Key        value
coffe["Espresso"] = 25;
coffe["Cappuccino"] = 30;
coffe["Tea"] = 20;
or :
	map<string, int> coffe{{"Espresso", 25}, {"Cappuccino", 30}, {"Tea", 20}};

coffe.find("Tea"); | if (coffe.find("Tea" != coffe.end()) cout << "key found"; // **Find Key**
map**<**string, int**> ::** iterator it = coffe.begin(); //**Iterator**
for (it = coffe.begin(); it != coffe.end(); it++)
{
	std:: cout << it->first << std:: endl; // **display Key value**
	std:: cout << it->second << std:: endl; // **display mapped valu**e
} 
**Insert Element in map :** coffe.insert(std:: make_pair("Cold Coffe", 50)); **// make_pair : we need this function, to pass 2 things in map (inserted alphabetique))**
coffe["Tea"] = 100; **// will display 100 because is it overrides the prev**
it = coffe.find("Tea"); \ coffe.erase(it); //**erasing by iterator**
coffe.erase("Tea"); //**erasing by Key**
it = coffe.find("Cappuccino"); \ coffe.erase(it, coffe.end()); //**erasing by range**

```

## **What is the list::back()?**

list::back() is an inbuilt function in C++ STL which is declared in header file. back() is used to refer to the last element of the list container. This function returns a direct reference to the last element only. When the list is empty then the function performs an undefined behaviour.

## **Syntax**

```cpp
mylist.back();
```

## Algorithm :

The header algorithm defines a collection of functions specially designed to be used on a range of elements. They act on containers and provide means for various operations for the contents of the containers.

- Algorithm
    - **[Sorting](https://www.geeksforgeeks.org/sort-algorithms-the-c-standard-template-library-stl/)**
    
    ```cpp
    sort(startaddress, endaddress)
    
    startaddress: the address of the first
                  element of the array
    endaddress: the address of the next
                contiguous location of the
                last element of the array.
    So actually sort() sorts in the
    range of [startaddress,endaddress)
    ex : 
    	The array before sorting is : 
    	1 5 8 9 6 7 3 4 2 0 
    	
    	The array after sorting is :
    	0 1 2 3 4 5 6 7 8 9
    ```
    
    - **[Searching](https://www.geeksforgeeks.org/binary-search-algorithms-the-c-standard-template-library-stl/)**
    - **[Important STL Algorithms](https://www.geeksforgeeks.org/c-magicians-stl-algorithms/)**
    - **[Useful Array algorithms](https://www.geeksforgeeks.org/useful-array-algorithms-in-c-stl/)**
    - **[Partition Operations](https://www.geeksforgeeks.org/stdpartition-in-c-stl/)**
        
        **Non-Manipulating Algorithms :** 
        
    1. **sort(first_iterator, last_iterator)** – To sort the given vector.
    2. **sort(first_iterator, last_iterator, greater<int>())** – To sort the given container/vector in descending order
    3. **reverse(first_iterator, last_iterator)** – To reverse a vector. ( if ascending -> descending OR if descending -> ascending)
    4. **max_element (first_iterator, last_iterator)** – To find the maximum element of a vector.
    5. **min_element (first_iterator, last_iterator)** – To find the minimum element of a vector.
    6. **accumulate(first_iterator, last_iterator, initial value of sum)** – Does the summation of vector elements
    7. **find(first_iterator, last_iterator, x)** Returns an iterator to the first occurrence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector.

# CPP 09:

The Gregorian calendar is the most widely used calendar in the world, and it is based on the time it takes for the Earth to orbit the sun. However, the time it takes for the Earth to orbit the sun is not exactly 365 days, but it's approximately 365.2422 days.

To make up for this difference, we add one extra day to the calendar every four years, which is called a leap year. This extra day helps to keep the calendar aligned with the Earth's orbit. So, in a leap year, the month of February has 29 days instead of 28.

However, adding an extra day every four years is still not perfect. It actually results in a calendar that is slightly longer than the Earth's orbit, and this small difference adds up over time. To correct for this, we skip a leap year every 100 years. This means that the years 1700, 1800, and 1900 were not leap years, even though they were divisible by 4.

But even this correction is not perfect. Skipping a leap year every 100 years actually results in a calendar that is slightly shorter than the Earth's orbit. To correct for this, we add a leap year back in every 400 years. This means that the years 1600 and 2000 were leap years, even though they were divisible by 100.

So, to summarize, we add a leap year every 4 years, except for years that are divisible by 100 but not by 400. This helps to keep the calendar aligned with the Earth's orbit, while also correcting for small errors in the calendar system.
