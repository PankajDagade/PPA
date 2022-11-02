#include<iostream>
using namespace std;

// public private
class Demo
{
        int i;
    public:
        int x;
     private:
        int y;
     public:
        Demo()
        {
            x = 10;
            y = 20;
            i = 30;
        }

        void fun()
        {
            cout<<"Inside public fun\n";
            cout<<y;        // Allowed
            gun();
         }
    private:
        void gun()
        {
            cout<<"Inside private gun\n";
            cout<<y;        // Allowed
        }
};


int main()
{
    Demo obj;

    cout<<obj.x<<"\n";      // ALLOWED
//    cout<<obj.y<<"\n";      // NOT ALLOWED
//    cout<<obj.i<<"\n";      // NOT ALLOWED

    obj.fun();                      // ALLOWED
//    obj.gun();                      // NOT ALLOWED

    return 0;
}
