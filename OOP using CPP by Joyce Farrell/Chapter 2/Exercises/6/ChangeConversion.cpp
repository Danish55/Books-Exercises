//|-------------------------------------------------------------------------------------------------|
//|b. Modify the program in 6a so that, in addition to the cents, the user enters the denomination  |
//|of the coin to which to convert the pennies, such as 5 for nickels or 25 for quaters. Save the   |
//|file as ChangeConverison.cpp.                                                                    |
//|-------------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    int cents = 0, nickels = 0, dimes = 0, quarters = 0, pennies = 0;
    float dollars = 0.00;
    cout << "Enter Amount in Quarters : ";
    cin >> quarters;
    cout << "Enter Amount in Dimes : ";
    cin >> dimes;
    cout << "Enter Amount in Nickels : ";
    cin >> nickels;
    cout << "Enter Amount in Cents : ";
    cin >> cents;
    pennies = ((quarters * 25) + (dimes * 10) + (nickels * 5) + (cents * 1));
    dollars = static_cast<float> (pennies) / 100;
    cout << "Your Exchange : $" << dollars << endl;
    return 0;
}