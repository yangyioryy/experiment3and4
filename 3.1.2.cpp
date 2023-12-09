#include<iostream>
using namespace std;
int min(int x, int y)
{
	return(x < y ? x : y);
}
int main()
{
	int a, b,c,i;
	cout << "任意输入两个正整数：";
	cin >> a >> b;
	if (a < 0 || b < 0)
	{
		cout << "错误" << endl;
	}
	else
	{
		for (i = min(a, b); ; --i)
		{
			if (a % i == 0 && b % i == 0)
			{
				cout << "二者的最大公约数为:" << i << endl;
				c = a / i * b;
				cout << "二者的最小公倍数为：" << c << endl;
				break;
			}
		}
	}
	return 0;
}