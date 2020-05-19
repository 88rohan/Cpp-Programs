#include<iostream>
using namespace std;
inline int fabo(int n)
{
  if(n==1||n==2)
    return 1;
  else
    return(fabo(n-1)+fabo(n-2));
} 
int main()
{
  int n;
  cout<<"Enter how many terms you want in fabonocie series : ";
  cin>>n;
  cout<<"Series :\n";
  for(int i=1;i<=n;i++)
    cout<<" "<<fabo(i);
}
