#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo() : j(20)
        {
            i = 10;
            // j = 20;
        }

        Demo(int a, int b) :i(a), j(b)
        {
            cout<<"Inside parametrised\n";
        }
};

int main()
{
   Demo obj(11,21);

   cout<<obj.i<<"\n";
   cout<<obj.j<<"\n";

   obj.i++;
    // obj.j++;
   cout<<obj.i<<"\n";

    return 0;
}
