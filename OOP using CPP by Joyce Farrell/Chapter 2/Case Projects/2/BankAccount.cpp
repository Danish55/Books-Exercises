//|------------------------------------------------------------------------------------------------|
//|In Chapter 1 you developed a BankAccount stucture for Parkville Bank. The structure con-        |
//|tains two public fields for the integer accont number and double account balance. Using         |
//|the same structure, write main() function in which you create two BankAccount objects.          |
//|Add statements to the main() function to do the following:                                      |
//|  >> Prompt the user for account numbers and beginning balances for the two BankAccount.        |
//|     When testing your program, use four-digit account numbers, but the program does not        |
//|     have to enforce this rule.                                                                 |
//|  >> Complete each account number by adding a check digit that is the remainder when the        |
//|     account number is divided by 5.                                                            |
//|  >> Prompt the user for a dollar amount to be transferred from the first account to the        |
//|     second account.                                                                            |
//|  >> Display the full account numbers (including check digits) and starting balances for the    |
//|     two accounts, then display the ending balances after the transfer amount has been          |
//|     deducted from the first account and added to the second.                                   |
//|------------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
struct BankAccount{
    int accountNumber;
    double balance;
    short int checkDigit;
};
int insertBankAccount(BankAccount &pBankAccount){
    cout << "Enter Account Number: ";
    cin >> pBankAccount.accountNumber;
    cout << "Enter Beginning Balance: $";
    cin >> pBankAccount.balance;
    cout << "---------------------------------" << endl;
    pBankAccount.checkDigit = (pBankAccount.accountNumber % 5);
    return 0;
}
int printBankAccount(BankAccount pBankAccount, int number){
    cout << "Bank Account " << number
        << "\nAccount Number = " << pBankAccount.accountNumber << '-' << pBankAccount.checkDigit
        << "\nAccount Balance = $" << pBankAccount.balance
        << "\n---------------------------------" <<endl;
    return 0;
}
int main(){
    float amountToTransfer = 0, charges = 0.05;
    BankAccount bankAccount1, bankAccount2;
    cout << "Bank Account 1" << endl;
    insertBankAccount(bankAccount1);
    printBankAccount(bankAccount1,1);
    cout << "Bank Account 2" << endl;
    insertBankAccount(bankAccount2);
    printBankAccount(bankAccount2,2);
    cout << "Enter Amount to Transfer into Second Account : $";
    cin >> amountToTransfer;
    bankAccount1.balance = bankAccount1.balance - amountToTransfer - charges;
    bankAccount2.balance = bankAccount2.balance + amountToTransfer;
    printBankAccount(bankAccount1,1);
    printBankAccount(bankAccount2,2);
    return 0;
}