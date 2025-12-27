#include<iostream>
using namespace std;
#include"mytemperature.h"
int main()
{
	cout << "Celsius" << '\t' << "Fahrenheit" << '\t' <<"|" <<'\t' << "Fahrenheit" << "Celsius" << endl;
	cout << 40.0 << '\t' << celsius_to_fah(40.0) << '\t' << "|" << '\t' << 120.0 << '\t' << fahrenheit_to_cels(120.0) << endl;
	cout << 39.0 << '\t' << celsius_to_fah(39.0) << '\t' << "|" << '\t' << 110.0 << '\t' << fahrenheit_to_cels(110.0) << endl;
	cout << "......" << '\t' << "......" << '\t' << "|" << '\t' << "......." << '\t' << "......" << endl;
	cout << 31.0 << '\t' << celsius_to_fah(31.0) << '\t' << "|" << '\t' << 30.0 << '\t' << fahrenheit_to_cels(30.0) << endl;
}
