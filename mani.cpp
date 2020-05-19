#include<iostream>
using namespace std;
ostream& show(ostream& output)
{
output.width(10);
output.precision(5);
output.setf(ios::right,ios::adjustfield);
output.fill('*');
output.setf(ios::showpoint);

return output;
}
int main()
{
cout<<show<<28.3400003;
return 0;
}
