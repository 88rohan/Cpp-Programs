#include<iostream>
using namespace std;
class complex
{
    int r1,r2,i1,i2,r,i;
public:
    complex()
    {
        cout<<"Enter real and imaginary parts of 1st complex number : ";
        cin>>r1>>i1;
        cout<<"Enter real and imaginary parts of 2nd complex number : ";
        cin>>r2>>i2;
    }
    void sum();
    void sub();
    void mul();
    void div();
};
void complex::sum()
{
    r=r1+r2;
    i=i1+i2;
    if(i>0)
    {
        cout<<"Addition : "<<r<<"+"<<i<<"i";
    }
    else
        cout<<"Addition : "<<r<<i<<"i";
}
void complex::sub()
{
    r=r1-r2;
    i=i1-i2;
    if(i>0)
    {
        cout<<"Subtraction : "<<r<<"+"<<i<<"i";
    }
    else
        cout<<"Subtraction : "<<r<<i<<"i";
}
void complex::mul()
{
    r=r1+r2;
    i=i1+i2;
    cout<<r<<"   "<<i;
}
void complex::div()
{
    r=r1+r2;
    i=i1+i2;
    cout<<r<<"   "<<i;
}
int main()
{
    complex C;
    C.sum();
    C.sub();
    return 0;
}
