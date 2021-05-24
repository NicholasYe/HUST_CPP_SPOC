#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    double high=100;
    double distance=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            distance=distance+high*2-100;
        }
        else
        {
            distance=distance+high*2;
        }
        high=high/2;
    }


    cout<<"第"<<n<<"次落地时，共经过"<<setiosflags(ios::fixed)<<setprecision(4)<<distance<<"米；反弹高度是"<<high<<"米。"<<endl;



    system("pause");
    return 0;
}