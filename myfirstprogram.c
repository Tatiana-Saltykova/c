
/*
Code Explanation:
#include: This is a preprocessor directive in C.
It tells the compiler to include the contents of a specified file before actual compilation starts.

<stdio.h>: This is the standard input-output header file in C.
It contains declarations for input-output functions such as printf and scanf.
The .h extension in C programming stands for "header" file.

print: Indicates that the function is used for printing output.
f (formatted): Indicates that the function allows for formatted output, meaning you can include format specifiers within the string to control how the output is displayed.
For example:
In this example:
%s is a format specifier for a string.
%d is a format specifier for an integer.

In C, the main function typically returns an integer value (a status code) to the operating system.
This return value is used to indicate whether the program executed successfully or encountered an error.
The convention is:
return 0;: Indicates that the program executed successfully.
Non-zero return values: Indicate that an error occurred.
*/

#include <stdio.h>

int main() {
    printf("Hello World!\n\n");

    int myNum = 15;
    myNum = 20;
    float myFloatNum = 5.99;
    char myLetter = 'D';

    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    int myNum1;
    myNum1 = 151;

    printf("My num %d\n", 25);
    printf("My char %c\n", 'D');

    int a = 1;
    int b = 5;
    int c;
    a = b;
    c = b;

    int sum = a + b + c;
    printf("%d\n", sum);

    printf("%d\n", a);
    printf("%d\n", c);

    printf("\nHave a good day!\n");
    return 0;
}


















