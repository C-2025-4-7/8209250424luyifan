#include<iostream>
using namespace std;
void px(double a[],int n)
{
	for(int j=0;j<=n-1;j++)
	{
		for (int i = 0; i <= n - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				float b;
				b = a[i];
				a[i] = a[i + 1];
				a[i + 1] = b;
			}
		}
	}
}
int main()
{
	double b[10];
	for (int i = 0; i <= 9; i++)
		cin >> b[i];
	px(b,10);
	for (int j = 0; j <= 9; j++)
	{
		cout << b[j];
	}
}