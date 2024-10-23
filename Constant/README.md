## Problem Definition
Demonstrate the difference between constant pointers (`const int*`) and pointers to constants (`int* const`). Show how they behave when trying to modify either the pointer or the value it points to.

## Solution
- **Constant Pointer (`const int*`)**: A pointer that cannot modify the value it points to.
- **Pointer to Constant (`int* const`)**: A pointer that cannot change the address it points to, but can modify the value.

The `ConstToPointerExample` method demonstrates `const int*`, while `PointerToConstExample` demonstrates `int* const`.

## Learning
- `const int*` prevents modification of the pointed value.
- `int* const` allows value modification but prevents changing the pointer's address.

## Output
