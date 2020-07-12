//|-------------------------------------------------------------------------------------------|
//|On the Web, research the Luhn formula that is used to verify credit card numbers. Write    |
//|a program that allows the user to enter a 16-Digit account number in groups of four, and   |
//|display a 1 and 0 that indicates whether the credit card is valid or invalid. If you       |
//|have access to one, test the program with a MasterCard or Visa account number to verify    |
//|that it works correctly. Save the file as Luhn.cpp.                                        |
//|-------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int splitDigits(int& digit1, int& digit2, int& digit3, int& digit4, int number){
    digit1 = (number / 1000) % 10;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = (number % 10);
    return 0;
}
int calculateProduct(int& pResult, int digit){
    int resultDigit = digit * 2;
    if(resultDigit > 9){
        pResult = pResult + (resultDigit % 10);
        pResult = pResult + ((resultDigit / 10) % 10);        
    }
    else{
        pResult = pResult + resultDigit;
    }
    return 0;
}
int main(){
    int cCardG1 = 0, cCardG2= 0, cCardG3 = 0, cCardG4 = 0;
    int firstDG1 = 0, firstDG2 = 0, firstDG3 = 0, firstDG4 = 0;
    int secondDG1 = 0, secondDG2 = 0, secondDG3 = 0, secondDG4 = 0;
    int thirdDG1 = 0, thirdDG2 = 0, thirdDG3 = 0, thirdDG4 = 0;
    int forthDG1 = 0, forthDG2 = 0, forthDG3 = 0, forthDG4 = 0;
    int result = 0, resultDigit = 0;
    
    cout << "Enter 1-4 Digits of Credit Card   : ";
    cin >> cCardG1;
    cout << "Enter 5-8 Digits of Credit Card   : ";
    cin >> cCardG2;
    cout << "Enter 9-12 Digits of Credit Card  : ";
    cin >> cCardG3;
    cout << "Enter 13-16 Digits of Credit Card : ";
    cin >> cCardG4;
    
    splitDigits(firstDG1, secondDG1, thirdDG1, forthDG1, cCardG1);
    splitDigits(firstDG2, secondDG2, thirdDG2, forthDG2, cCardG2);
    splitDigits(firstDG3, secondDG3, thirdDG3, forthDG3, cCardG3);
    splitDigits(firstDG4, secondDG4, thirdDG4, forthDG4, cCardG4);

    result = firstDG2 + firstDG4 + secondDG2 + secondDG4 + thirdDG2 + thirdDG4 + forthDG2 + forthDG4;

    calculateProduct(result, firstDG1);
    calculateProduct(result, firstDG3);
    calculateProduct(result, secondDG1);
    calculateProduct(result, secondDG3);
    calculateProduct(result, thirdDG1);
    calculateProduct(result, thirdDG3);
    calculateProduct(result, forthDG1);
    calculateProduct(result, forthDG3);

    if(result % 10 == 0){
        cout << "Credit Card Number is Valid." << endl;
    }
    else{
        cout << "Credit Card Number is Invalid." << endl;
    }
    return 0;
}