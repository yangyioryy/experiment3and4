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
	cout << "��������������Ȼ����";
	cin >> m >> n;
	if (m< 0 || n < 0)                     //�ж��Ƿ�Ϊ��Ȼ��
	{
		cout << "����" << endl;
	}
	cout << "���Լ��Ϊ��" <<  gcd(m,n)<< endl;
	return 0;

}