#include<iostream>
using namespace std;
int indexOf(const char *s1, const char* s2)
{
	int i = 0;
	for (int j = 0; (i < strlen(s2)) && j < (strlen(s1)); j++)      //判断是否为子串
	{
		if (s1[j] != s2[j + i])
		{
			i++;
			j = -1;
			continue;
		}
		if (j == strlen(s1) - 1)        //将s1的每个字符均比对成功
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	const int MaxN = 100;
	char s1[MaxN] = { 0 }, s2[MaxN] = { 0 };
	cout << "Enter the first string:";
	cin.getline(s1, MaxN);                   //输入s1字符串，当输入回车时结束输入
	cout << "Enter the second string: ";
	cin.getline(s2, MaxN);                   //输入s2字符串，当输入回车时结束输入
	cout << "indexOf(" << s1 << "," << s2 << ")is:" << indexOf(s1, s2);
	return 0;
}