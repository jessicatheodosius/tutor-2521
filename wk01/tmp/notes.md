# Week 1 Tut

### Question 2

a. it's fine for one-liners
b. convert string to int
c. `atoi(argv[1])`
d. asserts
    - argc > 1: there is at least one argument (aside from the program itself)
    - N > 0: the argv[1] must be a positive number
e. a[0] and a[1] are garbage values, can't rely on their values
f. we know 0 and 1 are not prime
g. find prime number less than argv[1]

### Question 3

- argc: number of arguments (including the program itself)
- argv: array that contains the argument as strings
- stdin: standard input, input stream from user
- stdout: standard output, output stream for normal program output, e.g. from `printf`
- stderr: standard error, output stream for error messages, e.g. from `assert`
- exit: terminate process, you can provide the exit status, do `EXIT_SUCCESS` or `EXIT_FAILURE`from `<stdlib.h>`

### Question 4

a. argc = 4, argv = {"./myprog", "hello", "there,", "John Shepherd"}
b. myFile
c. stdin (try with < q4.in)

### Question 5

a. won't compile
b. compile, same as d
c. compile, same as f
d. b
e. undefined behaviour
f. f
g. printed but to stderr
