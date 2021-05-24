#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int n5,n10=0,state;
    cin>>n5;
    state=n5;
    int step=1;

    do
    {
        n10=n10+(n5%10)*step;
        step=step*5;
        n5=n5/10;
        if((n5%10)>4)
        {
            break;
        }
    } while (n5>0);
    
    if((n5%10)>4)
    {
        cout<<"Input error"<<endl;
    }
    else
    {
        cout<<n10<<endl;
    }

    system("pause");
    return 0;
}