#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c,p,tem,area;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    if(b>a)
    {
        tem=a;
        a=b;
        b=tem;
    }
    if(c>a)
    {
        tem=a;
        a=c;
        c=tem;
    }
    if(c>b)
    {
        tem=b;
        b=c;
        c=tem;
    }
    if(b+c<=a)
    {
        cout<<"不构成三角形";
        goto END;
    }

    area=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"area="<<setiosflags(ios::fixed)<<setprecision(2)<<area<<endl;

    if(a==b&&b==c)
    {
        cout<<"等边三角形";
    }
    else if((a==b||b==c||c==a))
    {
        cout<<"等腰三角形";
    }
    else if((a*a)==(b*b+c*c)&&(a==b||b==c||a==c))
    {
        cout<<"等腰直角三角形";
    }
    else if((a*a)==(b*b+c*c)&&(!(a==b||b==c||a==c)))
    {
        cout<<"直角三角形";
    }
    else 
    {
        cout<<"一般三角形";
    }





END:

    system("pause");
    return 0;
}