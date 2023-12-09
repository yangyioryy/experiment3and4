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
	cout << "猴子第一天摘桃为；" << mon(day);
	return 0;
}