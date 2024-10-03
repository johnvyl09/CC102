#include <iostream> 
using namespace std;

int main()
{
	string nickname, level, school;
	
	cout << "Nickname\t\t: ";
	cin >> nickname;
	cout << "Course - Year Level\t: ";
	cin >> level;
	cout << "School\t\t\t: ";
	cin >> school;
	cout << "Wow Congrats " <<  nickname << "!" << " " << level << " is a nice course and you are studying in " <<  school << " which is one of the Center of Excellence in Tertiary Education " << endl;
	return 0;

}