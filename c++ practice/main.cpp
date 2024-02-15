#include <iostream>
using namespace std;
double pay_check, invest_check, spend_check, save_check;
string Myname;
int main() {
  // start of a budget plan for myself using the 50 / 20 /30 plan where u save 50 invest 20 and use 30 

invest_check= .50;
spend_check= .30;
save_check= .20;

  
cout<< "welcome to your budget planner!!"<<endl;

cout<<"what is your name:"<<endl;
cin>>Myname;

cout<<"hi nice to meet you "<< Myname <<" please enter your paycheck amount:";
cin>>pay_check;


cout << pay_check<< endl;

cout<<"invest $"<< pay_check*invest_check<<endl;

cout<<"spend $"<< pay_check*spend_check<<endl;

cout<< "save $" <<pay_check*save_check<<endl;



  return 0;
}