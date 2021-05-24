#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int num,a,b;
    int m,n,x,y;
    double shang,yu;

    cin>>num;

    y=num%10;
    x=num/10%10;
    n=num/100%10;
    m=num/1000;

    a=m*10+n;
    b=x*10+y;

    shang=sqrt(1.00*a)/sqrt(1.00*b);
    yu=a%b;

    cout<<a<<"   "<<b<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<shang<<endl;

    cout<<setiosflags(ios::fixed)<<setprecision(0)<<yu<<endl;

    system("pause");
    return 0;
}