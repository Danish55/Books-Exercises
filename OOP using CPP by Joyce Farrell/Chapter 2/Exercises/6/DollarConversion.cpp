//|--------------------------------------------------------------------------------------------|
//|a. Write a program for a bank that allows the user to enter an amount of money in cents.    |
//|Display the number of whole dollars the bank will give the customer in exchange. Save       |
//|the file as DollarConversion.cpp.                                                           |
//|--------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    int cents = 0;
    float dollars = 0.00;
    cout << "Enter Amount in Cents : ";
    cin >> cents;
    dollars = static_cast<float> (cents) / 100;
    cout << "Your Exchange : $" << dollars << endl;
    return 0;
}