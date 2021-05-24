#include <iostream>
using namespace std;

void longest(char* m1, char* m2)
{
	int a = 0, b = 0;//开始位与结尾位

	char temp[50] = { '\0' };
	for (int k = 0; m1[k] != '\0'; k++)
	{
		temp[k] = m1[k];
	}

	char arr[30][50] = { '\0' };
	int count[30] = { 0 };
	int step = -1;
	for (int m = 0; m < 30; m++)
	{
		for (int n = 0, a = 0; n < 50; n++)
		{
			step++;
			if ((temp[step] >= 'a' && temp[step] <= 'z') || (temp[step] >= 'A' && temp[step] <= 'Z'))
			{
				a++;
				arr[m][n] = temp[step];
				count[m] = a;
			}
			else
			{
				break;
			}
		}
	}
	
	int max = 0;
	for (int h = 0; h < 30; h++)
	{
		if (count[h] > max)
		{
			max = count[h];
		}
	}

	int end = 0;
	for (int l = 0; l < 30; l++)
	{
		if (count[l] == max)
		{
			end = l;
		}
	}

	for (int q = 0; q < 30; q++)
	{
		m2[q] = arr[end][q];
		if (arr[end][q + 1] == '\0')
		{
			m2[q + 1] = '\0';
			break;
		}
	}
}


int main()
{
	char c1[100];
	char c2[100];
	cin.getline(c1, 100);
	longest(c1, c2);
	cout << c2 << endl;
	return 0;
}