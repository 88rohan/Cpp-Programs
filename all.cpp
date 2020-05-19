#include<iostream>
using namespace std;
inline void swap(int num1,int num2)
{

  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  cout<<"\nNumbers after swapping :\n";
  cout<<"1st number = "<<num1;
  cout<<"\n2nd number = "<<num2;
}
int main()
{ 
  int a,b;
  cout<<"Enter 1st number : ";
  cin>>a;
  cout<<"Enter 2nd number : ";
  cin>>b;
  swap(a,b);
  return 0;
}
