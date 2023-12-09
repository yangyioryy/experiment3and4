#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10];
	int j;
	cout << "输入10个数据:";
	for (int i = 0; i < 10; i++)     //输入10个数
	{
		cin >> a[i];
	}
	cout << "不同的数据为:" << a[0] << "\t";
	for (int j = 1; j < 10; j++)       //挑选不同数
	{
		for (int k = j - 1; k >= 0; k--)         //每个数依次与前面的数据对比
		{
			if (a[j] != a[k])
			{
				if (k == 0)
				{
					cout << a[j] <<"\t";
				}
			}
			else
			{
				break;
			}
		}

	}
	return 0;
}



