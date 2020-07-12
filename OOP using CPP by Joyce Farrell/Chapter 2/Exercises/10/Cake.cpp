//|-------------------------------------------------------------------------------------------|
//|Create a Cake structure. Include two public fields that contains the price of the Cake     |
//|and the calorie count of the Cake. Write a main() function that declares a Cake object.    |
//|Prompt the user for field values. Echo the values, and then display the cost per calorie   |
//|Save the file as Cake.cpp.                                                                 |
//|-------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
struct Cake{
    int price;
    int calories;
};
int main(){
    Cake cake;
    cout << "Price of Cake : $";
    cin >> cake.price;
    cout << "Calories in Cake : ";
    cin >> cake.calories;
    cout << "Cake\'s Price : $" << cake.price
        << "\nCake\'s Calories : " << cake.calories
        << "\nCake\'s Price per Calorie : " << (cake.price/cake.calories) << endl;
    return 0;
}