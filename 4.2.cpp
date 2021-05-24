#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double y, med;
    cin >> n;
    if (n <= 0)
    {
        cout << "表达式的值=0";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            med = med + i * i;
        }
        y = med / n;
        cout << "表达式的值=" << y << endl;
    }

    system("pause");
    return 0;
}