#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter size for array : ";
    cin>>n;
    int a[n];
    cout<<"\n\nEnter elements of array : \n";
    for(i=0;i<n;i++)
       cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<"\n\nShorted array is :\n";
    for(i=0;i<n;i++)
       cout<<a[i]<<" ";
    return 0;
}
