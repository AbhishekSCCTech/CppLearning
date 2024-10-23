# Problem Definition
Create a program that converts a raw pointer to a smart pointer (`std::unique_ptr` or `std::shared_ptr`) to ensure safe memory management.

## Solution
A raw pointer is created and initialized with an integer value. It is then converted into a `std::unique_ptr` to manage the resource automatically, ensuring that the memory is safely released when the pointer goes out of scope.

## Learning
- `std::unique_ptr` ensures safe memory management by automatically releasing the resource.
- Raw pointers should be avoided in favor of smart pointers to prevent memory leaks and dangling pointers.

## Output
