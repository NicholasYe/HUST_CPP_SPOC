#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double n, r, out;
    cin >> n;

    if (n < 1000)
    {
        r = 0;
        cout << "税率r=" << r << "%,奖金值n=" <<setiosflags(ios::fixed)<<setprecision(2)<< n << ",实际所得奖金s=" << n - r * n / 100 << endl;
    }
    else if (n < 3000)
    {
        r = 3;
        cout << "税率r=" << r << "%,奖金值n=" <<setiosflags(ios::fixed)<<setprecision(2)<< n << ",实际所得奖金s=" << n - r * n / 100 << endl;
    }
    else if (n < 5000)
    {
        r = 5;
        cout << "税率r=" << r << "%,奖金值n=" <<setiosflags(ios::fixed)<<setprecision(2)<< n << ",实际所得奖金s=" << n - r * n / 100 << endl;
    }
    else if (n < 10000)
    {
        r = 7;
        cout << "税率r=" << r << "%,奖金值n=" <<setiosflags(ios::fixed)<<setprecision(2)<< n << ",实际所得奖金s=" << n - r * n / 100 << endl;
    }
    else
    {
        r = 10;
        cout << "税率r=" << r << "%,奖金值n=" <<setiosflags(ios::fixed)<<setprecision(2)<< n << ",实际所得奖金s=" << n - r * n / 100 << endl;
    }

    system("pause");
    return 0;
}