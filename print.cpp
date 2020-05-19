#include<iostream>
using namespace std;
void allprograms(int);
int main()
{
  int n;
  cout<<"1. Marks details\t"<<"2. Largest number\t"<<"3. Swapping of two numbers"<<"4. Name repetation\t"<<"5. Positive number\n\n";
  cout<<"Enter your option's choice : ";
  cin>>n;
  allprograms(n);
  return 0;
}
void allprograms(int n)
{
  int m,p,c,a,b;
  char name[10];
  switch(n)
  {
     case 1 : cout<<"Enter maths marks : ";
	      cin>>m;
	      cout<<"Enter physics marks : ";
	      cin>>p;
	      cout<<"Enter chemistry marks : ";
	      cin>>c;
	      cout<<"\nMarks details :\n\nMaths = "<<m<<"\nPhysics = "<<p<<"\nChemistry = "<<c<<"\n\n";
	      break;
      case 2 : cout<<"Enter 1st number = ";
	       cin>>a;
	       cout<<"Enter 2nd number = ";
	       cin>>b;
	       (a>b)?cout<<a<<" is greater number.":cout<<b<<" is greater number.";
	       break;
      case 3 : cout<<"Enter 1st number = ";
	       cin>>a;
	       cout<<"Enter 2nd number = ";
	       cin>>b;
	       cout<<"\n\nNumbers before swapping :\n1st number = "<<a<<"\n2nd number = "<<b<<endl;
	       a=a+b;
	       b=a-b;
	       a=a-b;
	       cout<<"\n\nNumbers after swapping :\n1st number = "<<a<<"\n2nd number = "<<b<<endl;
	       break;
      case 4 : cout<<"Enter your name : ";
               cin>>name;
               cout<<"\nHow many times you want to repeat name : ";
               cin>>m;
               for(int i=1;i<=m;i++)
               {
                  cout<<name<<endl;
               }
               break;
      case 5 : cout<<"Enter a numbers : ";
               cin>>a;
               if(a<0)
                  cout<<a<<" is negative number.";
               else
                 cout<<a<<" is positive number.";
               break;
  }
}
