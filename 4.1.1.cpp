#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10];
	int j;
	cout << "����10������:";
	for (int i = 0; i < 10; i++)     //����10����
	{
		cin >> a[i];
	}
	cout << "��ͬ������Ϊ:" << a[0] << "\t";
	for (int j = 1; j < 10; j++)       //��ѡ��ͬ��
	{
		for (int k = j - 1; k >= 0; k--)         //ÿ����������ǰ������ݶԱ�
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



