# Lab 11 – Structures and Pointers
This folder contains solved problems from Lab 11 of the "Programming Fundamentals" course.
## Topics Covered
- Declaring structures and working with structure pointers
- Dynamic memory allocation for structures and their members
- -> operator usage to access structure members through pointers
- Nested structures and pointer-based operations
- Memory deallocation in structured programs
- Structure-pointers in function parameters and return types
- Managing arrays of structures dynamically
## Problems
### Part 1 – Complex Number Operations with Struct Pointers
#### Problem 1.1 – COMPLEX Structure Arithmetic
- Define structure COMPLEX with real and imag as members
- Functions to:
  - Add two complex numbers (returns pointer)
  - Multiply two complex numbers (returns pointer)
  - Conjugate of a complex number (returns pointer)
  - Compute modulus (returns double)
- Compute:
  - c1 = 2*z1 + 3.2*z2
  - c2 = (3.5*z1 + 1)*z2
  - c3 = z1 / z2
#### Problem 1.2 – Array of Complex Numbers
- Read an array of complex numbers via dynamic memory
- Compute:
  - Total sum of elements
  - Sum of even/odd-indexed elements and their ratio
  - Array of moduli
  - Array of arguments: arg(z) = arctg(imag / real)
#### Problem 1.3 – DATA Structure and Calendar Conversion
- Define DATA with day, month, year, and dayOfYear
- Two conversion functions:
  - From (day, month, year) → day of year
  - From (day of year, year) → (day, month)
- Use leap year check with (year % 4 == 0 && year % 100 != 0) || year % 400 == 0
#### Problem 1.4 – Integer Vector Structure (iVECTOR)
- Define structure iVECTOR:
  - Number of elements
  - Pointer to dynamically allocated array
- Functions:
  - Input and return iVECTOR
  - Display iVECTOR
  - Scalar product between two vectors
  - Sort iVECTOR ascending or descending
- Program to read, display, sort, and compute scalar product between two vectors
### Part 2 – Real Vector Structure and Advanced Sorting
#### Problem 2.1 – rVECTOR and Menu-Based Processing
- Define rVECTOR with:
  - Dynamically allocated name (char*)
  - Number of elements
  - Pointer to real-number array
- Program to:
  - Read name and values
  - Display all values with 3 decimals
  - Provide user menu:
    - a) Sort by numeric value
    - b) Sort by digit sum of integer part of absolute value
- Supports multiple datasets
### Part 3 – Personal Information Management
#### Problem 2.2 – PERSONAL Structure and Table Operations
- Define PERSONAL with:
  - char* name, char* surname, int age
- Use a dynamically allocated array of PERSONAL
- Program should:
  - Read data for n persons
  - Display a formatted table
  - Filter and display persons under 30 years old
  - Sort and display persons alphabetically by name
## Build Instructions
To compile and link programs using structure pointers:
```bash
clang -Wall -c structPointerUtils.c    # Utility functions for structured pointer operations
clang -Wall -c main.c                  # Main program
clang structPointerUtils.o main.o -o output
```
## Build with Makefile
- To build the project:
```bash
make
```
- To clean up build files:
```bash
make clean
```
