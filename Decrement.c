#include<stdio.h>

int main()
{
    int no1 = 10;
    int no2 = 10;
    int ans1 = 0;
    int ans2 = 0;

    ans1 = no1--;       // postdecrement
    printf("Value of ans1 %d\n",ans1);
    printf("Value of no1 %d\n",no1);

    ans2 = --no2;       // predecrement
    printf("Value of ans2 %d\n",ans2);
    printf("Value of no2 %d\n",no2);

    return 0;
}
// 10
// 9
// 9
// 9