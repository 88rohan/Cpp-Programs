#include<iostream>
using namespace std;
 int main()
 {
     int a[16],i,j,b[4][4];

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>b[i][j];
        }
    }
     cout<<"\n\n";
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            cout<<b[i][j]<<" ";
          cout<<endl;
    }
    for(j=0;j<=3;j++)
     {
         static int k=0;
         for(i=0;i<=3;++i)
         {
            int r=k;
            a[r]=b[i][j];
            k++;
         }
         j++;
        for(i=3;i>=0;--i)
         {
            int r=k;
            a[r]=b[i][j];
            k++;
         }
     }
     cout<<"\n\n";
     for(i=0;i<16;i++)
        cout<<a[i]<<" ";
   /* for(j=0;j<4;j++)
    {
        if(j%2==0)
        {
            for(i=0;i<4;i++)
                cout<<b[i][j]<<" ";
        }
        else
        {
            for(i=3;i>=0;i--)
                cout<<b[i][j]<<" ";
        }
    }*/
     return 0;
 }
