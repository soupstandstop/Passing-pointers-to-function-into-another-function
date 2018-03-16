# Passing-pointers-to-function-into-another-function
This assignment alllows you to practice passing pointers to function into
another function. Write a complet program to do the following:
1. Assume there is a function declared as (1) double power(double, int)
that calculates x
n
if we call power(x, n), a function declared as (2)
double multiply(double, int) that calculate x*n if we call multiply(x, n),
and a function declared as (3) double divide(double, int) that calculate
x/n if we call divide(x, n), where x must be double and n be integer.
2. Write a function double powerpower(…) that can compute (x*n)^m, (x*n)m, (x/n)m, where powerpower() must use four parameters: a
pointer to function, one double and two integers.
3. Also remember to write functions divide(), multiply() and power()
4. use typedef to define a new type F which is a pointer to function
5. When executing your program, you can choose the values for x, n, andm by using argc and argv.
6. write the documentation
# Requirement:
(1) Write functions divide(), multiply() and power() as described.
(2) Write a function double powerpower(…) as described.
(3) Use argv[2] ~ argv[4] to input x, n, m.
(4) Use argv[1] to represent which function(divide or multiply or power)
will be chosen and pass to powerpower(…) .
“0” : choose power()
“1” : choose multiply()
“2” : choose divide()
(5) print the result to the screen.
# Example:
> ./hw8 0 2 3 4 ( compute (2^3)^4 )
> ./hw8 1 2 3 4 ( compute (2*3)^4 )
> ./hw8 2 2 3 4 ( compute (2/3)^4 )
# Command line:
> ./hw8 [0-2] [x] [n] [m] 2 2
# Output:
Output the result of functions mentioned above to the screen.
If result is a double number, use “ %.6lf ” as format to print it.
(Note: Don’t print any unnecessary message to screen, thank you.)
# For example:
> ./hw8 0 2 3 4
4096
> ./hw8 1 2 3 4
1296
> ./hw8 2 2 3 4
0.197531 
