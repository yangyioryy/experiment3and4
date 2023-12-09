#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)               //��list1���ݴ���
	{
		list3[i] = list1[i ];
	}
	for (int j = size1; j < size1 + size2 ; j++)           //��list2���ݴ���
	{
		list3[j] = list2[j - size1];
	}
	bool changed = true;                        
	do                                            //��������
	{
		changed = false;
		for (int k = 1; k < size1 + size2 ; k++)
		{
			if (list3[k] < list3[k - 1])
			{
				int a = list3[k];
				list3[k] = list3[k - 1];
				list3[k - 1] = a;
				changed = true;
			}
		}
	} while (changed == true);
	for (int i = 0; i < size1 + size2 ; i++)            //���
	{
		cout << list3[i] << "\t";
	}
}
int main()
{
	const int MaxN = 80; 
	int list1[MaxN], list2[MaxN];
	int list3[2 * MaxN - 2];
	int size1 = sizeof(list1) / sizeof(list1[0]);
	int size2 = sizeof(list2) / sizeof(list2[0]);
	cout << "Enter list1:";
	cin >> size1;
	for (int m = 0; m < size1; m++)                  //����list1
	{
		cin >> list1[m];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int m = 0; m < size2; m++)            //����list2
	{
		cin >> list2[m];
	}
	cout << "The merged list is ";
	merge(list1, size1 ,list2, size2,list3);
	return 0;
}