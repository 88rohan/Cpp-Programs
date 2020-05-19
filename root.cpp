#include<math.h>
#include<iostream>
using namespace std;

class Root
{
    float a,b,c,r1,r2,D;
public:
    void get_data()
    {
        cout<<"Enter the coefficients of quadratric equation\n";
        cout<<"Enter a = ";
        cin>>a;
        cout<<"Enter b = ";
        cin>>b;
        cout<<"Enter c = ";
        cin>>c;
    }
    void cal_data()
    {
        D=(b*b)-(4*a*c);
        cout<<"D = "<<D<<endl;
    }
    void result()
    {
        if(D>0)
           {
            cout<<"Roots are real and unequal\n\n";
            r1=(-b+sqrt(D))/2*a;
            r2=(-b-sqrt(D))/2*a;
            cout<<"Roots are "<<r1<<" and "<<r2;
           }
        else if(D==0)
           {
            cout<<"Roots are real and equal\n\n";
            r1=(-b)/2*a;
            r2=(-b)/2*a;
            cout<<"Roots are "<<r1<<" and "<<r2;
           }
        else
           {
            cout<<"Roots are imaginary and unequal\n\n";
            r1=-b/2*a;
            r2=(sqrt(-D)/(2*a));
            cout<<"Roots are "<<r1<<-r2<<"i"<<" and ";
            cout<<r1<<"+"<<r2<<"i";
           }
    }
};

int main()
{
    Root R;
    R.get_data();
    R.cal_data();
    R.result();
    return 0;
}
