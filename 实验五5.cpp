#include<iostream>
using namespace std;
class point {
private:
	int x, y;
public:
	point(int X = 60, int Y = 80)
	{
		x = X;
		y = Y;
	}
	void setpoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")";
	}
};
int main()
{
	point dian;
	dian.setpoint(1, 2);
	dian.display();
}