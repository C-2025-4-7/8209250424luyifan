#include<iostream>
using namespace std;
int indexOf(const char *s1, const char *s2)
{
	int a1, a2, b = -2;
	a1 = strlen(s1);
	a2 = strlen(s2);
	if (a1 > a2)
		return -1;
	else
	{
		for (int i = 0; i <= a2 - 1; i++)
		{
			if (s1[0] == s2[i])
			{
				b = i;
				for (int j = 1; j <= a1 - 1; j++)
				{
					i++;
					if (s1[j] != s2[i])
					{
						if (i <= b + a1 - 1)
							return -1;
						else
							return b;
					}
				}
				break;
			}
		}
		if (b == -2)
			return -1;
		else
			return b;
	}
}
int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin >> s1;
	cout << "Enter the second string:";
	cin >> s2;
	cout << "indexOf (¡°" << s1 << "¡±" << "," << "¡°" << s2 << "¡±)is " << indexOf(s1, s2);
}