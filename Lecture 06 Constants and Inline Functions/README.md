# Problem: Inline Functions vs Macros

## Problem Definition
Create a program that uses both a macro and an inline function to compute the area of a circle. Compare the behavior, efficiency, and pitfalls between these two approaches.

## Solution
We define a macro to compute the area of a circle and compare it with an inline function in a `Circle` class. The program shows how macros lack type safety and are prone to errors compared to inline functions.

## Learning
- **Macros**: Do not perform type checks, and can cause unexpected behavior due to operator precedence.
- **Inline Functions**: Offer better safety and optimization as they are type-checked and interpreted by the compiler, reducing pitfalls like multiple evaluations.

## Output
