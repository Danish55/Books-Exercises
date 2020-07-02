//|---------------------------------------------------------------------------------------------|
//|Create a data structure named College that contains three public fields the: the year the    |
//|college was founded, the current student population, and the annunal tution. Write a program |
//|that declares a College. Prompt the user for values for the fields, and echo them.           |
//|Save file as College.cpp.                                                                    |
//|---------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
struct College{
    int yearFounded;
    double currentStudents;
    int tutionFreeAnnual;
};
int main(){
    College college;
    cout <<"Enter Founding Year: ";
    cin >> college.yearFounded;
    cout <<"Enter Current Students Population: ";
    cin >> college.currentStudents;
    cout <<"Enter Tution Fees Annual: ";
    cin >> college.tutionFreeAnnual;
    cout << "College's founding Year : " << college.yearFounded
        << "\nCollege's Current Student Population : " << college.currentStudents
        << "\nCollege's Tution Fees Annual : $" << college.tutionFreeAnnual <<endl;
    return 0;
}