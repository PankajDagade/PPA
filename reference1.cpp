#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &x = no;

    int *p = &no;

    return 0;
}

//  no                  11
//  &no                 100
//  x                       11
//  &x                  100
//  p                   100
//  &p                      200
//  *p                      11
//  sizeof(no)          4
//  sizeof(x)           4
// sizeof(p)            8
