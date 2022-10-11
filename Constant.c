#include<stdio.h>

int main()
{
    int No1 = 10;

    const int No2 = 10;

    No1++;  // Allowed
    // No2 ++;  Not Allowed

    printf("%d",No1);
    return 0;
}