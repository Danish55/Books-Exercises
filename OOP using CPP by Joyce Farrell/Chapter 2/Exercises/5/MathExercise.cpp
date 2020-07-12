//|------------------------------------------------------------------------------------------|
//|Write a program that allows the user to enter two values. Display the results of adding   |
//|the two values, subtracting them from eash other, multiplying them, and dividing them.    |
//|Save the file as MathExercise.cpp.                                                        |
//|------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    int value1 = 0, value2 = 0;
    cout << "Enter Value 1 : ";
    cin >> value1;
    cout << "Enter Value 2 : ";
    cin >> value2;
    cout << "Addition : " << (value1 + value2)
        << "\nSubtraction : " << (value1 - value2)
        << "\nMultiplication : " << (value1 * value2)
        << "\nDivision : " << (value1 / value2) << endl;
    return 0;
}