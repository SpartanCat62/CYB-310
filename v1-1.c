/*This code is sampled from: https://fresh2refresh.com/c-programming/c-programs/c-code-for-calculator-application/ */

#include<stdio.h> // includes header stdio
#include<conio.h> // includes header conio
#include<math.h>  // includes header math
#include<stdlib.h> // include header stdlib
#define SIZE 100 // Defines SIZE as 100

#define KEY "Enter the calculator Operation you want to do:" // defines key to be recalled later in code

void addition();  // creates function addition
void subtraction(); //creates function subtraction
void multiplication();  //creates function multiplication
void division(); // creates function division
void modulus();  // creates function modulus
void power();  // creates function power
int array(); // creates function array
int factorial(); // creates function factorial
void calculator_operations(); // creates function for calculator operations

/* This main function displays the operations a user can take
and then loads a function operation based on user input. After 
operation function is run it starts asking for user input to start 
a new one.*/

int main() 
{
    int X = 1;  // define x and declares it as 1
    char Calc_oprn;  // declares charater argument Calc_oprn

    calculator_operations(); // call calculator_operations

    while (X)  // start of while loop where you can choose operation functions to run
    {
        printf("\n");  // start a new line
        printf("%s : ", KEY);  // print KEY

        Calc_oprn = _getche();  //  defined calc_oprn

        switch (Calc_oprn)  // calls switch for Calc_oprn
        {
        case '+': addition(); // when user enters '+' run function addition
            break;  // break code

        case '-': subtraction();  // when user enters '-' run the function subtraction
            break;  // break code

        case '*': multiplication(); // when a user enters '*' run the function multiplication
            break;  // break code

        case '/': division(); // when a user enters '/' run the function division
            break;  // break code

        case '?': modulus(); // when a user enters '?' run the function modulus
            break;  // break code

        case '!': factorial(); // when a user enters '!' run the function factorial
            break;  // break code

        case '^': power(); // when a user enters '^' run the function power
            break;  // break code

        case '[': array(); // when a user enters '[' run the function array
            break;  // break code

        case 'H':  
        case 'h': calculator_operations(); // when user presses 'h' run the calculator_operations function
            break;  //break code

        case 'Q':
        case 'q': exit(0);  // when user precess 'q' exit program
            break;  // break code
        case 'c':
        case 'C': system("cls");  // when user presses 'c' clear text window
            calculator_operations();  // run calculator_operations
            break;  // break code

        default: system("cls");  // set default ssytem to cleared

            printf("\n**********You have entered unavailable option");  // prints that you didn't press the right hot-key
            printf("***********\n");
            printf("\n*****Please Enter any one of below available ");  // prints that you need to enter a following option
            printf("options****\n");
            calculator_operations();  // run function calculator_operations
        }
    }
}

/* Defines function calculator_operations with introduction text 
that explains what keys are hot-keys and what they do*/

void calculator_operations()
{

    printf("\n             Welcome to C calculator \n\n");  // prints welcome to using calculator

    printf("******* Press 'Q' or 'q' to quit "); // prints that pressing 'q' quits program
    printf("the program ********\n");  
    printf("***** Press 'H' or 'h' to display "); // prints that pressing 'h' displays the options
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");  // prints that pressing 'c' clears the screen
    printf(" display available option \n\n");

    printf("Enter + symbol for Addition \n");  // prints that pressing + launches addition operations
    printf("Enter - symbol for Subtraction \n"); // prints that pressing - launches subtraction operations
    printf("Enter * symbol for Multiplication \n"); // prints that pressing * launches multiplication operations
    printf("Enter / symbol for Division \n"); // prints that pressing / launches division operations
    printf("Enter ? symbol for Modulus\n"); // prints that pressing ? launches modulus operations
    printf("Enter ^ symbol for Power \n"); // prints that pressing ^ launches power operations
    printf("Enter [ symbol for Power \n"); // prints that pressing [ launches array operations
    printf("Enter ! symbol for Factorial \n\n"); // prints that pressing ! launches addition operations
}

/* This function is for the addition operation
allows for as many numbers to be added as the user wants*/

void addition() //starts addition function
{
    int n, total = 0, k = 0, number; // declares n, and number and defines total and k as 0
    printf("\nEnter the number of elements you want to add:"); // prints question on how many numbers are being added
    scanf_s("%d", &n); // scans for user's input and sets it as n
    printf("Please enter %d numbers one by one: \n", n); // prints question on what numbers are being added
    while (k < n)  // start of while statment that runs as long as k is less than n
    {
        scanf_s("%d", &number); // scans for user inputed number
        total = total + number; // adds the user number to toatl
        k = k + 1; // increases k by 1
    }
    
    printf("Sum of %d numbers = %d \n", n, total); // prints total
}
/* This is the subtraction operation function
onyl two numbers at a time*/

