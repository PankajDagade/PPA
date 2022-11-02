#include<iostream>
using namespace std;

class Demo
{
    public:
        // Addition@2ii
        int Addition(int no1,  int no2) // 1000
        {
            int ans = 0;
            ans = no1 + no2;
            return ans;
        }
        // Addition@3iii
        int Addition(int no1,  int no2,  int no3)   // 2000
        {
            int ans = 0;
            ans = no1 + no2 + no3;
            return ans;
        }
        // Addition@4iiii
        int Addition(int no1,  int no2, int no3, int no4)   // 3000
        {
            int ans = 0;
            ans = no1 + no2 + no3 + no4;
            return ans;
        }
};

int main()
{
    Demo obj;
    int ret = 0;

    // PUSH 10
    // PUSH 11
    // CALL 1000
    ret = obj.Addition(10,11);      // obj.Addition@2ii(10,11);
    cout<<ret<<"\n";

    // PUSH 10
    // PUSH 11
    // PUSH 21
    // CALL 2000
    ret = obj.Addition(10,11,21);   // obj.Addition@3iii(10,11,21);
    cout<<ret<<"\n";

    // PUSH 10
    // PUSH 11
    // PUSH 21
    // PUSH 51
    // CALL 3000
    ret = obj.Addition(10,11,21,51);    // obj.Addition@4iiii(10,11,21,51);
    cout<<ret<<"\n";

    return 0;
}


/*

    // Allowed

    // Changing number of arguments
    void fun(int , int);
    void fun(int , int , int);

    // Changing datatype of argument
    void fun(int , int);
    void fun(double, double);

    // Changing sequance of argument
    void fun(char, int, float);
    void fun(int , float, char);

    // Not allowed

    // Changing return value
    int fun();
    flloat fun();





*/























