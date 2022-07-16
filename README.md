# Mastering-Low-level-Language
Learning Path to C &amp; C++ Programming | With Gun



# Basic



## Data

In computing we need to reading, changing, and writing data. **Data** is any information that can be moved, processed, or stored by a computer. 



## Program

To interact with the data in computer we need a program that can acquire data from :

1. From a Database
2. From a Network
3. From a Keyboard
4. From a Program itself (hardcoded)



## Object & Variable

A Program need memory to run, **RAM** (Random Access Memory) is used by the program. We can think RAM as a series numbered homes that each homes can be used to hold data while the program is running. Stored data in the memory is called value and to access memory we need indirect way through an object. It's because direct access to memory in C++ is not allowed. Compiler and Operating System is responsible for the object creation.

So rather than we remember numbered home, we will use object to get the values then we can focus on using objects to store and retrieve values, and not have to worry about where in memory they’re actually being placed.

Objects can be named or unnamed (anonymous). A named object is called a **variable**, and the name of the object is called an **identifier**. 

A variable is a named region of memory.

A value is a single piece of data stored in memory.

An identifier is the name that a variable is accessed by.



## Variable Instantiation

Here's an example of variable :

```C++
int hello;
```

When the program is run it's on runtime mode, when the program is compiled it's called compile time. At the running time hello variable will be instantiated, instantiation mean object will be created and assigned a memory address. An instantiated object is sometimes also called an **instance**.



## Data Type

 A **data type** (more commonly just called a **type**) tells the compiler what type of value that will be stored to variable. Our variable **hello** was given type *int* to represent an integer value, so we can call hello as *integer variable*. 

Integer variable can only hold integer values.

A type tells the program how to interpret a value in memory.



## Assignment

After a variable has been defined, you can give it a value (in a separate statement) using the *= operator*. This process is called **copy assignment** (or just **assignment**) for short.

```c++
int score { 1.5 }; // error: not all double values fit into an int
```



## Initialization

When a variable is defined, you can also provide an initial value for the variable at the same time. This is called **initialization**. The value used to initialize a variable is called an **initializer**. Initialization gives a variable an initial value at the point when it is created. Assignment gives a variable a value at some point after the variable is created.

There are 4 basic ways to initialize variables in C++:

```c++
int a; // no initializer
int b = 1; // initializer after equals sign
int c( 2 ); // initializer in parenthesis
int d { 3 }; // initializer in braces
```

Here we’re assigning a number (1.5) that has a fractional part (the .5 part) to an integer variable. Copy and direct initialization would drop the fractional part, resulting in initialization of value 4 into variable *score*. However, with brace initialization, this will cause the compiler to issue an error (which is generally a good thing, because losing data is rarely desired). 

```c++
int score { 1.5 }; // error: not all double values fit into an int
```



### Initialize Multiple Variable

It is possible to define multiple variables *of the same type* in a single statement by separating the names with a comma:

```cpp
int a = 5, b = 6; // copy initialization
int c( 7 ), d( 8 ); // direct initialization
int e { 9 }, f { 10 }; // brace initialization (preferred)
```



# Data Types



## **Bits, bytes, and memory addressing**

The smallest unit of memory is a **binary digit** (also called a **bit**), which can hold a value of 0 or 1. You can think of a bit as being like a traditional light switch -- either the light is off (0), or it is on (1).

Memory is organized into sequential units called **memory addresses** (or **addresses** for short). Similar to how a street address can be used to find a given house on a street, the memory address allows us to find and access the contents of memory at a particular location.

In modern computer architectures, each memory address holds 1 byte of data. A **byte** is a group of bits that are operated on as a unit. The modern standard is that a byte is comprised of 8 sequential bits.

The following picture shows some sequential memory addresses, along with the corresponding byte of data:

<img src="assets/MemoryAddress.PNG" style="zoom:110%;" />

Because all data on a computer is just a sequence of bits, we use a **data type** (often called a “type” for short) to tell the compiler how to interpret the contents of memory in some meaningful way. 

When you give an object a value, the compiler and CPU take care of encoding your value into the appropriate sequence of bits for that data type, which are then stored in memory (remember: memory can only store bits). For example, if you assign an integer object the value *65*, that value is converted to the sequence of bits `0100 0001` and stored in the memory assigned to the object.

Conversely, when the object is evaluated to produce a value, that sequence of bits is reconstituted back into the original value. Meaning that `0100 0001` is converted back into the value *65*.



## Fundamental Types

C++ comes with built-in support for many different data types. These are called **fundamental data types**, but are often informally called **basic types**, **primitive types**, or **built-in types**.

Here is a list of the fundamental data types, some of which you have already seen:

- Category
  - Floating Point
    - float
    - double
    - long double
  - Integral
    - Boolean
    - Char
    - Integer
      - short
      - int
      - long
      - long long
  - Null Pointer
  - Void

C++ also supports a number of other more complex types, called *compound types*.

Most modern programming languages include a fundamental `string` type (strings are a data type that lets us hold a sequence of characters, typically used to represent text). In C++, strings aren’t a fundamental type (they’re a compound type).
