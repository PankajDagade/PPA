#include<stdio.h>

struct Hello        // Outer structure
{
    float f;
    int no;
    struct Demo
    {
        int i;
        int j;
    }dobj;
};

int main()
{
    struct Hello hobj;

    hobj.f = 10.11;
    hobj.no = 11;
    hobj.dobj.i = 21;
    hobj.dobj.j = 51;

    printf("%d\n",hobj.dobj.i); // 21
    printf("%d\n",sizeof(hobj));    // 16
    return 0;
}














