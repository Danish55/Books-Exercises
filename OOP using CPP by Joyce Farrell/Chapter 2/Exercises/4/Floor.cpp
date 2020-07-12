//|------------------------------------------------------------------------------------------------|
//|Write a C++ program that prompts the user to enter the number of hours required to              |
//|install a hardwood floor. Display the number of complete eight-hour work days required          |
//|for the job, as well as the remaining hours needed in the last day. Compute and display         |
//|the total cost of the job at $220 per day plus $40 per hour for any partial day. Save the file  |
//|as Floor.cpp.                                                                                   |
//|------------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    int hoursRequired = 0, totalDays = 0, remainingHours = 0, totalCost = 0;
    cout << "Enter Total number of hours required : ";
    cin >> hoursRequired;
    totalDays = hoursRequired / 8;
    remainingHours = hoursRequired % 8;
    cout << totalDays << "Days and " << remainingHours << " Hours Required." << endl;
    totalCost = ((totalDays * 200) + (remainingHours * 40));
    cout << "Total Cost = $" << totalCost << endl;
    return 0;
}