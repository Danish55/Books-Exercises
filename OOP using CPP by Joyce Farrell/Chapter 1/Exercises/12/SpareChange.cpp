//|------------------------------------------------------------------------------------------|
//|Write a C++ program the declares a variable that can hold the amount of money in your     |
//|pocket right now. Assign a value to the variable. Display the value, with explaination, on|
//|the screen. For example, the output might be "In my pocket, I have $4.36." Save the file  |
//|as SpareChange.cpp.                                                                       |
//|------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    float spareChange;
    spareChange = 4.36;
    cout << "In my pocket, I have $" << spareChange << '.' << endl;
    return 0;
}