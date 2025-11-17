#include<iostream>
using namespace std;
int main()
{
	int b=0,c=0;
	float d;
	for (int a = 2; a <= 100; a *= 2)
	{
		b++;
		c += a;
	}
	d = c * 0.8 / b;
	cout << d;
}