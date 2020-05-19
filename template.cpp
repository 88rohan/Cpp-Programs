#include<iostream>
using namespace std;

template <typename X>
void Swapping(X x,X y)
{
    cout<<"Before Swapping :\n"<<"\tX = "<<x<<"\n\tY = "<<y<<"\n\n";
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After Swapping :\n"<<"\tX = "<<x<<"\n\tY = "<<y<<endl;
}

int main()
{
    int x,y,n;
    float a,b;
    char c,d;
    cout<<"\t\t\tSwapping\n\n";
    while(n!=4)
    {
        cout<<"Code   Datatype\n";
        cout<<" 1.     Integer\n 2.     Char\n 3.     Float\n 4.     Exit\n";
        cout<<"\tFor which datatype you want to swap : ";
        cin>>n;
        switch(n)
        {
            case 1: cout<<"Enter Two Integer numbers : ";
                    cin>>x>>y;
                    Swapping<int>(x,y);
                    break;
            case 2: cout<<"Enter Two Charactors : ";
                    cin>>c>>d;
                    Swapping<char>(c,d);
                    break;
            case 3: cout<<"Enter Two Float numbers : ";
                    cin>>a>>b;
                    Swapping<float>(a,b);
                    break;
            case 4: break;
            default : cout<<"\n\t\tInvalid choice. Try again...\n\n";
        }
    }
    return 0;
}
