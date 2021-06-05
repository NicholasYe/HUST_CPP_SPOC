#include<iostream>
#include<cmath>
using namespace std;
const int MaxElement = 100;

class Element {  //��Ԫ�ء���
public:
	int n;
	Element(int i = 0) :n(i) {}
};

class MySet {                                    //�����ϡ���
	Element* element;                            //ָ��洢Ԫ�ص������ָ��
	int size;                       //�����С
	int counter;                               //������Ԫ�صĸ���
	int current;                    //���ڱ�ʾɨ��λ�ã�����ǰ��ɨ��Ԫ���������е��±�

public:
	MySet() :element(new Element[100]), size(100), counter(0), current(0) {}
	~MySet() { delete[]element; }
	void add(Element ele);                     //�򼯺������һ��Ԫ�أ�������С�����˳��
	void remove(Element ele);        //ɾ��������ָ����Ԫ��
	void scanFirst() { current = 0; }    //��ɨ��λ�ö�λ����Ԫ��
	void scanNext() { ++current; }    //��ɨ��λ�ö�λ����һ��Ԫ��
	Element get()const { return element[current]; }             //���ص�ǰ��ɨ���Ԫ��
	bool isEnded()const { return current >= counter; }       //����Ѿ�û�и����Ԫ�ؿ�ɨ���ˣ�����true��
	void show();                                                                 //��ʾ����������Ԫ��
};

void MySet::show() {
	scanFirst();                 //ɨ��λ�ö�λ����Ԫ��
	while (!isEnded()) {
		cout << get().n << "  ";
		scanNext();                 //ɨ�趨λ����һ��Ԫ��
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