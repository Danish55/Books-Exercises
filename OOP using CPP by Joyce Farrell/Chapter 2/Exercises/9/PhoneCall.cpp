//|--------------------------------------------------------------------------------------------|
//|Create a PhoneCall structure with one public field that contains the number of minutes      |
//|in a call.Write a main() function that instantiates one PhoneCall object, such as           |
//|myCallToGrandmaOnSunday. Assign a value to the minutes field of this object. Print          |
//|the value of the minutes field. Calculate the cost of the call at 10 cents per minute, and  |
//|display the results. Save the file as PhoneCall.cpp.                                        |
//|--------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
struct PhoneCall{
    int minutes;
};
int main(){
    int callCost = 0;
    PhoneCall myCallToGrandmaOnSunday;
    myCallToGrandmaOnSunday.minutes = 5;
    cout << "Call duration : " << myCallToGrandmaOnSunday.minutes << " minutes.\n";
    callCost = myCallToGrandmaOnSunday.minutes * 10;
    cout << "Cost of Call : " << callCost << " Cents." << endl;
    return 0;
}