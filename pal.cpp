#include<iostream>
using namespace std;
int main()
{ 
  int n,r,x,s=0;
  cout<<"Enter a number = ";
  cin>>n;
  x=n;
  while(x!=0)
  {
    r=x%10;
    s=s*10+r;
    x/=10;
  }
  if(s==n)
    cout<<n<<" is palindrom.";
  else
      cout<<n<<" is not palindrom.";
  return 0;
}
