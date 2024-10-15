#include <iostream>
#include <cmath> // for sqrt() and pow()

using namespace std;

int main()
{
	double x1, y1, x2, y2, distance ;
	cout << "********************************************" << endl;
	cout << "Enter the x of the first point\t: ";
	cin >> x1;
	cout << "Enter the y of the first point\t: ";
	cin >> y1;
	cout << "Enter the x of the second point : ";
	cin >> x2;
	cout << "Enter the y of the second point : ";
	cin >> y2;
	cout << "********************************************" << endl;
	distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	
	cout << "The distance between the two points is : " << distance << endl;
	return 0;
}