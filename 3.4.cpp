#include<iostream>
#include<cmath>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cout << "�������߳�:";
	cin >> a >> b >> c;
	double s = (a + b + c) / 2;
	if(is_valid(a, b, c) && is_area(a, b, c))          //�ж��������Ƿ�Ϸ�
	{
		cout << "���������Ϊ:" << sqrt(s*(s - a)*(s - b)*(s - c)) << endl;
	}
	else
	{
		cout << "����" << endl;
	}
	return 0;
}