#include<iostream>
#include"student.h"
#include"student.cpp"
using namespace std;
int main() {
	int Num=007;
	char Name[20] = {"tcg"};
	char Sex = { 'm' };
	Student stud;
	stud.set_value(Num, Name, Sex);
	stud.display();
	return 0;
}