#include<iostream>
using namespace std;
class csgo {
	private:
		float length;
		float width;
		float height;
	public:
		void qsr(float l, float w, float h)
		{
			cin >> l >> w >> h;
			length = l;
			width = w;
			height = h;
		}
		void js()
		{
			float d = length * width * height;
			cout << d;
		}
};
int main()
{
	csgo cs;
	float l=0;
	float w=0;
	float h = 0;
	cs.qsr(l, w, h);
	cs.js();
	return 0;
}