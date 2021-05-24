#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	char arr1[6][45] = { ' ' };
	int cnt1[6] = { 0 };

	for (int i = 0; i < 6; i++)
	{
		cin.getline(arr1[i], 45);
	}
	for (int i = 0; i < 6; i++)
	{
		int Now = 0;

		int Cnt = 0;
		while (arr1[i][Now] != '\0')
		{
			Cnt++;
			Now++;
		}
		cnt1[i] = Cnt;
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (cnt1[j + 1] > cnt1[j])
			{
				int temp = cnt1[j];
				char temp_cha[45] = { ' ' };
				for (int m = 0; m < 45; m++)
				{
					temp_cha[m] = arr1[j][m];
				}

				cnt1[j] = cnt1[j + 1];
				for (int m = 0; m < 45; m++)
				{
					arr1[j][m] = arr1[j + 1][m];
				}

				cnt1[j + 1] = temp;
				for (int m = 0; m < 45; m++)
				{
					arr1[j + 1][m] = temp_cha[m];
				}
			}
		}
	}

	for (int m = 0; m < 6; m++)
	{
		cout << arr1[m] << endl;
	}

	system("pause");
	return 0;
}