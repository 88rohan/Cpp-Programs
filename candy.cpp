#include<iostream>
using namespace std;

class Sell
{
    int num_item;
    float money;
public:
    void get_item()
    {
        cout<<"How many items you want : ";
        cin>>num_item;
    }
    void cal_money(int n)
    {
        switch(n)
        {
            case 1 : cout<<"\nTotal price = "<<num_item*1<<"\n\n";
                     break;
            case 2 : cout<<"\nTotal price = "<<num_item*5<<"\n\n";
                     break;
            case 3 : cout<<"\nTotal price = "<<num_item*4<<"\n\n";
                     break;
            case 4 : cout<<"\nTotal price = "<<num_item*3<<"\n\n";
                     break;
            case 5 : break;
            default : cout<<"\nInvalid Choice."<<"\n\n";

        }
    }
};
int main()
{
    Sell S1;
    int n;
    while(n!=5)
    {
        cout<<"1. Candies 1Rs each\n2. Chips 5Rs each\n3. Gum 4Rs each\n4. Cookies 3Rs each\n5. Exit\n\n\tEnter your choice : ";
        cin>>n;
        if(n<=4)
          S1.get_item();
        S1.cal_money(n);
    }
    return 0;
}
