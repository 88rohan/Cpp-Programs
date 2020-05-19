#include<iostream>
using namespace std;
class A
{
    int a;
public:
    A()
    {

        a=0;
    }
    void show()
    {
        a++;
        cout<<"a: "<<a<<endl;
    }
};
class B:public A
{
    int a=15;
    public:

};

int main(int argc,char const *argv[])
{
 B b;
 b.show();
    return 0;
}
