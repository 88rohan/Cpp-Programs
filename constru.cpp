#include<iostream>
using namespace std;
class employee
{
    int emp_id;
    float net_pay;
  public:
      employee()
      {
          emp_id=123;
          net_pay=60000;
          cout<<"Constructor:\n"<<emp_id<<endl<<net_pay<<endl;
      }
      employee(int id,float sal)
      {
          emp_id=id;
          net_pay=sal;
          cout<<"\nParameterized Constructor:\n"<<emp_id<<endl<<net_pay<<endl;
      }
      employee(employee &e)
      {
          emp_id= e.emp_id;
          net_pay=e.net_pay;
         cout<<"\nCopy Constructor:\n"<<emp_id<<endl<<net_pay<<endl;
      }
      ~employee()
      {
          cout<<"\nObject's memory is cleared."<<endl;
      }
};
int main()
{
    employee e1,e2(234,45600),e3(e1);
    return 0;
}
