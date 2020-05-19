#include<iostream>
using namespace std;
inline int rec(int n)
{
  if(n==1)
    return 1;
  else
    return(n*rec(n-1));
}
int main()
{
  int n;
  cout<<"Enter a number for factorial : ";
  cin>>n;
  cout<<"Factorial = "<<rec(n);
  return 0;
}
