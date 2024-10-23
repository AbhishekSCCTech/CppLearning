## Problem Definition
**Postfix Expression Evaluation**: Write a C++ program to evaluate a postfix expression using a stack. Handle different types of operations and operands.

## Solution
The solution uses a class `PostfixEvaluator` that processes the expression character by character:
- Digits are pushed onto the stack.
- Operators pop two elements from the stack, apply the operator, and push the result back.
- The result is the final element in the stack.

## Learning
- Using stacks for postfix evaluation.
- Applying basic arithmetic operations using operators.

## Output
