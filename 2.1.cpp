#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{

    double a, y, m;
    double Pi = 3.1415926;
    cin >> a;

    m = cos(a*Pi/180);
    y = sqrt((1 - m) / 2);



    cout << "y=" << y << endl;


    system("pause");
    return 0;
}

