#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i;
	if (num == 2)
		return true;
	else 
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
				break;
		}
		if (i == num)
			return true;
		else
			return false;
	}
}
int main()
{
	int i,a=0;
	for (i = 2; i <= 2000; i++)
	{
		if (is_prime(i) == 1)
		{
			a++;
			if (a % 10 != 0)
				cout << i << '\t';
			else
				cout << i << '\n';
		}
		if (a == 200)
			break;
	}
}