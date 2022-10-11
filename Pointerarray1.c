#include<stdio.h>







int main()
{
    int Arr[5] = {10,20,30,40,50};

    int *p = &(Arr[0]);
    int *q = &(Arr[4]);

    printf("Value of p before increment is %d\n",p);
    p++;
    // p = p + 1
    // p = p + 1 * sizeof(int)
    // p = p + 1 * 4
    // p = p + 4
    // p = 100 + 4
    // p = 104
    printf("Value of p after increment is %d\n",p);

    printf("Value of q before decement is %d\n",q);
    q--;
    // q = q - 1
    // q = q - 1 * sizeof(int)
    // q = q - 1 * 4
    // q = q - 4
    // q = 116 - 4
    // q = 112
    printf("Value of q after decrement is %d\n",q);

    return 0;
}