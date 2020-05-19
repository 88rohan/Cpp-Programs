#include<iostream>
using namespace std;
inline int sum(int x,int y)
{
  return(x+y);
}
inline int sub(int x, int y)
{
  return(x-y);
}
inline void mul(int x,int y)
{
  cout<<"\nMultiplication = "<<(x*y);
}
inline void quo(int x,int y)
{
  cout<<"\nQuoitent = "<<(x/y);
}
int main()
{
  int r,a,b;
  cout<<"Enter two numbers : ";
  cin>>a>>b;
  r=sum(a,b);
  cout<<"\nAddition = "<<r;
  r=sub(a,b);
  cout<<"\nSubtraction = "<<r;
  mul(a,b);
  quo(a,b);
  return 0;
}
