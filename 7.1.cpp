/*题目：定义一个球类，数据成员为球半径(double)

设计计算球的面积和体积的成员函数,写出主函数测试编写的类。
求球面积公式：S=4*pi*r^2
求球体积公式：V=4/3*pi*r^3
其中pi是圆周率，r^2代表r的平方，r^3代表r的立方，
请注意这里给出的是数学表达式，不是c++表达式

输出结果见样张.JPG
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

	cout << "半径为" << r << "的球表面积为" << getS() << endl;

	cout << "半径为" << r << "的球体积为" << getV() << endl;

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


