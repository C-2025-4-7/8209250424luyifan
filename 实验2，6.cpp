#include<iostream>
using namespace std;
int main()
{
	int a, b,c,d,e,f;
	cin >> a >> b;
	e = a;
	f = b;
	while (f != 0)
	{
		c = e % f;
		e = f;
		f = c;
	}
	cout << "最大公约数为" << e;
	d = a * b / e;
	cout << "最小公倍数为" << d;
	return 0;
}