#include<iostream>
using namespace std;
int main()
{
	cout << "请输入a的值";
	double a;
	cin >> a;
	double x = a, y;
	y = 0.5 * (x + a / x);
	while (y - x <= -1e-5 || y - x >= 1e-5)
	{
		x = y;
		y = 0.5 * (x + a / x);
	}
	cout << "a的平方根为" << y;
	return 0;
}