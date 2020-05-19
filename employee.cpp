#include<iostream>
using namespace std;

class Employee
{
protected:
    char name[20],emp_id[10],mobile[10];
    float basic_salary,hra,da,ta,pf,gross_salary,net_salary;
public:
    virtual void salary_cal()
    {
      cout<<"No Salary";
    }
    virtual void raise_salary()
    {
      cout<<"No increment in salary";
    }
    virtual void promote()
    {
      cout<<"No promotion";
    }
    virtual void get_data()
    {
       cout<<"Nothing";
    }
    virtual void display()
    {
       cout<<"Nothing";
    }
};
class Manager : public Employee
{
public:
    void get_data()
    {
        cout<<"Enter Manager's details :\n\nEnter name : ";
        cin>>name;
        cout<<"Enter Employee ID : ";
        cin>>emp_id;
        cout<<"Enter Mobile Number : ";
        cin>>mobile;
        cout<<"Enter Basic Salary : ";
        cin>>basic_salary;
        cout<<"Enter HRA percentage: ";
        cin>>hra;
        cout<<"Enter DA percentage : ";
        cin>>da;
        cout<<"Enter TA percentage : ";
        cin>>ta;
        cout<<"Enter PF percentage : ";
        cin>>pf;
    }
    void salary_cal()
    {
        gross_salary=basic_salary+((basic_salary*hra)/100)+((basic_salary*da)/100)+((basic_salary*ta)/100);
        net_salary=gross_salary-((basic_salary*pf)/100);
    }
    void display()
    {
        cout<<"\n\nDetails of Manager :\n";
        cout<<"\nEmployee ID : "<<emp_id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Mobile no. : "<<mobile<<endl;
        cout<<"Basic Salary : "<<basic_salary<<endl;
        cout<<"Net Salary : "<<net_salary<<endl;
    }
    void promote()
    {
        cout<<"\nYou are promoted to CEO.\n";
    }
    void raise_salary()
    {
        cout<<"Basic salary is increased by 10% and becomes : "<<((basic_salary*110)/100);
        basic_salary=((basic_salary*110)/100);
        gross_salary=basic_salary+((basic_salary*hra)/100)+((basic_salary*da)/100)+((basic_salary*ta)/100);
        net_salary=gross_salary-((basic_salary*pf)/100);
        cout<<"\nNew Net Salary : "<<net_salary;
    }
};
class Engineer : public Employee
{
public:
    void get_data()
    {
        cout<<"\n\nEnter Engineer's details :\n\nEnter name : ";
        cin>>name;
        cout<<"Enter Employee ID : ";
        cin>>emp_id;
        cout<<"Enter Mobile Number : ";
        cin>>mobile;
        cout<<"Enter Basic Salary : ";
        cin>>basic_salary;
        cout<<"Enter HRA percentage: ";
        cin>>hra;
        cout<<"Enter DA percentage : ";
        cin>>da;
        cout<<"Enter TA percentage : ";
        cin>>ta;
        cout<<"Enter PF percentage : ";
        cin>>pf;
    }
    void salary_cal()
    {
        gross_salary=basic_salary+((basic_salary*hra)/100)+((basic_salary*da)/100)+((basic_salary*ta)/100);
        net_salary=gross_salary-((basic_salary*pf)/100);
        cout<<gross_salary<<" "<<net_salary;
    }
    void display()
    {
        cout<<"\n\nDetails of Engineer :\n";
        cout<<"\nEmployee ID : "<<emp_id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Mobile no. : "<<mobile<<endl;
        cout<<"Basic Salary : "<<basic_salary<<endl;
        cout<<"Net Salary : "<<net_salary<<endl;
    }
    void promote()
    {
        cout<<"\nYou are promoted to Team leader.\n";
    }
    void raise_salary()
    {
        cout<<"DA is increased by 10% and new percentage : "<<(da+(da*10)/100);
        da=(da+(da*10)/100);
        gross_salary=basic_salary+((basic_salary*hra)/100)+((basic_salary*da)/100)+((basic_salary*ta)/100);
        net_salary=gross_salary-((basic_salary*pf)/100);
        cout<<"\nNew Net Salary : "<<net_salary;
    }
};
int main()
{
    Employee *p;
    Manager M;
    Engineer E;
    p=&M;
    p->get_data();
    p->salary_cal();
    p->display();
    p->promote();
    p->raise_salary();
    p=&E;
    p->get_data();
    p->salary_cal();
    p->display();
    p->promote();
    p->raise_salary();
    return 0;
}
