# Reference as Return Type

## Problem Definition:
This program demonstrates how to use a function that returns a reference to an element in an array. It ensures that the lifetime of the array is managed correctly and demonstrates safe access to the array elements.

## Solution:
A class named `ArrayReference` is created, which manages a dynamically allocated array. The method `GetElement` returns a reference to an element, allowing safe modifications.

### Key Features:
- Returns a reference to an array element for direct access.
- Ensures proper memory management with a destructor.

## Learning:
- Understanding how references can be used to access and modify array elements safely.
- Learning about dynamic memory allocation and its management in C++.

## Output:
