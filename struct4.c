#include<stdio.h>

struct Demo
{
    const int i;
   const  int j;
};

int main()
{
    struct Demo obj = {11,21};

    printf("%d\n",obj.i);
    printf("%d\n",obj.j);

    // obj.i++; Not allowed

    return 0;
}














