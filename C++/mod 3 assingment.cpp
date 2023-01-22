#include <iostream>
#include <iomanip> 
using namespace std;
int main()

{
	int number, length, width, base, height, area, radius;
	cout << "Architect Area Calculator:" << endl;
	cout << "***************************" << endl;
	cout << "1.   Rectangle" << endl;
	cout << "2.   Triangle" << endl;
	cout << "3.   Circle" << endl;
	cout << "4.   Quit" << endl;
	cout << "Please enter a menu item (1-4)";
	cin >> number;
	if (number = 1)
	{
		cout << "Rectangle" << endl;
		cout << "please enter the length >" << endl;
		cin >> length;
		cout << "please enter the width >" << endl;
		cin >> width;
		area = length * width;
		cout << "Area = ";
		cout << area<< endl ;

	}
	else if (number = 2)

	{
		cout << "Triangle" << endl;
		cout << "please enter the base >" << endl;
		cin >> base;
		cout << "please enter the height >" << endl;
		cin >> height;
		area = base * height ;
		
		cout << "Area = ";
		cout << area;
	}
	else if (number = 3) {
	cout << "Circle" << endl;
	cout << "Please enter the radius >" << endl;
	cin >> radius;
	area = radius * 3.14;
	cout << area << endl ;
}
	
	else if  (number = 4);{


		
		cout<<"Thanks for trying our program";
	}
	
	

	
	
}