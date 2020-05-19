#include<iostream>
using namespace std;
int main()
{
  int n,x,r,s=0;
  cout<<"Enter a digit = ";
  cin>>n;
  x=n;
  while(x!=0)
  {
    
    s=s+x%10;
    x/=10;
  }
  cout<<"\nThe sum is "<<s<<endl;
  return 0;
}
