#include<iostream>
using namespace std;
int main()
{
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û";
	char a;
	cin >> a;
	int b = a;
	if (b < 91)
	{
		cout << b;
	}
	else
	{
		int c = b - 32;
		char d = c;
		cout << d;
	}
	return 0;
}