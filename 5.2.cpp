#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int arr[5][5] = { 0 };
	int plus = 0;

	for (int m = 0; m < 5; m++)
	{
		for (int n = 0; n < 5; n++)
		{
			cin >> arr[m][n];
		}
	}
	cin >> plus;

	int step = 0;
	for (int m = 0; m < 5; m++)
	{
		for (int n = step; n < 5; n++)
		{
			arr[m][n] *= plus;
		}
		step++;
	}

	for (int m = 0; m < 5; m++)
	{
		for (int n = 0; n < 5; n++)
		{
			cout << setw(5) << arr[m][n];
		}
		cout << endl;
	}

	system("pause");
	return 0;
}