#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function name :    Addition
// Input :                  Two integers
// Output :                Integer
// Description :          It is used to perform addition
// Author :                Piyush Manohar Khairnar
// Date :                   05/03/2022
//
////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    auto int iAns = 0;

    iAns = iNo1 + iNo2;
    return iAns;
}

///////////////////////////////////////////////////////
//  Entry point function of addition application
//////////////////////////////////////////////////////

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto int iRet = 0;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf("%d",&iValue2);

    iRet = Addition(iValue1, iValue2);

    printf("Addition is : %d\n", iRet);
    return 0;
}
