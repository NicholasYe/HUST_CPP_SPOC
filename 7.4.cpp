#include<iostream>
#include<cmath>
using namespace std;
const int MaxElement = 100;

class Element {  //“元素”类
public:
	int n;
	Element(int i = 0) :n(i) {}
};

class MySet {                                    //“集合”类
	Element* element;                            //指向存储元素的数组的指针
	int size;                       //数组大小
	int counter;                               //数组中元素的个数
	int current;                    //用于表示扫描位置，及当前被扫描元素在数组中的下标

public:
	MySet() :element(new Element[100]), size(100), counter(0), current(0) {}
	~MySet() { delete[]element; }
	void add(Element ele);                     //向集合中添加一个元素，保持由小到大的顺序。
	void remove(Element ele);        //删除集合中指定的元素
	void scanFirst() { current = 0; }    //将扫描位置定位于首元素
	void scanNext() { ++current; }    //将扫描位置定位于下一个元素
	Element get()const { return element[current]; }             //返回当前被扫描的元素
	bool isEnded()const { return current >= counter; }       //如果已经没有更多的元素可扫描了，返回true。
	void show();                                                                 //显示集合中所有元素
};

void MySet::show() {
	scanFirst();                 //扫描位置定位于首元素
	while (!isEnded()) {
		cout << get().n << "  ";
		scanNext();                 //扫描定位于下一个元素
	}
	cout << endl;
}

void MySet::add(Element m)
{
	scanFirst();
	do
	{
		if (m.n == element[current].n)
		{
			counter--;
			break;
		}
		else if (element[current].n == 0 && element[current + 1].n == 0)
		{
			element[current].n = m.n;
			break;
		}
		else if (m.n > element[current].n && element[current + 1].n == 0)
		{
			element[current + 1] = m.n;
			break;
		}
		else if (m.n > element[current].n && m.n > element[current + 1].n)
		{
			current++;
		}
		else if (m.n > element[current].n && m.n < element[current + 1].n)
		{
			for (int m = counter; m > current; m--)
			{
				element[m].n = element[m - 1].n;
			}
			element[current + 1].n = m.n;
			break;
		}
		else if (m.n < element[0].n)
		{
			for (int m = counter; m > 0; m--)
			{
				element[m].n = element[m - 1].n;
			}
			element[0].n = m.n;
			break;
		}
		scanNext();
	} while (1);
	counter++;
}

void MySet::remove(Element e)
{
	scanFirst();
	do
	{
		if (e.n == element[current].n)
		{
			for (int i = current; i < 99; i++)
			{
				element[i].n = element[i + 1].n;
			}
			counter--;
			element[99].n = 0;
			break;
		}
		else
		{
			scanNext();
		}
	} while (element[current].n != 0);
}

int main() {
	int a[7], i;
	for (i = 0; i < 7; i++)
		cin >> a[i];
	MySet set;
	i = 0;
	set.add(Element(a[i++]));
	set.add(Element(a[i++]));
	set.add(Element(a[i++]));
	set.add(Element(a[i++]));
	set.show();
	set.remove(Element(a[i++]));
	set.remove(Element(a[i++]));
	set.add(Element(a[i++]));
	set.show();
	system("pause");
	return 0;
}