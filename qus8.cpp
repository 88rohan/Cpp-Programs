#include<iostream>
using namespace std;
class Point
{
    double x,y;
public:
    void get_data(int a)
    {
        if(a==1)
        {
          cout<<"Enter coordinates of P1 : ";
          cin>>x>>y;
        }
        else
        {
          cout<<"Enter coordinates of P2 : ";
          cin>>x>>y;
        }
        cout<<endl;
    }
    void put_data()
    {
            cout<<"Coordinates of P1+P2 : "<<x<<","<<y;
    }
    friend Point operator +(Point,Point);
};
Point operator +(Point P1,Point P2)
{
    Point P;
    P.x=P1.x+P2.x;
    P.y=P1.y+P2.y;
    return P;
}
int main()
{
    Point P1,P2,P3;
    P1.get_data(1);
    P2.get_data(0);
    P3=P1+P2;
    P3.put_data();
    return 0;
}
