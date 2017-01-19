#include <iostream>
#include <iomanip>
using namespace std;

void DataInput(double &payRate, int &hours);
void CalculatGrossPay(double payRate, int hours, double &grossPay, double &netPay);
void Display(double payRate, double grossPay, double netPay, int hours);

int main()
{
	double payRate;
	double grossPay;
	double netPay;
	int hours;
	DataInput(payRate, hours);
	CalculatGrossPay(payRate, hours, grossPay, netPay);
	Display(payRate, grossPay, netPay, hours);
	return 0;
}
void DataInput(double &payRate, int &hours)
{
	cout << setprecision(2) << fixed;
	cout << "Welcome to the Pay Roll Program" << endl;
	cout << "************************************************" << endl << endl;
	cout << "This program takes two numbers (payRate & hours)" << endl;
	cout << "and multiplies them to get gross pay " << endl;
	cout << "it then calculates net pay by subtracting 15%" << endl;
	cout << "************************************************" << endl << endl;
	do
	{
		cout << "Please input the pay per hour" << endl;
		cin >> payRate;
		if (payRate < 0.0)
			cout << "Pay Rate cannot be negative\n";
	} while (payRate < 0.0);
	do
	{
		cout << endl << "Please input the number of hours worked" << endl;
		cin >> hours;
		if (hours < 0.0)
			cout << "hours cannot be negative\n";
	} while (hours < 0);
	cout << endl << endl;
}
void CalculatGrossPay(double payRate, int hours, double &grossPay, double &netPay)
{
	grossPay = payRate * hours;
	netPay = grossPay - (grossPay * 0.15);
}
void Display(double payRate, double grossPay, double netPay, int hours)
{
	cout << "The Pay Rate is $" << payRate << endl;
	cout << "The hours worked is " << hours << endl;
	cout << "The gross pay is $" << grossPay << endl;
	cout << "The net pay is $" << netPay << endl;
	cout << "We hope you enjoyed this program" << endl;
	system("pause");
}
/*
Welcome to the Pay Roll Program
************************************************

This program takes two numbers (payRate & hours)
and multiplies them to get gross pay
it then calculates net pay by subtracting 15%
************************************************

Please input the pay per hour
9.50

Please input the number of hours worked
40


The Pay Rate is $9.50
The hours worked is 40
The gross pay is $380.00
The net pay is $323.00
We hope you enjoyed this program
Press any key to continue . . .*/