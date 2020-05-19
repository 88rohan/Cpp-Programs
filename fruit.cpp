#include<iostream>
using namespace std;

class Fruit
{
    int total;
public:
    void total_fruit(int m, int a)
    {
        total=m+a;
        cout<<"\n\nTotal Fruits in Basket : "<<total;
    }
};
class Mango : public Fruit
{
    int mango;
public:
    int get_mango()
    {
        cout<<"\nEnter total number of mangos : ";
        cin>>mango;
        return (mango);
    }
    void put_mango()
    {
        cout<<"Totle Mangos : "<<mango;
    }
};
class Apple : public Mango
{
    int apple;
public:
    int get_apple()
    {
        cout<<"\nEnter total number of appless : ";
        cin>>apple;
        return (apple);
    }
    void put_apple()
    {
        cout<<"\nTotle Apples : "<<apple;
    }
};
int main()
{
    int num,num1;
    Apple A;
    cout<<"Enter amount of fruits in Basket:\n";
    num=A.get_mango();
    num1=A.get_apple();
    A.put_mango();
    A.put_apple();
    A.total_fruit(num,num1);
    return 0;
}
