#include <iostream> 
#include <cstring> 
using namespace std;

char* ISBN(char* arr)
{
	char* charISBN = new char[14];
	for (int m = 0; arr[m] != '\0'; m++)
	{
		charISBN[m] = arr[m];
	}

	int sum = 0, step = 1;
	for (int n = 0; n <= 10; n++)
	{
		if (charISBN[n] != '-')
		{
			sum += (int(charISBN[n] - 48) * step);
			step++;
		}
	}

	charISBN[11] = '-';

	if (sum % 11 == 10)
	{
		charISBN[12] = 'X';
	}
	else
	{
		char c = (sum % 11) + 48;
		charISBN[12] = c;
	}

	charISBN[13] = 0;

	return charISBN;
}

int main()
{
	char charISBN11[12], * charISBN;
	cin >> charISBN11;
	charISBN = ISBN(charISBN11);
	cout << charISBN << endl;
	delete[]charISBN;
	return 0;
}