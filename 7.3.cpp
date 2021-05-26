#include<iostream>
using namespace std;

class Complex
{
	int R, I;//R为实部，I为虚部

public:
	void show()
	{
		if (R == 0)
		{
			if (I > 0)
				cout << I << "i" << endl;
			else if (I == 0)
				cout << 0 << endl;
			else
				cout << -I << "i" << endl;
		}
		else if (I > 0)
			cout << R << "+" << I << "i" << endl;
		else if (I == 0)
			cout << R << endl;
		else
			cout << R << "-" << -I << "i" << endl;
	}

	Complex add(Complex m)
	{
		m.R = R + m.R;
		m.I = I + m.I;
		return m;
	}

	Complex(int a, int b)
	{
		R = a;
		I = b;
	}

	Complex()
	{
		R = 0;
		I = 0;
	}
};


int main()
{
	int r1, r2, i1, i2;
	cin >> r1 >> i1 >> r2 >> i2;
	Complex a(r1, i1), b(r2, i2), c;
	c = a.add(b);//c=a+b
	c.show();
	return 0;
}