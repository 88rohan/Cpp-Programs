#include<iostream>
using namespace std;
class addition
{
  public:
   int num1,num2,result;
   void sum();
   void get();
   void put();
};
void addition::get()
{
  cout<<"Enter two numbers : ";
  cin>>num1>>num2;
}
void addition::sum()
{
  result=num1+num2;
}
void addition::put()
{
  cout<<"Sum is "<<result<<endl;
}
int main()
{
  addition a1;
  a1.get();
  a1.sum();
  a1.put();
  return 0;
}
