#include<iostream>
using namespace std;
class employee
{
    int emp_id;
    char emp_name[20];
    float bas_sal,net_pay,pf,da,hra;
  public:
    void get_data();
    void cal_data();
    void pay()
    {
        cout<<emp_id<<"\t"<<emp_name<<"\t\t"<<bas_sal<<"\t"<<net_pay<<endl;
    }
};
void employee::get_data()
    {
          cout<<"Enter Employee ID no. : ";
          cin>>emp_id;
          cout<<"Enter Employee name : ";
          cin>>emp_name;
          cout<<"Enter Basic salary : ";
          cin>>bas_sal;
          cout<<"Enter DA percentage : ";
          cin>>da;
          cout<<"Enter HRA percentage : ";
          cin>>hra;
          cout<<"Enter PF percentage : ";
          cin>>pf;
          cout<<endl;
    }
void employee::cal_data()
{
    float pay;
    pay=((bas_sal*da)/100)+((bas_sal*hra)/100);
    net_pay=pay+bas_sal-((bas_sal*pf)/100);
}
int main()
{
    int n,i;
    cout<<"Enter number of employees : ";
    cin>>n;
    cout<<endl;
    employee e[n];
    for(i=0;i<n;i++)
      e[i].get_data();
    for(i=0;i<n;i++)
      e[i].cal_data();
    cout<<"\nName\tEmployee ID\tBasic salary\tNet salary\n";
    for(i=0;i<n;i++)
      e[i].pay();
    return 0;
}
