#include<iostream>
using namespace std;
int gcd(int x, int y)
{
	int t;
	for (t = (x < y ? x : y); t > 0; t--)
	{
		if ((x % t == 0) && (y % t) == 0)
		{
			return t;
		}
	}
}
int main()
{
	int m,n;
	cout << "输入任意两个自然数：";
	cin >> m >> n;
	if (m< 0 || n < 0)                     //判断是否为自然数
	{
		cout << "错误" << endl;
	}
	cout << "最大公约数为：" <<  gcd(m,n)<< endl;
	return 0;

}