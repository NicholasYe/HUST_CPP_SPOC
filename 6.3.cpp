#include <iostream>
using namespace std;

void InsSort(int* arr, int nu, int add)
{
	if (add > arr[9])
	{
		arr[10] = add;
		return;
	}
	else if (add < arr[0])
	{
		for(int bak = nu; bak > 0; bak--)
		{
			int temp = arr[bak];
			arr[bak] = arr[bak - 1];
			arr[bak - 1] = temp;
		}
		arr[0] = add;
		return;
	}
	for (int i = 0; i < nu - 1; i++)
	{
		if (add > arr[i] && add < arr[i + 1])
		{
			for (int bak = nu; bak > i + 1; bak--)
			{
				int temp = arr[bak];
				arr[bak] = arr[bak - 1];
				arr[bak - 1] = temp;
			}
			arr[i + 1] = add;
			break;
		}
	}
}

int main()
{
	int data[11] = { 12,34,56,78,90,167,258,389,945,1890 };
	int num;
	cin >> num;
	InsSort(data, 10, num);
	int i;
	cout << data[0];
	for (i = 1; i < 11; i++)
		cout << " " << data[i];
	cout << endl;
	return 0;
}