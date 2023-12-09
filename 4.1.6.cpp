#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < strlen(s); i++)                  //统计次数
	{
		for (int j = 97; j < 122; j++)
		{
			if (s[i] == j || s[i] == j - 32)
			{
				counts[j - 97]++;
			}
		}
	}
	for (int k = 0; k < 26; k++)
	{
		if (counts[k] != 0)
		{
			cout << char(k + 97) << ":" << counts[k]<<"times" << endl;
		}
	}
}
int main()
{
	const int MaxN = 100;
	char s[MaxN] = { 0 };
	int counts[26] = { 0 };
	cout << "Enter a string:";
	cin.getline(s, MaxN);             //输入数据
	count(s, counts);
	return 0;
}