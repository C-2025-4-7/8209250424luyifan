#include<iostream>
using namespace std;
int zd(int x, int y)
{
	int a;
	while (x % y != 0)
	{
		a = x % y;
		x = y;
		y = a;
	}
	return a;
}
int zx(int x, int y)
{
	int b,c;
	b = zd(x, y);
	c = x * y / b;
	return c;
}
int main()
{
	int m, n;
	cout << "请输入两个自然数";
	cin >> m >> n;
	cout <<"最大公约数是" << zd(m, n);
	cout << "最小公倍数是" << zx(m, n);
}
