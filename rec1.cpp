#include<iostream>
using namespace std;
class recu
{
  public:
    inline int rec(int n)
    {
      if(n==1)
        return 1;
      else
        return(n*rec(n-1));
    }
};
int main()
{
  class recu r1;
  int n;
  cout<<"Enter a number for factorial : ";
  cin>>n;
  cout<<"Factorial = "<<r1.rec(n);
  return 0;
}

