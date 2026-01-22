# K&R C Solutions

This repository contains my personal solutions and experiments as I work through the classic book **"The C Programming Language" (2nd Edition)** by Brian Kernighan and Dennis Ritchie.

## Progress
- [ ] **Chapter 2:** Types, Operators, and Expressions (In Progress)

## Highlights

### Exercise 2-1: Variable Ranges
This program determines the ranges of various data types (char, short, int, long) using two methods:
1. **Standard Headers:** Utilizing `<limits.h>` and `<float.h>`.
2. **Direct Computation:** Calculating limits using bitwise operators like `~0` (NOT) and bit-shifting `>>`.

#### What I Learned:
* How to use specific format specifiers like `%lu` for unsigned long to avoid compiler warnings.
* The logic of **Two's Complement** and how bitwise operations interact with hardware memory limits.

## How to Run
To compile and run any exercise (e.g., Exercise 2-1):

bash:
gcc ex2_1.c -o ex2_1 && ex2_1
