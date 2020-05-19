#include<iostream>
using namespace std;
class sim_int
{
  public:
  float p,t;
  float get_data();
  inline float simple(float p,float t,float r= 4)
  {
    return((p*t*r)/100);
  }
};
float sim_int::get_data()
{
  float p,t;
  cout<<"Enter principle amount : ";
  cin>>p;
  cout<<"Enter time period : ";
  cin>>t;
     float r=simple(p,t);
     return r;
}
int main()
{
  class sim_int SI;
  float r=SI.get_data();
  cout<<"Simple intrest = "<<r;
  return 0;
}
