#include <iostream>

#include<cmath>

using namespace std;

class Date {
private:
	int year, month, day;

public:
	void show();

	int getDay()
	{
		int sum = 0;
		int run[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
		int cha[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			for (int n = 0; n < (month - 1); n++)
			{
				sum += run[n];
			}
			sum += day;
		}
		else
		{
			for (int n = 0; n < (month - 1); n++)
			{
				sum += cha[n];
			}
			sum += day;
		}
		return sum;
	}

	void SetD(int a, int b, int c)
	{
		year = a;
		month = b;
		day = c;
	}

	Date(int a,int b,int c)
	{
		year = a;
		month = b;
		day = c;
	}

	Date()
	{
		year = 0;
		month = 0;
		day = 0;
	}
};

void Date::show()
{
	cout << year << "/" << month << "/" << day << endl;
}

int main()
{
	int y1, m1, d1, y2, m2, d2;
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	Date day1(y1, m1, d1), day2;   //d1为2020年4月8日
	day1.show();
	cout << day1.getDay() << endl;
	day2.SetD(y2, m2, d2);    //d2为1997年7月1日
	day2.show();
	cout << day2.getDay() << endl;
	system("pause");
	return 0;
}