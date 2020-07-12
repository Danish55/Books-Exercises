//|---------------------------------------------------------------------------------------|
//|Write a C++ program in which you declare a variable that holds an hourly wage. Prompt  |
//|the user to enter an hourly wage. Multiply the wage by 40 hours and print the standard |
//|weekly pay. Save the file as RegularWorkWeek.cpp.                                      |
//|---------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    int hourlyWage = 0, weeklyWage = 0;
    cout << "Enter the hourly Wage : ";
    cin >> hourlyWage;
    weeklyWage = hourlyWage * 40;
    cout << "Weekly Pay = $" << weeklyWage << endl;
    return 0;
}