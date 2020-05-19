#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    char dtype[100];
    int dsize;
    fout.open("datasize.txt",ios::app);
    cout<<"Enter datatype : ";
    cin.getline(dtype,100);
    fout<<dtype;
    cout<<"Enter size : ";
    cin>>dsize;
    fout<<"  "<<dsize<<" bytes.\n";
    fout.close();
    return 0;
}
