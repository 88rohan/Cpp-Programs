#include<iostream>
using namespace std;
void leapyear();
void days();
int main()
{
  int c;
  cout<<"1. Leap year\t"<<"2. Convert days into years,months and days";
  cout<<"\nEnter your choice : ";
  cin>>c;
  switch(c)
  {
    case 1 : leapyear();
             break;
    case 2 : days();
             break; 
  }
}
void leapyear()
{
  int y;
  cout<<"\nEnter year : ";
  cin>>y;
  if((y%4==0)&&(y%100!=0||y%400==0))
     cout<<y<<" is a leap year.";
  else
     cout<<y<<" is not a leap year.";
}
void days()
{
  int n,y,m,d;
  cout<<"Enter days : ";
  cin>>n;
  y=n/365;
  m=(n-y*365)/30;
  d=(n-y*365-m*30);
  cout<<"\nYears = "<<y<<"\nMonths = "<<m<<"\nDays = "<<d<<endl;
}
