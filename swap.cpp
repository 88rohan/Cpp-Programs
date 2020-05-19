#include<iostream>
using namespace std;
class swapping
{
 public:
  int num1,num2;
  void get();
  void swap();
  void put();
};
void swapping::get()
{
  cout<<"Enter 1st number : ";
  cin>>num1;
  cout<<"Enter 2nd number : ";
  cin>>num2;
}
void swapping::swap()
{
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
}
void swapping::put()
{
  cout<<"Numbers after swapping :\n";
  cout<<"1st number = "<<num1;
  cout<<"\n2nd number = "<<num2;
}
int main()
{
  swapping s1;
  s1.get();
  s1.swap();
  s1.put();
  return 0;
}
