#include <iostream> <iomanip>
using namespace std;
int main()
{
	int userinput, counter;
	const double Gold = 0.01, silver = 0.02, bronze = 0.04, initial_fee = 1200.00;
	double yearlyfee;
	cout << "      Welcome to Ronda’s Strikeforce Gym!!\n";
	cout << "\n";
	cout << "x-------------------------------------------------- - x\n";
	cout << "Membership Fee Calculator\n";
	cout << "\n";
	cout << " 1. Gold\n";
	cout << " 2. Silver\n";
	cout << " 3. Bronze\n";
	cout << " 4. Quit\n";
	cout << "\n";

	do
	{
		cout << "Please enter your membership level (1-3 Enter 4 to Quit) >";
		cin >> userinput;
	} while (userinput > 4 || userinput < 1);
	
	if  (userinput ==1)
	{
		yearlyfee = initial_fee;
		
		for (int i = 1; i < 11; i++)
		{
			cout << "year";
			cout << i;
			cout << "  ";
			cout << yearlyfee << endl;
			yearlyfee += yearlyfee * Gold;

		}
	
	}
	else if (userinput == 2)
	{
		yearlyfee = initial_fee;
		for (int i = 1; i < 11; i++)
		{
			cout << "year";
			cout << i;
			cout << "  ";
			cout << yearlyfee << endl;
			yearlyfee += yearlyfee * silver;
		}
	}
	else if (userinput == 3)
	{
		yearlyfee = initial_fee;
		for (int i = 1; i < 11; i++)
		{
			cout << "year";
			cout << i ;
			cout<<"  ";
			cout <<  yearlyfee << endl;
			yearlyfee += yearlyfee * bronze;
		}
	}


}