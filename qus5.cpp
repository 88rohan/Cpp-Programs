#include<iostream>
using namespace std;

class Basic_info
{
    char name[50];
    int roll_no;
    char sex[20];
public:
    void get_info()
    {
        cout<<"Enter Student's Details :\n\n";
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Roll no. : ";
        cin>>roll_no;
        cout<<"Enter Gender : ";
        cin>>sex;
    }
    void put_info()
    {
        cout<<name<<"\t"<<roll_no<<"\t"<<sex;
    }
};
class Physical_info : public Basic_info
{
    int height ;
    int weight;
public:
    void get_physic()
    {
        cout<<"Enter height : ";
        cin>>height;
        cout<<"Enter weight : ";
        cin>>weight;
    }
    void put_physic()
    {
        cout<<"\t"<<height<<"\t"<<weight;
    }
    void calc()
    {
        int r=height*weight;
        if(r>=12000)
          cout<<"\tPass";
        else
          cout<<"\tFail";
    }
};
int main()
{
    Physical_info Student;
    Student.get_info();
    Student.get_physic();
    cout<<"\nStudent's Details For Boxing Selection :\n\nName\tRoll no.\tGender\tHeight\tWeight\tResult\n";
    Student.put_info();
    Student.put_physic();
    Student.calc();
    return 0;
}
