#include<stdio.h>

void Demo()
{
    auto int i = 10;
    static int j = 10;

    i = i + 1;      // i++;
    j = j + 1;      // j++;

    printf("Value of i : %d\n",i);
  printf("Value of j : %d\n",j);
}

int main()
{
    printf("Inside main\n");

    Demo();
    Demo();
    Demo();
    Demo();

    return 0;
}

// register storage class
// Memory :    CPU register
// Default value : Garbage
// Scope : Local (Throughout the function)
// Lifetime : Local (Throughout the function)
