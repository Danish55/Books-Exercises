//|---------------------------------------------------------------------------------------------|
//|Write a program that declares two integer variables that can hold the ages of two people.    |
//|Prompt a user to enter the ages of his or her two best friends, and echo the numbers with    |
//|explaination. Save the file as TwoAges.cpp.                                                  |
//|---------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    int emmaAge = 0;
    int johnAge = 0;
    cout << "Enter Emma's age : ";
    cin >> emmaAge;
    cout << "Enter John's age : ";
    cin >> johnAge;
    cout << "Emma is " << emmaAge << " years old.\n"
        << "John is " << johnAge << " years old." << endl;
    return 0;
}