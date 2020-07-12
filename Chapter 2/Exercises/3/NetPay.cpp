//|--------------------------------------------------------------------------------------------|
//|Write a C++ program in which you declare variables that will hold an hourly wage, a         |
//|number of hours worked, and a withholding percentage. Prompt the user to enter values       |
//|for each of these fields. Compute and display net weekly pay, which is calculated as        |
//|hours times rate, minus the percentage of the gross pay that is withholding. Save the file  |
//|as NetPay.cpp.                                                                              |
//|--------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    int hoursWorked = 0, netPay = 0;
    float withHoldingPercentage = 0;
    cout << "Number of Hours Worked : ";
    cin >> hoursWorked;
    cout << "With Holding Percentage: ";
    cin >> withHoldingPercentage;
    netPay = ((hoursWorked * 20) - ((hoursWorked * 20) * (withHoldingPercentage/100)));
    cout << "Net Pay = $" << netpay << endl;
    return 0;
}
