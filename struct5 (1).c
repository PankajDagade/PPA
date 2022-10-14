#include<stdio.h>

struct Demo
{
    int i;
    int j;
    float f;
};

union Hello
{
    int i;
    int j;
    float f;
};

int main()
{
    struct Demo dobj;
    union Hello hobj;

    dobj.i = 11;
    dobj.j = 21;

    hobj.i = 11;
    hobj.j = 21;

    printf("%d\n",sizeof(dobj));
    printf("%d\n",sizeof(hobj));

    printf("%d\n",dobj.i);      // 11
    printf("%d\n",dobj.j);      // 21
    printf("%d\n",hobj.i);      // 21
    printf("%d\n",hobj.j);      // 21
    return 0;
}














