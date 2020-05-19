#include<math.h>
#include<iostream>
using namespace std;
float compound(float p,float t,float r= 4)
  {
      int CI;
      CI=p*pow((1+r/100),t);
    return CI;
  }
float get_data()
{
  float p,t,ci;
  cout<<"Enter principle amount : ";
  cin>>p;
  cout<<"Enter time period : ";
  cin>>t;
     float r=compound(p,t);

     ci=r-p;
     cout<<"\nCompound intrest = "<<ci;
     return r;
}
int main()
{
  float r=get_data();
  cout<<"\nTotal amount = "<<r;
  return 0;
}
