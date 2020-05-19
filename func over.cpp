#include<iostream>
using namespace std;
class complex
{
    float r,i;
public:
    void get_data()
    {
        cout<<"Enter real and imaginary parts of complex number : ";
        cin>>r>>i;
        cout<<endl;
    }
    void put_data()
    {
            if(i>0)
        {
            cout<<r<<"+"<<i<<"i";
        }
        else
            cout<<r<<i<<"i";
    }
    friend complex operator +(complex,complex);
    friend complex operator -(complex,complex);
    complex operator *(complex);
    complex operator /(complex);
};
complex operator +(complex c1,complex c2)
{
    complex t;
    t.r=c1.r+c2.r;
    t.i=c1.i+c2.i;
    cout<<"Addition : ";
    return t;
}
complex operator -(complex c1, complex c2)
{
    complex t;
    t.r=c1.r-c2.r;
    t.i=c1.i-c2.i;
    cout<<"\nSubtraction : ";
    return t;
}
complex complex::operator *(complex c1)
{
    complex t;
    t.r=r*c1.r-i*c1.i;
    t.i=i*c1.r+r*c1.i;
    cout<<"\nMultiplication : ";
    return t;
}
complex complex::operator /(complex c1)
{
    complex t;
    float z;
    t.r=r*c1.r+i*c1.i;
    t.i=i*c1.r-r*c1.i;
    z=c1.r*c1.r+c1.i*c1.i;
    t.r=t.r/z;
    t.i=t.i/z;
    cout<<"\nDivision : ";
    return t;
}
int main()
{
    complex C1,C2,C3;
    C1.get_data();
    C2.get_data();
    cout<<"1st complex number : ";
    C1.put_data();
    cout<<"\n2nd complex number : ";
    C2.put_data();
    cout<<"\n\nArithmetic operations on complex numbers :\n\n";
    C3=C1+C2;
    C3.put_data();
    C3=C1-C2;
    C3.put_data();
    C3=C1*C2;
    C3.put_data();
    C3=C1/C2;
    C3.put_data();
    return 0;
}
