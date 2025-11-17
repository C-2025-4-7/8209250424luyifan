#include<iostream>
using namespace std;
int main()
{
	float a, b,c;
	char x;
	cin >> a >> x>> b;
	int y = x;
	if (y == 43)
	{
		c = a + b;
		cout << c;
	}
	else if (y == 45)
	{
		c = a-b;
		cout << c;
	}
	else if (y == 42)
	{
		c = a * b;
		cout << c;
	}
	else if (y == 47)
	{
		if (b == 0)
		{
			cout << "无法运算";
		}
		else
		{
			c = a / b;
			cout << c;
		}
	}
	else if (y == 37)
	{
		int e = a;
		int f = b;
		if (e == a && f == b)
		{
			c = e % f;
			cout << c;
		}
		else
		{
			cout << "无法运算";
		}
	}
	else
	{
		cout << "无法运算";
	}
	return 0;
}