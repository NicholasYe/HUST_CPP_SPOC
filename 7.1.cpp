/*��Ŀ������һ�����࣬���ݳ�ԱΪ��뾶(double)

��Ƽ���������������ĳ�Ա����,д�����������Ա�д���ࡣ
���������ʽ��S=4*pi*r^2
���������ʽ��V=4/3*pi*r^3
����pi��Բ���ʣ�r^2����r��ƽ����r^3����r��������
��ע���������������ѧ���ʽ������c++���ʽ

������������.JPG
-------------------------------------------------------*/

#include <iostream>
using namespace std;
const double PI = 3.14159;
class Sphere {
	/**********Program**********/

private:
	double r;

public:
	void show();

	double getS()
	{
		return (4 * PI * r * r);
	}

	double getV()
	{
		double v = (4 * PI * r * r * r);
		return (v/3);
	}

	void setR(double a)
	{
		r = a;
	}

	Sphere(double a)
	{
		r = a;
	}

	Sphere()
	{
		r = 0;
	}


	/**********  End  **********/
};



void Sphere::show()

{

	cout << "�뾶Ϊ" << r << "��������Ϊ" << getS() << endl;

	cout << "�뾶Ϊ" << r << "�������Ϊ" << getV() << endl;

}



int main()
{
	double r1, r2;
	cin >> r1 >> r2;
	Sphere  q1(r1), q2;
	q1.show();
	q2.show();
	q2.setR(r2);
	q2.show();
	return 0;
}


