#include<iostream>
using namespace std; 
class student
{
 public:
  char name[20];
  int roll;
  void get();
  void put();
};
void student::get()
{
  cout<<"Enter name of student : ";
  cin>>name;
  cout<<"Enter roll no. of student : ";
  cin>>roll;
}
void student::put()
{
  cout<<name<<"\t"<<roll;
}
int main()
{
   student s1;
   s1.get();
   cout<<"Name\tRoll no.\n";
   s1.put();
   return 0;
}
