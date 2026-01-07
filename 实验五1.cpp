#include<iostream>
using namespace std;
class Time {
	private:
		int hour;
		int minute;
		int sec;
	public:
		void settime(int h, int m, int s)
		{
			cin >> h >> m >> s;
			hour = h;
			minute = m;
			sec = s;
		}
		void showtime()
		{
			cout << hour << ":" << minute << ":" << sec;
		}
};
int main()
{
	int h=0, m=0, s=0;
	Time tl;
	tl.settime(h, m, s);
	tl.showtime();
	return 0;
}