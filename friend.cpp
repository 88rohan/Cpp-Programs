#include<iostream>
using namespace std;
class Array1;
class Array
{
    int a;
    public:
    void get_data()
    {
        cin>>a;
    }
    friend void put_data(Array [], Array1[]);
};
class Array1
{
    int b;
    public:
    void get_data()
    {
        cin>>b;
    }
    friend void put_data(Array [], Array1 []);
};
void put_data(Array A1[], Array1 A2[])
{
    int i,j,t;
    for(i=0;i<10;i++)
        cout<<A1[i].a<<" ";
    for(i=0;i<10;i++)
        cout<<A2[i].b<<" ";
}
int main()
{
    int i;
    Array a1[10];
    Array1 a2[10];
    cout<<"Enter ten elements of 1st array :\n";
    for(i=0;i<10;i++)
        a1[i].get_data();
    cout<<"Enter ten elements of 2nd array :\n";
    for(i=0;i<10;i++)
        a2[i].get_data();
    put_data(a1,a2);
    return 0;
}
