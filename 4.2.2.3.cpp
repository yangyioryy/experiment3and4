#include<iostream>
using namespace std;
void row(int a[],int num)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int i = 1; i < num; i++)         //����
		{
			if (a[i] <a[i - 1])
			{
				int m = a[i];
				a[i] = a[i - 1];
				a[i - 1] = m;
				changed = true;
			}
		}
	} while (changed == true);
}
int main()
{
	int num;
	cout << "��������Ԫ�ظ���:";
	cin >> num;
	int* p = new int[num];
	cout << "��������Ԫ��:";
	for (int i = 0; i < num; i++)
	{
		cin>>p[i];
	}
	cout << "�����:";
	row(p,num);
	for (int j = 0; j <num; j++)                 //���
	{
		cout <<*(p+j)<< "\t";
	}
	delete[]p;
	return 0;
}