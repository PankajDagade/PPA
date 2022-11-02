#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;    // Constant characterist

        Demo(int a, int b) : i(a),j(b)
        {
            // i = a;
            cout<< "Inside con";
        }
        void fun()
        {
            cout<<"Inside fun\n";
            i++;        // Allowed
            // j++;     //Not allowed
        }
        // b is a constant input argument
        void gun(int a, const int b) const      // constant function / behaviour
        {
            int x = 10;
            const int y = 20;       // Constant local variable

            cout<<"Inside gun\n";
           // i++;        // Not allowed
            /// j++;     // Not allowed

            x++;        // allowed
           //  y++;        // Not allowed

            a++;    // Allowed
           // b++;        // not allowed
        }
};

int main()
{
   
   const Demo obj2(11,21);

    obj1.fun();
    obj1.gun(10,20);

    obj2.fun();
    obj2.gun(10,20);

    return 0;
}
