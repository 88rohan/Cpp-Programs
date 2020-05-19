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
    friend class Array1;
};
class Array1
{
    int s=0;
    public:
    void put_data(Array A1[],int n)
    {
        cout<<"\nThe array is :\n";
        for(int i=0;i<n;i++)
        {
           cout<<A1[i].a<<" ";
           s=s+A1[i].a;
        }
    }
    friend void put_sum(Array1);
};
void put_sum(Array1 A)
{

    cout<<endl<<"\nSum of array is : "<<A.s;
}
int main()
{
    int i,n;
    cout<<"Enter size of array : ";
    cin>>n;
    Array a1[n];
    Array1 a2;
    cout<<"Enter the elements of array :\n";
    for(i=0;i<n;i++)
        a1[i].get_data();
    a2.put_data(a1,n);
    put_sum(a2);
    return 0;
}
