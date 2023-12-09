#include<iostream>
using namespace std;
const int MaxN = 100;
int parseHex(const char* const hexString)
{
	int t = strlen(hexString);
	int sum=0;
	int b[MaxN] = { 0 };
	for (int i = 0; i < t; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')                  //将A~F转换为16进制数储存在b中
		{
			b[i] = hexString[i] - 'A'+10;
		}
		else
		{
			if (hexString[i] >= '0' && hexString[i] <= '9')             //将字符类型的1~9转换为数字型储存在b中
			{
				b[i] = hexString[i] - '0';
			}
			else if (hexString[i] >= 'a' && hexString[i] <= 'f')                  //将a~f转换为16进制数储存在b中
			{
				b[i] = hexString[i] - 'a'+10;
			}
		}
	}
	int j = 0;
	while (j<t)
	{                                                      //将b的每一项乘上阶数
		for (int n = 0; n < t-j-1; n++)
		{
			b[j] = 16 * b[j];
		}
		j++;
	}
	for (int k = 0; k < t; k++)                    //将b对应的每一位相加
	{
		sum = sum + b[k];
	}
	return sum;
}
int main()
{
	char a[MaxN]; 
	cout << "输入一个十六进制数:";
	cin.getline(a, MaxN);               //输入字符串a
	int len = strlen(a);
	for (int i = 0; i < len; i++)               //检查输入的十六进制数是否符合格式
	{
		if ((a[i] >='A' && a[i] <= 'F') || (a[i] >= '0' && a[i] <= '9') || a[i] >= 'a' && a[i] <= 'f')
		{
			continue;
		}
		else
		{
			cout << "数据错误";
			return 0;
		}
	}
	cout << "转换为十进制为:" << parseHex(a) << endl;
	return 0;
}