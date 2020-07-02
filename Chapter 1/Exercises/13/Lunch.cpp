//|------------------------------------------------------------------------------------------|
//|Write a C++ program that declares a variable that can hold the price of a lunch. Prompt a |
//|user to enter the amount he or she spent on lunch. Read in the value, and display it with |
//|explanation. Save the file as Lunch.cpp.                                                  |
//|------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    float lunchPrice = 0;
    cout << "Enter amount : ";
    cin >> lunchPrice;
    cout << "User has paid $" << lunchPrice << " for lunch." << endl;
    return 0;
}