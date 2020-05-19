#include<iostream>
using namespace std;
int main()
{
    int a[100],n,r,x,d,i=0,k;
    cout<<"Enter a number in decimal : ";
    cin>>n;
    x=n;
        do
        {
           d=x/2;
           r=x%2;
           x=d;
           a[i]=r;
           k=i++;
        }
       while(x!=0);
    cout<<"\nBinary value of "<<n<<" = ";
    for(i=k;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
