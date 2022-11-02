#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;
        Base()
        {
            cout<<"Inside base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside base destructor\n";
        }
        void fun()
        {
            cout<<"Inside base fun\n";
        }
};
class Derived : public Base     // Derived is a class which derived from Base class
{
    public:
        int i,j;
    Derived()
    {
        cout<<"Inside derived constructor\n";
    }
    ~Derived()
    {
        cout<<"Inside derived destructor\n";
    }
    void gun()
    {
        cout<<"Inside derived gun\n";
    }
};

int main()
{
    Derived dobj;

    cout<<sizeof(Base)<<"\n";       // 8
    cout<<sizeof(Derived)<<"\n";    // 16

    dobj.fun();
    dobj.gun();

    return 0;
}
