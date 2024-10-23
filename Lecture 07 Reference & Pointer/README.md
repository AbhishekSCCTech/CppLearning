## Problem Definition
The task is to compare the behavior of pointers and references in C++. This simple example modifies an integer value using both pointers and references to demonstrate how each behaves.

## Solution
We created a `Comparison` class with two methods:
- `modifyWithPointer`: Modifies the integer value through a pointer.
- `modifyWithReference`: Modifies the integer value through a reference.

In the `main` function, we use both methods to show how pointers and references operate differently.

## Learning
- **Pointers** require dereferencing to modify the value and can point to different memory locations.
- **References** are aliases that cannot be reassigned but can modify the original value directly without dereferencing.

## Output
