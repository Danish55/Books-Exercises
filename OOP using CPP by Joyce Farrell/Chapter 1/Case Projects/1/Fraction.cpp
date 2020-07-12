//|--------------------------------------------------------------------------------------------------|
//|Teacher's Pet is a software firm that specializes in children's educational programs. The firm    |
//|has decided to develop a series of products that will help children discover the properties of    |
//|fractions. As you plan the program series, you realize that a fraction contains at least two data |
//|properties: a numerator and a denominator. Therefore, you begin to think of specific fractions    |
//|as objects that belong to the class called Fraction. For now, though, you decide to work with     |
//|structs. Develop the Fraction struct so that it contains public data fields that hold the         |
//|integers numerator and denominator. (In later chapters, you will change your data structure       |
//|to a class and learn to make these data fields private.) Write a main() function that             |
//|declares a Fraction and allows you to enter data values for two Fraction fields. Echo the input.  |
//|Save the file as Fraction.cpp.                                                                    |
//|--------------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
struct Fraction{
    int numerator;
    int denominator;
};
int insertFraction(Fraction &pFraction){
    cout << "Enter value of Numerator: ";
    cin >> pFraction.numerator;
    cout << "Enter value of Denominator: ";
    cin >> pFraction.denominator;
    cout << "------------------------------------------------" << endl;
    return 0;
}
int printFraction(Fraction pFraction){
    cout << "Fraction =  " << pFraction.numerator << "/" << pFraction.denominator
        << "\nNumerator = " << pFraction.numerator
        << "\nDenominator = " << pFraction.denominator
        << "\n------------------------------------------------" <<endl;
    return 0;
}
int main(){
    Fraction fraction;
    insertFraction(fraction);
    printFraction(fraction);
    return 0;
}