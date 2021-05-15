//
//  main.cpp
//  CPP_Practice
//
//  Created by Lee Davis on 5/15/21.
//

#include <cstdio>

int main() {
    
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

// Primative Array
// items must stay the same type
// [item, item, item]

/*
        Size of the array
        V
 int ia[5];
    index
    V
 ia[0] || int *ip = 1;
 int *ip = ia;
 
 incremening value:
 ++ip
 
 int ia[5] = { 1, 2, 3, 4, 5 };
 */

int array()
{
    int array [] = {1, 2, 3, 4, 5};
    
    int x = array[2];
    
    printf("x is %d\n", x);
    array[2] = 47;
    
    for(int i : array) {
        printf("%d ", i);
    }
    
    return 0;
}

// Primative Strings
int strings()
{
    char s[] = { 'S', 't', 'r', 'i', 'n', 'g' };

    for(int i = 0; s[i] != 0; ++i) {
        printf("char is %c\n", s[i]);
    }
    
    printf("\n\n");
    
    for(char * cp = s; *cp != 0; ++cp) {
        printf("char is %c\n", *cp);
    }
    //    printf("s is %s\n", s);
    
    return 0;
}

// conditionals
int conditional()
{
    
    int x = 42;
    int y = 90;
    
    printf("value is %d\n", x < y);
    
    if (x > y) {
        puts("condition is true");
    } else {
        puts("condition is false");
    }
    
    return 0;
}

// branching conditionals

int switches()
{
    const int iONE = 1;
    const int iTWO = 2;
    const int iTHREE = 3;
    const int iFOUR = 4;
    
    int x = 3;
    
    switch(x) {
        case iONE:
            puts("one");
            break;
        case iTWO:
            puts("two");
            break;
        case iTHREE:
            puts("three");
            break;
        case iFOUR:
            puts("four");
            break;
        default:
            break;
    }
    
    return 0;
}

// whileLoop
int whileLoop()
{
    int array[] = { 1, 2, 3, 4, 5 };
    int i = 0;
    
    while(i < 5) {
        if (i == 2) {
            ++i;
            continue;
        }
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }
    
    
    do {
        printf("%i", i);
    } while (i < 5);
    
    return 0;
}

// itorating with for

int forLoop()
{
    char s[] = "string";

    for(char * p = s; *p; ++p) {
        printf("char us %c\n", *p);
    }

    int array[] = { 1, 2, 3, 4, 5 };

    for(int i = 0; i < 5; ++i) {
        printf("element %d is %d\n", i, array[i]);
    }
    
    return 0;
}

// Range basd for loop for less code
int rangeBasedForLoop()
{
    int array[] = { 1, 2, 3, 4, 5 };

    for(int i : array) {
        printf("i is %d\n", i);
    }
    
    char s[] = "string";
    
    printf("\n\n");
    
    for(char c : s) {
        if (c == 0) break;
        printf("c is %c\n", c);
    }
    
    return 0;
}

// Structures
struct S {
   int i;
   double d;
   const char * s;
};

int structures() {
   S s1 = { 3, 47.9, "string one" };
//    s1.i = 3; // etc is another way
   
   printf("s1: %d, %f, %s\n", s1.i, s1.d, s1.s);
   
   
   
   return 0;
}


// Functions

void funcName() {
    printf("this is a function()");
}

void funcName(int i, const char * s) {
    printf("this is a function with (%i, %s)\n", i, s);
}


int func() {
    puts("This is in main");
    funcName();
    funcName(47, "string");
    
    return 0;
}

// Class

class C {
private:
    int i = 0;
public:
    void setValue(int value) {
        i = value;
    }
    int getValue() {
        return i;
    }
};

int usingAClasses() {
    int i = 47;
    C ol;

    ol.setValue(i);

    printf("value is %d\n", ol.getValue());
    
    return 0;
}

