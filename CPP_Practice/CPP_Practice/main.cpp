//
//  main.cpp
//  CPP_Practice
//
//  Created by Lee Davis on 5/15/21.
//

#include <cstdio>

int main()
{
    int x = 42;
    int * ip = &x;
    int & y = x;
    
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of ip is %d\n\n", *ip);
    
    y = 73;
    
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of ip is %d\n\n", *ip);
    
    int z = 7;
    ip = &z;
    
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of ip is %d\n", *ip);
    
    return 0;
}

/*
 What is C++?
 
 c with classes
 developed by Bjarne stroustrup
 extended from c
 consistently one of the top 5 ;anguages

 Apps
 OS
 Firmware

 STL - Standared Template library
 
 
 Tool Chain
 
 Compiled language
 
                            * Compiling *
 Source Code -> | Preprocessor -> Compiler -> Linker | -> Run (executable)
 
 --------------------------------------------------
 Parameters in main(int argc, const char * argv[])
 
 */

// Statments:
int statment()
{

    int x;
    x = 42;

    printf("x is %d\n", x);
    printf("x is %d\n", x = 73);
    
    return 0;
}

// Variables:
int variable()
{

    int i;
    i = 7;
    
    printf("value is %d\n", i);
    
    return 0;
}

// Pointers:
/*
 int x;
 x = 1;
 int y = x; // just assigns the value
 
 & = address operator
 
 int * ip;
 ip = &x; // assigns the address or refereance
 y = *ip; // copies the value to the reference of y
 */

int pointers()
{
    int x = 7;
    int y = 42;
    int * ip = &x;
    
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of ip is %d\n", *ip);
    
    x = 73;
    printf("The value of ip is %d\n", *ip);
    
    return 0;
}

// References:
// Cant change a reference
// Always const references

int references()
{
    int x = 42;
    int * ip = &x;
    int & y = x;
    
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of ip is %d\n\n", *ip);
    
    y = 73;
    
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of ip is %d\n\n", *ip);
    
    int z = 7;
    ip = &z;
    
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of ip is %d\n", *ip);
    
    return 0;
}
