// Project 3 Functions and Scope.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Function Prototypes
// 
// Lesson 1 part 1: Function Definition and Calling
void sayHello();

// Lesson 1 part 2: Parameterized Function
int intAdd( int intA, int intB );

// Lesson 2 part 1: Parameters, Return Values, Overloading
double dblAdd( double dblA, double dblB );

// Lesson 2 part 2: Scope
void scopeExample();

// Lesson 3 part 1: Recursion Basics
int intFactorial( int intN );

// Lesson 3 part 2: Recursion Challenge
int intFibonacci( int intF );

int main()
{
    // ---------------------------------------------------------------------------
    // Lesson 1: Function Definition and Calling
    // ---------------------------------------------------------------------------     
    // ---------------------------------------------------------------------------    
    // Part 1: Define and Call Functions    
    // ---------------------------------------------------------------------------
    sayHello();
    std::cout << std::endl;

    // ---------------------------------------------------------------------------    
    // Part 2: Parameters and Return Values    
    // ---------------------------------------------------------------------------
    int intResult = intAdd( 5, 3 );

    std::cout << "5 + 3 = " << intResult << std::endl;

    // ---------------------------------------------------------------------------
    // Lesson 2: Parameters, Return Values, Overloading, and Scope
    // ---------------------------------------------------------------------------     
    // ---------------------------------------------------------------------------    
    // Part 1: Parameters, Return Values, Overloading    
    // ---------------------------------------------------------------------------
    double dblResultDouble = dblAdd( 5.5, 3.5 );
    std::cout << "5.5 + 3.5 = " << dblResultDouble << std::endl;

    // ---------------------------------------------------------------------------
    // Part 2: Scope
    // ---------------------------------------------------------------------------
    scopeExample();

    // ---------------------------------------------------------------------------
    // Lesson 3: Recursion Basics 
    // ---------------------------------------------------------------------------
    // ---------------------------------------------------------------------------
    // Part 1: Recursive Function to Calculate Factorial
    // ---------------------------------------------------------------------------
    std::cout << "Factorial of 5 is " << intFactorial(5) << std::endl;

    // ---------------------------------------------------------------------------
    // Part 2: Recursive Function to Calculate Fibonacci Numbers
    // ---------------------------------------------------------------------------
    std::cout << "Fibonacci of 10 is " << intFibonacci(10) << std::endl;

    return 0;
}

// Function Definitions

// Lesson 1: Part 1
void sayHello()
{
    std::cout << "Hello, this is a function!" << std::endl;
}

// Lesson 1: Part 2
int intAdd(int intA, int intB)
{
    return intA + intB;
}

// Lesson 2: Part 1 Overloaded Function
double dblAdd( double dblA, double dblB ) 
{
    return dblA + dblB;
}

// Lesson 2: Part 2 Scope
void scopeExample() 
{
    int intX = 10; // intX is in scope within this function
    {
        int intY = 20; // intY is in scope within this block
        std::cout << "x inside block: " << intX << std::endl;
        std::cout << "y inside block: " << intY << std::endl;
    }

    // intY is out of scope here
    std::cout << "x outside block: " << intX << std::endl;

    // std::cout << intY << std::endl; // Example would cause error since intY is out of scope 
}

// Lesson 3: Part 1 Recursive Function to Calculate Factorial
int intFactorial( int intN ) 
{
    if ( intN <= 1 ) return 1;
    {
        return intN * intFactorial( intN - 1 );
    }
}

// Lesson 3: Part 2 Recursive Function to Calculate Fibonacci Numbers
int intFibonacci( int intF ) 
{
    if ( intF <= 1 ) return intF;
    return intFibonacci( intF - 1 ) + intFibonacci( intF - 2 );
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
