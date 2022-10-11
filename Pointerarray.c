#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int *p = &(Arr[0]);
    int *q = &(Arr[4]);


    printf("Number of elements between q and p are %d\n",q-p);

    printf("Value of p %d\n",p);
    
    p = p + 3;

    printf("Value of p %d\n",p);

    printf("Value of q %d\n",q);

    q = q - 3;

    printf("Value of q %d\n",q);


    return 0;
}