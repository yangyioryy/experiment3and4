#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i;
	for (i = num - 1; i > 1; i--)              //判断是否为素数
	{
		double t = num / i;
		if (num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a[200] = { 0 };
	int i=2,j=0;
	while(j<200)
	{    
		if (is_prime(i))
		 {
			a[j] = i;
			j ++;
		 }
		i++;
	}
	for (int k = 0; k < 200; k++)          //每行10个输出
	{
		cout << a[k] << "\t";
		if ((k + 1) % 10 == 0)           
		{
			cout << endl;
		}
	}
	return 0;
}