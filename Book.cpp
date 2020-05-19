#include<iostream>
using namespace std;

class Book_id
{
    int book_code ;
    char book_name[50];
public:
    void get_id()
    {
        cout<<"Enter book Name : ";
        cin>>book_name;
        cout<<"Enter book Code : ";
        cin>>book_code;
    }
    void put_id()
    {
        cout.setf(ios::left,ios::adjustfield);
        cout<<book_name<<"\t"<<book_code;
    }
};
class Book_cost : public Book_id
{
    float cost ;
public:
    void get_cost()
    {
        cout<<"Enter book price : ";
        cin>>cost;
    }
    void put_cost()
    {
        cout.setf(ios::right,ios::adjustfield);
        cout.precision(4);
        cout.widen(10);
        cout.setf(ios::showpoint);
        cout<<"\t"<<cost;
    }
};
int main()
{
    int n,i;
    cout<<"Enter number of books : ";
    cin>>n;
    Book_cost Book[n];
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter "<<i+1<<" Book's Details :\n";
        Book[i].get_id();
        Book[i].get_cost();
    }
    cout<<"\nBook Details :\n\nName\tCode\tCost\n";
    cout<<"-------------------------------\n";
    for(i=0;i<n;i++)
    {
        Book[i].put_id();
        Book[i].put_cost();
        cout<<endl;
    }
    return 0;
}
