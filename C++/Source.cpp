// elijah Alston Jr 
// homework 4 Race results
// determines the winner of the race and lowest time if there is a tie

#include <iostream>
#include <string>
using namespace std;
//function prototyping
void getRaceTimes(string&, double&);
void findWinner(string, string, string, double, double, double);
void welcome();
double raceAverage(double, double, double);
int main()
{
	cout << "*****************************************************************"<< endl;
	cout << "Welcome to Race Results Program" << endl;
	cout << "You Asked to Enter the Three Racer�s Names" << endl;
	cout << "and Their Associated Race Time." << endl;
	cout << "Program Developed by : Elijah alston jr" << endl;
	cout << "*****************************************************************" << endl;
	cout << getRaceTimes;



	return 0;
}
//function definition
void getRaceTimes(string& racername, double& racetime)
{
	cout << "please enter the racer's first name >";
	cin >> racername;
	cout << "please enter the racer's time >";
	cin >> racetime;
	cout << "please enter the racer's first name >";
	cin >> racername;
	cout << "please enter the racer's time >";
	cin >> racetime;
	cout << "please enter the racer's first name >";
	cin >> racername;
	cout << "please enter the racer's time >";
	cin >> racetime;
}
void findWinner(string racer1, string racer2, string racer3, double time1, double time2, double time3)
{
	if (time1 < time2 && time1 < time3)
	{
		cout << racer1 << "has the best time" << endl;

	}
	else if (time2 < time1 && time2 < time3)
		cout << racer2 << "has the best time" << endl;

}
void welcome()
{
	cout << "	*****************************************************************";
	cout << "Welcome to Race Results Program";
	cout << "You Asked to Enter the Three Racer�s Names";
	cout << "and Their Associated Race Time.";
	cout << "Program Developed by : Elijah alston jr";
	cout << "*****************************************************************";


}
double raceAverage(double time1, double time2, double time3)
{
	double average = 0;
	// must calculate average
	average = time1 + time2 + time3 / 3;
	return average;
}