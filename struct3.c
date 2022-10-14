#include<stdio.h>

struct Demo
{
    int i;
    int j;
};

int main()
{
    const struct Demo obj = {11,21};

    printf("%d\n",obj.i);
    printf("%d\n",obj.j);
    
    return 0;
}














