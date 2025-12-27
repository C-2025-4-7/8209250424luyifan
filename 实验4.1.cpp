#include<iostream>
using namespace std;
int main()
{
	int a[10], i, j, n = 0, c[10] = { 0 };
	cout << "Enter ten numbers:";
	for (int i = 0; i <= 9; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i <= 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			if (a[i] == a[j])
			{
				n++;
				c[j] = 1;
				break;
			}
		}
	}
	for (int m = 0; m <= 9; m++)
	{
		if (c[m] == 0)
			cout << a[m] << '\t';
	}
}