#include<iostream>
using namespace std;
int main()
{
	int a, b;
	float d;
	cout << "请输入圆锥的半径";
	cin >> a;
	cout << "请输入圆锥的锥高";
	cin >> b;
	const double p = 3.14;
	d =  p * a * a * b/3;
	cout << "圆锥的体积为" << d;
	return 0;
}