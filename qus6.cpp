#include<iostream>
using namespace std;

class Student
{
    char name[50];
    int roll_no;
public:
    void get_info()
    {
        cout<<"Enter Student's Details :\n\n";
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Roll no. : ";
        cin>>roll_no;
    }
    void put_info()
    {
        cout<<roll_no<<"\t"<<name;
    }
};
class Exam : public Student
{
public:
    float m1,m2,m3,m4,m5,m6;
    void get_marks()
    {
        cout<<"Enter 1st subject marks : ";
        cin>>m1;
        cout<<"Enter 2nd subject marks : ";
        cin>>m2;
        cout<<"Enter 3rd subject marks : ";
        cin>>m3;
        cout<<"Enter 4th subject marks : ";
        cin>>m4;
        cout<<"Enter 5th subject marks : ";
        cin>>m5;
        cout<<"Enter 6th subject marks : ";
        cin>>m6;
    }
};
class Result : public Exam
{
    float total,percent;
public:
    void total_marks()
    {
        total=m1+m2+m3+m4+m5+m6;
        percent=total/6;
    }
    void result()
    {
        cout<<"\t"<<total<<"\t"<<percent;
    }
    void calc()
    {
        if(percent>90)
          cout<<"\tS";
        else if(percent>80)
          cout<<"\tA+";
        else if(percent>70)
          cout<<"\tA";
        else if(percent>60)
          cout<<"\tB+";
        else if(percent>50)
          cout<<"\tB";
        else if(percent>40)
          cout<<"\tC";
        else
          cout<<"\tRA";
    }
};
int main()
{
    Result Student;
    Student.get_info();
    Student.get_marks();
    Student.total_marks();
    cout<<"\nStudent's Marks Details :\n\nRoll no.\tName\tTotal marks\tPercentage\tGrade\n";
    Student.put_info();
    Student.result();
    Student.calc();
    return 0;
}
