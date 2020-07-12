//|------------------------------------------------------------------------------------------------|
//|In Chapter 1 you developed a Fraction structure for Teacher's Pet Software. The structure       |
//|contains two public data fields for numerator and denominator. Using the same strucutre,        |
//|write a main() function in which you create three Fraction objects. Prompt the user for         |
//|values for each field of two of the Fractions. Add statements to the main() function to do      |
//|the following:                                                                                  |
//|  >> Display the floating-point equivalent of each Fraction object. For example, the floating   |
//|     point equivalent of 1/4 is 0.25.                                                           |
//|  >> Calculate the third Fraction to be the sum of the two entered Fractions. To sum            |
//|     fractions, you must find a common denominator. You can do this by multiplying each         |
//|     operand Fraction's numerator and denominator by the denominator of the other               |
//|     Fraction, using the common denominator, and adding the numerators. For example,            |
//|     to create a Fraction that is the sum of 2/5 plus 1/6, you do the following:                |
//|     1. Multiply the numerator and denominator of 2/5 by the denominator of the second          |
//|        Fraction, 6, giving 12/30.                                                              |
//|     2. Multiply the numerator and denominator of 1/6 by the denominator of the first           |
//|        Fraction, 5, giving 5/30.                                                               |
//|     3. Add the numerator and use the common denominator, giving 17/30.                         |
//|Display the result. You do not need to reduce an improper Fraction result. For example,         |
//|when you add 1/2 and 1/4, the result can be displayed as 6/8 instead of being reduced to 3/4.   |
//|------------------------------------------------------------------------------------------------|
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
        << "\nFloating-Point Fraction : " << (static_cast<float>(pFraction.numerator)/static_cast<float>(pFraction.denominator))
        << "\n------------------------------------------------" <<endl;
    return 0;
}
Fraction addFraction(Fraction pFraction1, Fraction pFraction2){
    Fraction temp1, temp2, result;
    temp1.numerator = pFraction1.numerator * pFraction2.denominator;
    temp1.denominator = pFraction1.denominator * pFraction2.denominator;

    temp2.numerator = pFraction2.numerator * pFraction1.denominator;
    temp2.denominator = pFraction2.denominator * pFraction1.denominator;

    if(temp1.denominator == temp2.denominator){
        result.numerator = (temp1.numerator + temp2.numerator);
        result.denominator = temp1.denominator;
        return result;
    }
    else{
        cout << "Denominator of both Fraction are not equal. Fraction Cannot be added." <<endl;
        result.numerator = 0;
        result.denominator = 0;
        return result;
    }
}
int main(){
    Fraction fraction1, fraction2, fraction3;
    insertFraction(fraction1);
    printFraction(fraction1);
    insertFraction(fraction2);
    printFraction(fraction2);
    fraction3 = addFraction(fraction1, fraction2);
    cout << "After adding Fraction1 and Fraction2" << endl;
    printFraction(fraction3);
    return 0;
}