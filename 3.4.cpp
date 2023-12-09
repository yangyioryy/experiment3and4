#include<iostream>
#include<cmath>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cout << "输入三边长:";
	cin >> a >> b >> c;
	double s = (a + b + c) / 2;
	if(is_valid(a, b, c) && is_area(a, b, c))          //判断三角形是否合法
	{
		cout << "三角形面积为:" << sqrt(s*(s - a)*(s - b)*(s - c)) << endl;
	}
	else
	{
		cout << "错误" << endl;
	}
	return 0;
}