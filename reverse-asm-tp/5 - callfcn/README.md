# Exercise 5: callfcn
This one is a bit more fun and shows off how simple it is to do some things that are relatively
complex in other languages with ASM.

In this exercise, you're going to code a function which can call any other function. Here's how it
works:
- The first `callfcn` argument is a pointer to the function `f` you should call
- The 2nd argument is the number of parameters
- The rest of the arguments are `f`'s arguments, in the right order

Your function should return whatever `f` returns.
