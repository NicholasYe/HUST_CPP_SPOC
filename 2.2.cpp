#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double in,out;

    cin>>in;
    out=in*1.0275*1.0275*1.0275;
    

    cout<<"捐款金额为："<<setiosflags(ios::fixed)<<setprecision(2)<<out<<endl;



    system("pause");
    return 0;
}