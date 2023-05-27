# s21_math  

Implementation of your own version of the math.h library.  

The russian version of the task can be found in the repository.

## Contents
1. [Chapter I](#chapter-i) \
   1.1. [Introduction](#introduction)
2. [Chapter II](#chapter-ii) \
   2.1. [Information](#information)
3. [Chapter III](#chapter-iii) \
   3.1. [Part 1](#part-1-implementing-the-mathh-library-functions)

## Chapter I  

## Introduction

In this project i will develop my own version of the standard math.h library in the C programming language. This library implements basic mathematical operations, which are then used in various algorithms. As part of the project you will learn the basics of computational methods and solidify knowledge of structured programming.

## Chapter II

## Information

C mathematical operations are a group of functions in the standard library of the C programming language implementing basic mathematical functions. All functions use floating-point numbers in one manner or another. Different C standards provide different, albeit backwards-compatible, sets of functions. Any functions that operate on angles use radians as the unit of angle.

### Overview of some "math.h" functions

| No. | Function | Description |
| --- | -------- | ----------- |
| 1 | `int abs(int x)` | computes absolute value of an integer value |
| 2 | `long double acos(double x)` | computes arc cosine |
| 3 | `long double asin(double x)` | computes arc sine |
| 4 | `long double atan(double x)` | computes arc tangent |
| 5 | `long double ceil(double x)` | returns the nearest integer not less than the given value |
| 6 | `long double cos(double x)` | computes cosine |
| 7 | `long double exp(double x)` | returns e raised to the given power |
| 8 | `long double fabs(double x)` | computes absolute value of a floating-point value |
| 9 | `long double floor(double x)` | returns the nearest integer not greater than the given value |
| 10 | `long double fmod(double x, double y)` | remainder of the floating-point division operation |
| 11 | `long double log(double x)` | computes natural logarithm |
| 12 | `long double pow(double base, double exp)` | raises a number to the given power |
| 13 | `long double sin(double x)` | computes sine |
| 14 | `long double sqrt(double x)` | computes square root |
| 15 | `long double tan(double x)` | computes tangent |  


## Chapter III

## Part 1. Implementation of math.h library functions

Only those functions of the math.h library that are directly described [above] are implemented (#overview-of-some-functions-mathh):

- The library should be developed in the C language of the C11 standard using the gcc compiler 
- The library code should be located in the src folder in the develop branch  
- Do not use outdated and disused language constructs and library functions. Pay attention to the legacy and obsolete marks in the official documentation on the language and the libraries used. Focus on the POSIX.1-2017 standard
- When writing code, you must adhere to Google Style
- Design the solution as a static library (with the header file s21_math.h)
- The library should be developed in accordance with the principles of structural programming, code duplication should be excluded
- Use prefix s21 before each function_
- Prepare a full coverage of the library functions with unit tests using the Check library
- Unit tests should check the results of your implementation by comparing it with the implementation of the standard math.h library
- Unit tests must cover at least 80% of each function
- The gcov_report goal should generate a gcov report in the form of an html page. To do this, unit tests must be run with gcov flags.  
- Provide a Makefile for building the library and tests (with the goals of all, clean, test, s21_math.a, gcov_report)  
- It is forbidden to copy the implementation and use the standard math.h library everywhere except for unit tests  
- It is necessary to observe the logic of the standard library (in terms of checks, working with memory and behavior in emergency situations - tests will help here)
- Total verifiable accuracy - 16 significant digits
- The verifiable accuracy of the fractional part is a maximum of 6 decimal places.