void subtraction() //starts subtraction function
{
    int a, b, c = 0; //declares a and b defines c
    printf("\nPlease enter first number  : "); // prints question for first number
    scanf_s("%d", &a); // scans for user input defines a
    printf("Please enter second number : "); //prints question for second number
    scanf_s("%d", &b); // scans for user input defines b
    c = a - b; // makes c equal to a - b
    printf("\n%d - %d = %d\n", a, b, c); // prints that a - b = c
}
/* This is the multiplication operation function
onyl two numbers at a time*/

void multiplication() // starts multiplcation function
{
    int a, b, mul = 0; // declares a, b, and defines mul as 0
    printf("\nPlease enter first numb   : "); // prints question for fisrt number
    scanf_s("%d", &a); // scans for user input defines a
    printf("Please enter second number: "); // prints question for second number
    scanf_s("%d", &b); // scans for user input defines b
    mul = a * b; // makes mul = a * b
    printf("\nMultiplication of entered numbers = %d\n", mul); // prints that the result of the multiplication are mul's value
}
/* This is the division operation function
onyl two numbers at a time*/

void division() // starts division function
{
    int a, b, d = 0; // declares a and b, declaes and defines d as 0
    printf("\nPlease enter first number  : "); // prints request for first number
    scanf_s("%d", &a); // scans for user input and defines a by it
    printf("Please enter second number : "); // print request for second number
    scanf_s("%d", &b); // scans for user input and defines b by it
    d = a / b; // makes d = a / b
    printf("\nDivision of entered numbers=%d\n", d); // prints the result of the division as d's value
}
/* This is the modulus operation function
onyl two numbers at a time*/

void modulus() // starts modulus function
{
    int a, b, d = 0; // declares a and b, declares and defines d as 0
    printf("\nPlease enter first number   : "); // prints request for first number
    scanf_s("%d", &a); // scans for user input and defines a by it
    printf("Please enter second number  : "); // prints request for second number
    scanf_s("%d", &b); // scans for user input and defines b by it
    d = a % b; // makes d = to a % b
    printf("\nModulus of entered numbers = %d\n", d); // prints the result of the modulud operation as d's value
}
/* This is the power operation function
only two numbers at a time*/

void power() // starts power operation function
{
    double a, num, p; // defines double a, num, and p
    printf("\nEnter two numbers to find the power \n"); // prints request for two numbers to be entered
    printf("number: "); // prints specification that first number is the base
    scanf_s("%lf", &a); // scans for user input and defines a by it

    printf("power : "); // prints specification that second number is the power
    scanf_s("%lf", &num); // scans for user input and defines num by it

    p = pow(a, num); // p = a to the power of num

    printf("\n%lf to the power %lf = %lf \n", a, num, p); // prints that a to the power of num as p's value
}
/*This is the array operation function
only put in a size in from 0 -100*/

int array() // Start array operation function
{
    int i, n, sum = 0; // defines i, n, and sum. Sum is equal to 0
    int data[SIZE]; // defines data as an array with SIZE as its size
    float mean; // defines float mean

    printf("\nEnter the number of data items: \n"); // prints out request to enter the amount of data items
    scanf_s("%d", &n); // scans for user input and defines n as it

    if (n > SIZE || n <= 0) // if function that activates if n is larger than SIZE or smaller than 0
    {
        printf("Error!!! Please enter the number in range of (0 - 100): "); // Print out error messaae and corerect instruction
        scanf_s("%d", &n); // scan for new user response and make n it
    }

    printf("Enter data:\n"); // printer request to enter all data
    for (i = 0; i < n; ++i) // for loop start
    {
        scanf_s("%d", &data[i]); // scan for user input and make it data array at position i
        sum += data[i]; // add sum and data[i] and make it equal sum
    }

    mean = sum / (float)n; // make mean equal to sum divided by float n
    printf("Mean: %.4f", mean); // print mean with mean equalling value of mean

    return 0; // finish function
}
/* This is the factorial operation function
onyl two numbers at a time*/

int factorial() // starts factorial operation function
{
    int i, fact = 1, num; // defines i and num, defines and declares fact as 1

    printf("\nEnter a number to find factorial : "); // prints request of number to be factorialed
    scanf_s("%d", &num); // cans for user input and declares it as num

    if (num < 0) // starts if statment to run if num  is less that 0
    {
        printf("\nPlease enter a positive number to"); // prints request to enter a positive number
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative"); // prints statment that factorials can only be done with positive number or 0
        printf(" values. It can be only positive or 0  \n");
        return 1; // end if statment
    }

    for (i = 1; i <= num; i++) // start for loop where i = 1, runs as long as i is less that or equal to num, i increaes by 1 every loop
        fact = fact * i; // makes fact equal to itslef times i
    printf("\n"); // prints new line
    printf("Factorial of entered number %d is:%d\n", num, fact); // prints that num's factorial is fact's value
    return 0; // end function
}