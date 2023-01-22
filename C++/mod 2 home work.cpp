// Elijah Alston Cop2000 online class 2/3/2021
#include <iostream>
#include <iomanip>
using namespace std;
// This programs colllects the data for homny seats were purchased and gives the dollar amount for each type of seat
int main()
{
	// Varibles 
	int Balcony, GrandTier, Loge, Mezzaanine, Orchestra, Totalsales;
	// Prommpts
cout << "Type in how many Balcony seats have been purchased today  >" ;
cin >> Balcony;
cout << "Type in how many Grand Tier seats have been purchased today  >";
cin >> GrandTier;
cout << "Type in how many Loge seats have been purchased today  >";
cin >> Loge;
cout << "Type in how many Mezzanine seats have been purchased today  >";
cin >> Mezzaanine;
cout << "Type in how many Orchestra seats have been purchased today  >";
cin >> Orchestra;
// Calculations
Balcony = Balcony * 50;
GrandTier = GrandTier * 175.25;
Loge = Loge * 125;
Mezzaanine = Mezzaanine * 100;
Orchestra = Orchestra * 230.50;
Totalsales = Balcony + GrandTier + Loge + Mezzaanine + Orchestra;
// End statments
cout << "WOLFROM THEATER TICKET SALES"<< endl;
cout << "-------------------------------"<< endl;
cout << "Balcony : " << setprecision(2) << fixed << Balcony << endl;
cout << "GrandTier : " << setprecision(2) << fixed << GrandTier << endl;
cout << "Loge : " << setprecision(2)<< fixed << Loge << endl;
cout << "Mezzanine : " << setprecision(2) << fixed << Mezzaanine << endl;
cout << "Orchestra : " << setprecision(2) << fixed << Orchestra << endl;
cout << "Total Sales: " << setprecision(2) <<fixed << Totalsales << endl;

}