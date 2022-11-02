#include<stdio.h>

// 0 to 10      100
// 10 to 40     500
// 40 to __     300

int main()
{
    auto int iAge = 0;

    printf("Enter your age \n ");
    scanf("%d",&iAge);

    if((iAge >= 0) && (iAge <= 10))
    {
        printf("Your ticket amout is : 100\n");
    }
    else if((iAge > 10) && (iAge <= 40))
    {
        printf("Your ticket amout is : 500\n");
    }
    else if(iAge > 40)
    {
          printf("Your ticket amout is : 300\n");
    }

    return 0;
}
