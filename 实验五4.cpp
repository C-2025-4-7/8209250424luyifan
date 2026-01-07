#include<iostream>
using namespace std;
class student {
private:
	int xh;
	int cj;
public:
	void set(int x, int c)
	{
		cin >> x >> c;
		xh = x;
		cj = c;
	}
	int score()
	{
		return cj;
	}
	int id()
	{
		return xh;
	}
};
	void max(student *a)
	{
		int m = 0;
		for (int i = 0; i <= 4; i++)
		{
			if (a[i].score() > a[m].score())
			{
				m = i; 
			}
		}
		cout << "学号为" << a[m].id() << "的成绩最高且为" << a[m].score();
	}
int main()
{
	student a[5];
	student *p = a;
	int x = 0, c = 0;
	for (int i = 0; i <= 4; i++)
	{
		a[i].set(x, c);
	}
	max(a);
}