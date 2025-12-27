#include<iostream>
using namespace std;
int main()
{
	bool a[100] = { true };
	for (int i = 0; i <= 99; i++)
	{
		for (int j = i; j <= 99; j += i)
		{
			if (a[j] == true)
				a[j] = false;
			else
				a[j] = true;
		}
	}
	for (int m = 0; m <= 99; m++)
	{
		if (a[m] == true)
		{
			cout << m + 1 << " ";
		}
	}
}