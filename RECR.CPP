#include<iostream.h>
#include<conio.h>
inline int factor(int n){
  if(n==0)
    return 1;
  else
    return(n*factor(n-1));
}
int main()
{
  clrscr();
  int n,r;
  cout<<"Enter a number : ";
  cin>>n;
  r=factor(n);
  cout<<"\nFactorial of "<<n<<" is "<<r;
  getch();
  return 0;
}