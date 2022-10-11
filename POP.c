// Accept two numbers and perform addition and sustraction

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    auto int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

int Substraction(int iNo1, int iNo2)
{
    auto int iAns = 0;
    iAns = iNo1 - iNo2;
    return iAns;
}

int main()
{
    auto int iValue1 =0, iValue2 = 0, iRet = 0;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf("%d",&iValue2);

    iRet = Addition(iValue1,iValue2);
    printf("Addition is : %d\n",iRet);

    iRet = Substraction(iValue1, iValue2);
    printf("Substration is : %d\n",iRet);

    return 0;
}

// Function
// Method
// Procedure
// API      Application Programming Interface

