# Data-Structures-and-Algorithms
This is a personal repository which contains Data Structures and Algorithms that I have implemented. They are as follows:

## Euclid's method for calculating the GCD of two numbers.
This is recursive implementation of Euclid's method for finding out the gcd of two numbers. It relies on the fact that the gcd of two numbers (say a and b) is equivalent to finding out the gcd of b and a%b. 

## Sieve of Erastosis
This is one of the oldest methods for finding out the first n primes. The algorithm works by eliminating all multiples of integers till the given last number n, so that you are left with only primes. For example, if you have to find the first 50 primes, you do so by eliminating multiples of all the primes which are less than 50 and for which prime * 2 <= 50. This algorithm has been implemented using an array in which all the values initialized to 1. Following this, for all index values which are non-primes, the corresponding array value is set to 0. Finally, the index values where the array still has a one are printed.

## Evaluation of a post fix expression.
This algorithm uses a pushdown stack to evaluate a mathematical expression which is written in the postfix form. The algorithm functions as follows:
If a number is encountered, this value is converted to int from char and pushed to the stack.
If an operator is encountered, the top most values are popped and the operation is performed on these two numbers. The resultant is pushed to the stack.
The resultant is popped from the stack.

## Josephus Problem.
This algorithm solves the classic Josephus problem using a circular linked list. The circular list is traversed and nodes deleted at the specific intervals. The last remaining node is the solution to the problem.

## Infix to Postfix conversion
This program converts a infix expression to a postfix expression. A pushdown stack and a postfix array is used for the implementation.
