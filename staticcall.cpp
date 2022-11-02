#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;            // instance variable    (Non static)
        static int x;    // Class variable      (Static)

        Demo(int a = 10, int b = 20)
        {
                cout<<"Inside constructor\n";

                this->i = a;
                this->j = b;
        }

        // void fun(Demo *this, int no)
        void fun(int no)
        {
            cout<<"Inside non static fun\n";
            cout<<this->i<<"\n";
            cout<<this->j<<"\n";
        }

        // static void gun(int value)
        static void gun(int value)
        {
            cout<<"Inside static gun\n";
            // cout<<this->i<<"\n";     // Error
        }
};

int Demo::x = 30;

int main()
{
    cout<<Demo::x<<"\n";
    Demo::gun(11);

    return 0;
}
