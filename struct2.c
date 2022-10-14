#include<stdio.h>
#pragma pack(5)
struct Demo
{
    int i;
    char ch;
    float f;
    int j;
 };

int main()
{
    printf("%d\n",sizeof(struct Demo));

    return 0;
}














