#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	cout << "ÇëÊäÈë»ªÊÏÎÂ¶È";
	cin >> a;
	b = (a - 32) / 1.8;
	cout << fixed<<setprecision(2)<<b;
	return 0;
}