#include<iostream>
using namespace std;

class Shape
{
public:
    double length,breth;
    virtual void get_info()
    {
        cout<<"\nEnter length of rectangle: ";
        cin>>length;
        cout<<"Enter breath of rectangle: ";
        cin>>breth;
    }
    virtual void area(){}
};
class Triangle : public Shape
{
public:
    void get_info()
    {
        cout<<"\nEnter base of triangle : ";
        cin>>length;
        cout<<"Enter height of triangle: ";
        cin>>breth;
    }
    void area()
    {
        cout<<"\n\tArea of Triangle : "<<(length*breth)/2<<"\n\n";
    }
};
class Rectangle : public Shape
{
public:
    void area()
    {
        cout<<"\n\tArea of Rectangle : "<<length*breth<<"\n\n";
    }
};
class Circle : public Shape
{
    float radius;
public:
    void get_info()
    {
        cout<<"\nEnter radius of circle : ";
        cin>>length;
    }
    void area()
    {
        cout<<"\n\tArea of Circle : "<<length*length*3.14<<"\n\n";
    }
};
int main()
{
    Shape *p;
    Triangle Tri;
    Circle Cir;
    Rectangle Rect;
    p=&Tri;
    int n;
    while(n!=4)
    {
        cout<<"Area of a shape :\n"<<"\t1. Triangle\n\t2. Rectangle\n\t3. Circle\n\t4. Exit\n\n";
        cout<<"Enter your choice : ";
        cin>>n;
        switch(n)
        {
            case 1 : p->get_info();
                     p->area();
                     p=&Rect;
                     break;
            case 2 : p->get_info();
                     p->area();
                     p=&Cir;
                     break;
            case 3 : p->get_info();
                     p->area();
                     p=&Tri;
                     break;
            case 4 : break;
            default : cout<<"\nWrong choice.\n\tTry again.\n\n";
        }
    }
    return 0;
}
