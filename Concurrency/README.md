# Producer-Consumer Problem 

## Problem Definition
The Producer-Consumer problem involves two threads where one (producer) generates data and the other (consumer) processes it. This example uses a simple atomic flag to indicate when data is ready.

## Solution
The `ProducerConsumer` class manages producing and consuming data. The producer generates numbers from 1 to 5 and signals when data is available. The consumer checks this signal and prints the data.

## Learning
This implementation illustrates how to work with threads and atomic variables in C++, providing a foundation for understanding concurrency.

## Output
The output will show the produced and consumed numbers in sequence:

