#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	double a;
	a = cel * 1.8 + 32;
	return a;
}
double fahrenheit_to_cels(double fah)
{
	double b;
	b = (fah - 32) / 1.8;
	return b;
}
