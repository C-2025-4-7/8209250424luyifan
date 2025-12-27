#include<iostream>
using namespace std;
int dog(int a)
{
	if (a == 1)
		return (a+1)*2;
	if (a > 1)
		return (dog(a - 1)+1)*2;
}
int main()
{
	cout << dog(9);
}