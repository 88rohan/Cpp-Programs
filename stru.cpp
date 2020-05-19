#include<iostream>
using namespace std;
struct marks
{
    int roll;
    char name[20];
    float m1,m2,m3,total,avg;
};
void calculation(struct marks[],int);
void grade(float);
struct marks s[100];
int main()
{
    int n,i;
    cout<<"Enter number of students : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" student's details :\n";
        cout<<"Name : ";
        cin>>s[i].name;
        cout<<"Roll no. : ";
        cin>>s[i].roll;
        cout<<"Marks : \n";
        cout<<"\tIn 1st subject = ";
        cin>>s[i].m1;
        cout<<"\tIn 2nd subject = ";
        cin>>s[i].m2;
        cout<<"\tIn 3rd subject = ";
        cin>>s[i].m3;
    }
    calculation(s,n);
    return 0;
}
void calculation(struct marks *s1,int n)
{
    cout<<"\nStudents marks details :\n";
    cout<<"\n Roll\tName\tTotal Marks\tAverage\tGrade\n";
    cout<<"----------------------------------------------\n";
    for(int i=1;i<=n;i++)
    {
        s1[i].total=s1[i].m1+s1[i].m2+s1[i].m3;
        s1[i].avg=s1[i].total/3;
        cout<< s1[i].roll;
        cout<<"\t"<<s1[i].name;
        cout<<"\t"<<s1[i].total;
        cout<<"\t\t"<<s1[i].avg;
        grade(s1[i].avg);
    }
}
void grade(float avg)
{
    if(avg>90)
        cout<<"\tS";
    else if(avg>80)
        cout<<"\tA";
    else if(avg>70)
        cout<<"\tB";
    else if(avg>60)
        cout<<"\tC";
    else if(avg>50)
        cout<<"\tD";
    else
        cout<<"\tRA";
}
