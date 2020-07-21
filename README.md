# Guessing Game

## The Problem

The user picks a number between 0 and 100, inclusive. 
The program then guesses this number in a finite amount of tries (*not* by randomly guessing).

The user inputs whether the guessed number was correct or not. If the guess was wrong, 
the user states whether his number was larger or smaller than the guess.

## The Approach

The approach here is a binary search. This means that the target array of numbers (0 to 100, inclusive)
is divided into two halves and the midpoint is chosen as the guess. Then, depending on the user's 
choice, it the interval moves to the new interval of possible guesses that are in the "known" range.

For example, given that we figured out that the user's number is less than 50 and larger than 25,
we can pick a new interval of 25 to 50, not including the bounds. A new midpoint in this interval is 
then chosen and the process repeats.

## The Solution

**Do not read** this unless you have solved it yourself first. If you're stuck, try taking some time to 
do something else and come back to it. 

A solution in C++ is in the `main.cpp` file in this repository. 

## Testing The Solution

To test whether the program works, we can try reaching the following numbers:

- 0
- 100
- 99
- 1
- 2 
- 50
- 49

These numbers cover most extreme cases and should be reachable. If the starting bounds are off-by-one,
reaching 0 or 100 will likely fail. If 1, 2 or 99 are not reachable, it is likely due to a rounding 
error (for example doing integer division too liberally / floating point division not enough).

## What We Learned

This teaches about the use of loops, if/else statements and, possibly (depending on implementation), 
nested if/else or even nested loops. It probably brought up some issues with input/output ("how do you ask the
user for this?"). 

Simple arithmetic and algorithmic thinking are also used here. 

## In Conclusion

This is a wonderful problem to teach beginner programmers that know the language but might
struggle to employ it correctly in edge case situations! 
