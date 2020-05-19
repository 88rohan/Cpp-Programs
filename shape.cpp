#include<iostream>
using namespace std;
class Shape
{
protected:
    int l,b;
public:
    Shape()
    {
        cout<<"Area of Rectangle."<<endl;
    }
};
class Rectangle:public Shape
{
public:
    Rectangle(int length,int breath):Shape()
    {
        l=length;
        b=breath;
         cout<<"\nArea of Rectangle = "<<l*b<<endl;
    }
};
class Square:public Rectangle
{
public:
    Square(int length):Rectangle(10,15)
    {
        cout<<"\nArea of Square = "<<length*length;
    }
};
int main()
{
    Square S(10);
    return 0;
}
