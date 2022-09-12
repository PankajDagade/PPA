#include<stdio.h>

int no = 21;                // Global variable

void Demo()         // Function defination
{
    printf("Inside demo\n");
    // All the below 3 variables are local variables
    int i = 10;
    auto int j = 20;
    auto int k;
    printf("%d\n",k);
}

int main()
{
    int Value = 51;     // Local variable
    printf("Inside main\n");
    Demo();         // Function call

    return 0;
}

// auto storage class
// Memory :    Stack
// Default value : Garbage
// Scope : Local (Throughout the function)
// Lifetime : Local (Throughout the function)
