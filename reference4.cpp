#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int *p = &no;

    int *(&q) = p;

    cout<<*q;

    return 0;
}
