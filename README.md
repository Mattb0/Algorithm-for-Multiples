# Multiples of 2, 3, 5 Algorithm in C++

## Overview

This algorithm generates a series of ascending numbers that are multiples of 2, 3, or 5. It considers numbers that can be factored by any combination of these three prime numbers.

## Example

Consider a series of ascending order that only consists of numbers that can be factored by any combination of 2, 3, and 5:
```
1 
2
3
4 = 2 * 2
5
6 = 2 * 3
8 = 2 * 2 * 2
9 = 3 * 3
10 = 2 * 5```

## Implementation

The algorithm generates the next multiple of 2, 3, and 5 in ascending order using a set to store unique multiples. It starts with the seed value of 1 and iteratively calculates the next multiple for each prime number.

## Usage

To use the algorithm, simply compile and run the provided C++ code. It prompts the user to enter the number of multiples to generate and prints the result in ascending order.
