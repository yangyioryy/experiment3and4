#include<iostream>
using namespace std;
int main()
{
	double a[10];
	cout << "����10��˫��������:";
	for (int i = 0; i < 10; i++)         //��������
	{
		cin >> a[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 1; j < 10; j++)         //����
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
	cout << "�������������Ϊ:";
	for (int i = 0; i < 10; i++)         //�������
	{
		cout << a[i] << "\t";
	}
	return 0;
}