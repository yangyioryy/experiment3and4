#include<iostream>
using namespace std;
int min(int x, int y)
{
	return(x < y ? x : y);
}
int main()
{
	int a, b,c,i;
	cout << "��������������������";
	cin >> a >> b;
	if (a < 0 || b < 0)
	{
		cout << "����" << endl;
	}
	else
	{
		for (i = min(a, b); ; --i)
		{
			if (a % i == 0 && b % i == 0)
			{
				cout << "���ߵ����Լ��Ϊ:" << i << endl;
				c = a / i * b;
				cout << "���ߵ���С������Ϊ��" << c << endl;
				break;
			}
		}
	}
	return 0;
}