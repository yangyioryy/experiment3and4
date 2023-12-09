#include<iostream>
using namespace std;
int main()
{
	double a[10];
	cout << "输入10个双精度数字:";
	for (int i = 0; i < 10; i++)         //输入数据
	{
		cin >> a[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 1; j < 10; j++)         //排序
		{
			if (a[j] < a[j - 1])
			{
				double m = a[j];
				a[j] = a[j - 1];
				a[j - 1] = m;
				changed = true;
			}
		}
	} while (changed ==true);
	cout << "起泡排序后数据为:";
	for (int i = 0; i < 10; i++)         //输出数据
	{
		cout << a[i] << "\t";
	}
	return 0;
}