#include<stdio.h>
// 1    8
//2     9
// 3    10
// 4    11
// 5    12
int main()
{
    auto int iStd = 0;

    printf("Enter your standard\n");
    scanf("%d",&iStd);

    if(iStd == 1)
    {
        printf("Your exam is at 8\n");
    }
    else if(iStd == 2)
    {
        printf("Your exam is at 9\n");
    }
    else if(iStd == 3)
    {
        printf("Your exam is at 10\n");
    }
    else if(iStd == 4)
    {
        printf("Your exam is at 11\n");
    }
    else if(iStd == 5)
    {
        printf("Your exam is at 12\n");
    }
    else
    {
        printf("Invalid standard\n");
    }

    return 0;
}
