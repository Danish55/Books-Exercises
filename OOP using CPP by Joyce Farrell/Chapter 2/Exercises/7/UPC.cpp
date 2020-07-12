//|-------------------------------------------------------------------------------------------------|
//|The Universal Product Code (UPC) on most grocery items contains a zero that is printed           |
//|to the left of the bar code and 10 digits that are printed in two groups of five each below      |
//|the code. The first five digits represent a manufacturer and the second five digits repre-       |
//|sent a specific product. To the right of the bar code, a check digit is printed. Write a         |
//|program that allows the user to enter the five-digit manufacturer code, the five-digit           |
//|product code, and the check digit. Display the result of a Boolean comparison (0 or 1)           |
//|that shows whether the check digit is correct according to the following algorithm.              |
//|(Hint: Use a combination of modulus, multiplication, and subtraction to seperate the             |
//|digits in the entered code.)                                                                     |
//|a. Sum the second and forth numbers in the manufacturer code.                                    |
//|b. Sum the first, third, and fifth numbers in the product code.                                  |
//|c. Sum the result of step a and step b, and multiply the total by 3.                             |
//|d. Sum the first, third and fifth numbers in the manufacturer.                                   |
//|e. Sum the second and forth digits in the product code.                                          |
//|f. Sum the results of step d and e and add to the result from step c.                            |
//|g. Take the remainder when the result of step f is divided by 10.                                |
//|h. Subtract the result of step g from 10. Compare this result to the check digit entered by the  |
//|   user. If the result and check digit are equal (if the Boolean value of the comparison is 1),  |
//|   then the UPC is valid one.                                                                    |
//|Save the file as UPC.cpp. After you write the program, test it using UPC values from several     |
//|grocery items from your home. (Make sure the digit to the left of the bar code is 0-             |
//|the 0 indicates that the code follows this algorithm.)                                           |
//|-------------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    int checkDigit = 0, productCode = 0, manufacturerCode = 0;
    int sumMC2A4 = 0, sumPC13A5 = 0, resultAB = 0, sumMC13A5 = 0, sumPC2A4 = 0, resultDE = 0, resultFinal = 0;
    int manufacturerCodeDigit1 = 0, manufacturerCodeDigit2 = 0, manufacturerCodeDigit3 = 0, manufacturerCodeDigit4 = 0, manufacturerCodeDigit5 = 0;
    int productCodeDigit1 = 0, productCodeDigit2 = 0, productCodeDigit3 = 0, productCodeDigit4 = 0, productCodeDigit5 = 0;
    
    cout << "Enter Manufacturer Code : ";
    cin >> manufacturerCode;
    cout << "Enter Product Code : ";
    cin >> productCode;
    cout << "Enter Check Digit : ";
    cin >> checkDigit;
    
    manufacturerCodeDigit5 = manufacturerCode % 10;
    manufacturerCodeDigit4 = (manufacturerCode / 10) % 10;
    manufacturerCodeDigit3 = (manufacturerCode / 100) % 10;
    manufacturerCodeDigit2 = (manufacturerCode / 1000) % 10;
    manufacturerCodeDigit1 = (manufacturerCode / 10000) % 10;
    
    productCodeDigit5 = productCode % 10;
    productCodeDigit4 = (productCode / 10) % 10;
    productCodeDigit3 = (productCode / 100) % 10;
    productCodeDigit2 = (productCode / 1000) % 10;
    productCodeDigit1 = (productCode / 10000) % 10;

    sumMC2A4 = manufacturerCodeDigit2 + manufacturerCodeDigit4;
    sumPC13A5 = productCodeDigit1 + productCodeDigit3 + productCodeDigit5;
    resultAB = (sumMC2A4 + sumPC13A5) * 3;
    sumMC13A5 = manufacturerCodeDigit1 + manufacturerCodeDigit3 + manufacturerCodeDigit5;
    sumPC2A4 = productCodeDigit2 + productCodeDigit4;
    resultDE = sumMC13A5 + sumPC2A4;
    resultFinal = resultAB + resultDE;
    resultFinal = resultFinal % 10;
    resultFinal = 10 - resultFinal;
    if (checkDigit == resultFinal){
        cout << "UPC is Valid." << endl;
    }
    else{
        cout << "UPC is Invalid." <<endl;
    }
    return 0;
}