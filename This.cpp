#include<iostream>

using namespace std;

class Demo
{
    public:
        int x;      // Characteristics
        int y;      // Chaeracteristics

    Demo(int a = 10, int b = 20)
    {
        x = a;
        y = b;
    }
};

int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,21);

    return 0;
}
