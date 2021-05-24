#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{

	int arr[10] = { 0 };
	int sum = 0;
	double ave = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	ave = double(sum) / 10;
	double min = 99999;
	double cha = 0;

	for (int i = 0; i < 10; i++)
	{
		cha = arr[i] - ave;
		if (cha < 0)
		{
			cha = -cha;
		}
		if (cha <= min)
		{
			min = cha;
		}
	}

	for (int m = 0; m < 10; m++)
	{
		cha = arr[m] - ave;
		if (cha < 0)
		{
			cha = -cha;
		}
		if (cha == min)
		{
			cout << arr[m] << endl;
		}

	}


	system("pause");
	return 0;
}