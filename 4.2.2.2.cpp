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
		if (hexString[i] >= 'A' && hexString[i] <= 'F')                  //��A~Fת��Ϊ16������������b��
		{
			b[i] = hexString[i] - 'A'+10;
		}
		else
		{
			if (hexString[i] >= '0' && hexString[i] <= '9')             //���ַ����͵�1~9ת��Ϊ�����ʹ�����b��
			{
				b[i] = hexString[i] - '0';
			}
			else if (hexString[i] >= 'a' && hexString[i] <= 'f')                  //��a~fת��Ϊ16������������b��
			{
				b[i] = hexString[i] - 'a'+10;
			}
		}
	}
	int j = 0;
	while (j<t)
	{                                                      //��b��ÿһ����Ͻ���
		for (int n = 0; n < t-j-1; n++)
		{
			b[j] = 16 * b[j];
		}
		j++;
	}
	for (int k = 0; k < t; k++)                    //��b��Ӧ��ÿһλ���
	{
		sum = sum + b[k];
	}
	return sum;
}
int main()
{
	char a[MaxN]; 
	cout << "����һ��ʮ��������:";
	cin.getline(a, MaxN);               //�����ַ���a
	int len = strlen(a);
	for (int i = 0; i < len; i++)               //��������ʮ���������Ƿ���ϸ�ʽ
	{
		if ((a[i] >='A' && a[i] <= 'F') || (a[i] >= '0' && a[i] <= '9') || a[i] >= 'a' && a[i] <= 'f')
		{
			continue;
		}
		else
		{
			cout << "���ݴ���";
			return 0;
		}
	}
	cout << "ת��Ϊʮ����Ϊ:" << parseHex(a) << endl;
	return 0;
}