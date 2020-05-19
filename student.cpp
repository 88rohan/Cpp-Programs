#include<iostream>
using namespace std;
class CGPA
{
public:
    int i,roll;
    char name[30];
    float m1,m2,m3,total,average,gpa;
};
int main()
{
    int n,i;

   cout<<"How many no of students you want : ";
   cin>>n;

   CGPA p[n] ;
   cout<<"\nEnter "<<n<<"  Students details ";
    for(i=0;i<n;i++)
    {
        cout<<"\n\nEnter "<<i+1<<" student's details :";
        cout<<"\nRoll no : ";
        cin>>p[i].roll;
        cout<<"Name : ";
        cin>>p[i].name;
        cout<<"Marks of all three subjects : ";
        cin>>p[i].m1>>p[i].m2>>p[i].m3;

    }
    for(i=0;i<n;i++)
    {
        p[i].total=(p[i].m1+p[i].m2+p[i].m3);
        p[i].average=p[i].total/3;

        if(p[i].average>=95&&p[i].average<=100)
            p[i].gpa=10;
        else if(p[i].average>=90 && p[i].average<=95)
            p[i].gpa=9.6;
             else if(p[i].average>=80 && p[i].average<=90)
            p[i].gpa=9.0;
            else if(p[i].average>=70 && p[i].average<=80)
            p[i].gpa=8.0;
             else if(p[i].average>=60 && p[i].average<=70)
            p[i].gpa=7.0;
            else
                p[i].gpa=5.9;

    }
     cout<<"Roll\t Name \t  Total \t CGPA\n" ;
    for(i=0;i<n;i++)
    {
       cout<<p[i].roll<<"\t"<<p[i].name<<"\t"<<p[i].total<<"\t"<<p[i].gpa<<endl;

    }
    delete p;
    return 0;
}
