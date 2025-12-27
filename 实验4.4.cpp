#include<iostream>
using namespace std;
void merge(int list1[], int size1, int list2[], int size2,int list3[])
{
	int size3;
	size3 = size1 + size2;
	for (int i = 0; i <= size1-1; i++)
	{
		list3[i] = list1[i];
	}
	for (int j = 0; j <= size2-1; j++)
	{
		if (list2[j] >= list3[size1-1])
		{
			for (int p = size1; p <= size3 - 1; p++)
			{
				for (int q = j; q <= size2 - 1; q++)
				{
					list3[p] = list2[q];
					break;
				}
			}
		}
		for (int m = 0; m <= size3-1; m++)
		{
			if (list2[j] < list3[m])
			{
				for (int n = size3-1; n > m; n--)
				{
					list3[n] = list3[n - 1];
				}
				list3[m] = list2[j];
			}
		}
	}
}
int main()
{
	int size1, size2;
	cout << "Enter list1:";
	cin >> size1;
	int list1[80];
	int list2[80];
	int list3[160];
	for (int i = 0; i <= size1 - 1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i <= size2 - 1; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list:";
	for (int j = 0; j <= size1 + size2; j++)
	{
		cout << list3[j];
	}
}