#include<iostream>
using namespace std;
int mon(int day)
{
	if (day==0)
	{
		return 1;
	}
	else
	{
		return mon(day) = (mon(day - 1) + 1) * 2;
	}
}
int main()
{
	int day=10;
	cout << "���ӵ�һ��ժ��Ϊ��" << mon(day);
	return 0;
}