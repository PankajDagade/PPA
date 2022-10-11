#include<stdio.h>

void fun1();  //prototype
int a = 50;
int main()
{
       // int a = 1;
        fun1();  // Function calling 
        {
                int a = 10;
                printf("Inside block1 : %d\n",a);
        }
        {
                printf("Inside block2 : %d\n",++a);
        }
        printf("Inside main %d",a);

        return 0;
}
void fun1()  // function Defination
{
        int a = 23;
        printf("Inside fun1 : %d\n",a);
}