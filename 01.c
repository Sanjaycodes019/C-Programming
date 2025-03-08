#include <stdio.h>

    /* 
    int -> whole numbers (4 bytes)  ( 1 bytes = 8 bits )
    float -> decimal numbers (4 bytes)
    double -> more precise decimal (8 bytes)
    char -> single character (1 bytes)
    long -> big integers (8 bytes)

    variable: a box to store data
    declaration: data_type data_name = data_value;
    example: int a = 10;
    char a = 's';

    naming rule of variable: no space, no number at start, so speical character

    int x = 10;
    x = 20;

    const : a value that never changes


    taking input:

    scanf("format_specifier", &variable);

    &(ampersand) -> gives the memory address of the variable

    
    int age;
    printf("Enter your age: "); // output
    scanf("%d", &age); // taking input

    printf("your age is: %d\n", age);


-> different types of input

int(integer) -> %d
float(decimal number) -> %f
char(single character) -> %c
double(large decimal number) -> %lf
string(multiple character) -> %s


What are Operators?

symbols that perform operations on variable and values.

int sum = 10 + 3;
 + operator that adds 10 and 3

 types:

 Arithmetic: +, -, *, /, % -> math operations
 Relational: ==, !=, >, <, >=, <=  -> value comparision
 Assignment: =, +=, -=, *=, /=, %= -> value assign
 increment/ decrement: ++ , --
 sizeof() -> finds memory size

 
 Conditonal statements

 if : executes code if a condition is true.
 if-else : executes one block of code if true, another if false.
 swith: selects one block from multiple options 

*/
int main(){
    
    int marks = 90;

    if (marks >= 90) {
        printf("Grade: A\n");
    } 

    else if (marks >= 75) {
        printf("Grade: B\n");
    }

    else if (marks >= 50) {
        printf("Grade: C\n");
    } 
    
    else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
