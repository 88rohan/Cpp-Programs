#include<iostream>
using namespace std;
int rec(int *[],int);
int rec(int *a[],int m)
{
    static int i=0,s=0;
    if(i==m)
        return s;
    else
       return (s+a[i]+rec(i+1));
}
int main()
{
    int n,i,r;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"\nEnter elements : \n";
    for(i=0;i<n;i++)
        cin>>a[i];
    r=rec(a,n);
    cout<<"Sum = "<<r;
    return 0;
}
