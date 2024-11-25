#include <iostream>
using namespace std;
int main ()
{
	int age;
	char parent;
	double money;
	string toPrintShow, toPrintMoney;
	cout << " Enter age: ";
	cin >> age;
	if(age<13) {
	cout << "with parent? ";
	cin >> parent;
	cout << "Enter amount of money: ";
	if(parent)
		toPrintShow = "PG & G show. ";
		toPrintShow = "G show. ";
	}
	else if (age >= 13 && age < 16) {
		if (parent)
		toPrintShow = "R, PG % G show. ";
	else
		toPrintShow = "PG & G show. ";
	}
	else
		toPrintShow = "R, PG & G show. ";
	cout << "Enter money: ";
	cin >> money;
	if(money<7.5)
		toPrintMoney = "Not enough money. ";
	else if (money<10.5)
		toPrintMoney = "can go to matinee show. ";
	else
		toPrintMoney = "Can go to evening & matinee show.";
	cout << toPrintMoney << endl;
	cout << toPrintShow << endl;
	return 0;
}