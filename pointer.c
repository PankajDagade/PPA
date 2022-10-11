#include<stdio.h>

int main(){

    char cValue = 'M';
    char *cPtr = &cValue;

    int iValue = 21;
    int *iPtr = &iValue;

    float fValue = 10.11;
    float *fPtr = &fValue;

    double dValue = 20.11;
    double *dPtr = &dValue;

    printf("%c\n",*cPtr);
    printf("%d\n",&cValue);
    printf("%d\n",cPtr);
    printf("%d\n",sizeof(cValue));
    printf("%d\n",sizeof(cPtr));
    printf("%d\n",sizeof(*cPtr));
    printf("%d\n",sizeof(iPtr));


/*
iValue          21
cValue          M
dValue      20.11
fValue         10.11
&iValue         200
&dValue         400
&fValue         300
&fPtr           700
&iPtr           600
*dPtr           20.11
*iPtr            21
*cPtr           M
*fPtr           10.11

*/






    return 0;
}
















