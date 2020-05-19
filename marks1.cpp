#include<iostream>
using namespace std;

class Marks
{
    char name[50];
    int roll_no;
public:
    float marks,s=0;
    void get_info()
    {
        cout<<"\nEnter Student's Details :\n\n";
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Roll no. : ";
        cin>>roll_no;
    }
    void total_marks(float n,int m)
    {
        cout<<"\nTotal marks : "<<n<<"\tAverage : "<<n/m<<endl;
    }
};
class Physics : public Marks
{
public:
    float get_marks()
    {
        cout<<"Enter Physics marks : ";
        cin>>marks;
        s=s+marks;
        return (marks);
    }
    void put_total(int n)
    {
        cout<<"\nTotal marks of Whole class in Physics:\n";
        cout<<"Total marks : "<<s<<"\tAverage : "<<s/n<<"\n\n";
    }
};
class Chemistry : public Marks
{
public:
    float get_marks()
    {
        cout<<"Enter Chemistry marks : ";
        cin>>marks;
        s=s+marks;
        return (marks);
    }
    void put_total(int n)
    {
        cout<<"\nTotal marks of Whole class in Chemistry:\n";
        cout<<"Total marks : "<<s<<"\tAverage : "<<s/n<<"\n\n";
    }
};
class Maths : public Marks
{
public:
    float get_marks()
    {
        cout<<"Enter maths marks : ";
        cin>>marks;
        s=s+marks;
        return (marks);
    }
    void put_total(int n)
    {
        cout<<"\nTotal marks of Whole class in Maths:\n";
        cout<<"Total marks : "<<s<<"\tAverage : "<<s/n<<"\n\n";
    }
};
int main()
{
    int n,i;
    cout<<"How many students in class : ";
    cin>>n;
    Maths M;
    Physics P;
    Chemistry C;
    for(i=0;i<n;i++)
    {
        float marks=0;
        M.get_info();
        marks=P.get_marks()+C.get_marks()+M.get_marks();
        M.total_marks(marks,n);
    }
    cout<<"\n\nClass Details :\n";
    P.put_total(n);
    C.put_total(n);
    M.put_total(n);
    return 0;
}
