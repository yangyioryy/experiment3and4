#include<iostream>
using namespace std;
int main()
{
	bool door[100] = { 0 };
	for (int i = 0; i < 100; i++)         //第一位同学
	{
		door[i] = !door[i];
	}
	for (int j = 1; j< 100;j++)              //之后的99位同学
	{
		for (int m = 1; m < 100; )
		{
			door[m] = !door[m];
			m = m + j + 2;
		}
	}
	for (int k = 0; k < 100; k++)           //输出数据
	{
		if (door[k] == 1)
		{
			cout << k+1 << "\t";
		}
	}
	return 0;
}