#include<iostream>
using namespace std;
int main()
{
	cout << "请输入三角形的三边长";
	float a, b, c, d;
	cin >> a>> b >> c;
	d = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a ==b || b ==c || a ==c)
		{
			cout << "为等腰三角形，周长为" << d;
		}
		else
		{
			cout << "不是等腰三角形，周长为" << d;
		}
	}
	else
	{
		cout << "不是三角形";
	}
	return 0;
}