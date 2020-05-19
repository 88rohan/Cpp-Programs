#include<iostream>
using namespace std;
void sum(int a,double b)
{
    cout<<"Sum = "<<a+b<<endl;
}
void sum(double a,int c)
{
    cout<<"Sum = "<<a+c;
}
int main()
{
    sum(10,20);
   // sum(30,40);
    return 0;
}
