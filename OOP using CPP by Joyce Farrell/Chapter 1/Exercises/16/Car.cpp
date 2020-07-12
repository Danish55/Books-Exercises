//|----------------------------------------------------------------------------------------------|
//|Create a data structure named Car that contains two public fields an int field for model year |
//|and a double field for miles per gallon. Write a program that declares a Car. Assign values to|
//|the car's two data fields, and display the values with explanation. Save the file as Car.cpp. |
//|----------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
struct Car {
    int modelYear;
    double milesPerGallon;
};
int main(){
    Car sedan;
    sedan.modelYear = 2020;
    sedan.milesPerGallon = 20;
    cout << "Car's Model Year : " << sedan.modelYear 
        << "\nCar's Miles per Gallon : " << sedan.milesPerGallon << endl;
    return 0;
}