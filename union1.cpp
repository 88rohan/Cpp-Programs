#include<iostream>
using namespace std;
union marks
{
    int roll;
    char name[20];
    float m1,m2,m3;
};
void grade(float);
union marks u[100];
int main()
{
    int n,i;
    cout<<"Enter number of students : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        float sum=0.0f,avg;
        cout<<"\n"<<i<<" student's details :\n";
        cout<<"Name : ";
        cin>>u[i].name;
        cout<<"Roll no. : ";
        cin>>u[i].roll;
        cout<<"Marks : \n";
        cout<<"\tIn 1st subject = ";
        cin>>u[i].m1;
        sum=sum+u[i].m1;
        cout<<"\tIn 2nd subject = ";
        cin>>u[i].m2;
        sum=sum+u[i].m2;
        cout<<"\tIn 3rd subject = ";
        cin>>u[i].m3;
        sum=sum+u[i].m3;
        cout<<"\n Total Marks\tAverage\tGrade\n";
        cout<<"-----------------------------------\n";
        cout<<sum;
        avg=sum/3;
        cout<<"\t"<<avg;
        grade(avg);
        cout<<endl;
    }
    return 0;
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
        cout<<"\tE";
    else
        cout<<"\tRA";
}
