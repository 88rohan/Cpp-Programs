#include<iostream>
using namespace std;
int main()
{ 
  int n,f=0,x;
  cout<<"Enter a number = ";
  cin>>n;
  x=n;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
      f++;
  }
  if(f==2)
    cout<<"Prime number";
  else
    cout<<"Not a prime number";
  return 0;
}
