//|---------------------------------------------------------------------------------------------|
//|Parkville Bank is a full-service bak that has decided to computerize its banking process.    |
//|One object needed is a BankAccount. Develop a struct so that it contains public data fields  |
//|that hold the int account number and double account balance. (In later chapters, you will    |
//|convert BankAccount to a class and learn to make these data fields private.) Write a main()  |
//|function that declares a BankAccount and allows you to enter data values for the BankAccount |
//|fields. Save the file as BankAccount.cpp.                                                    |
//|---------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
struct BankAccount{
    int accountNumber;
    double balance;
};
int insertBankAccount(BankAccount &pBankAccount){
    cout << "Enter Account Number: ";
    cin >> pBankAccount.accountNumber;
    cout << "Enter Account Balance: $";
    cin >> pBankAccount.balance;
    cout << "---------------------------------" << endl;
    return 0;
}
int printBankAccount(BankAccount pBankAccount){
    cout << "Account Number = " << pBankAccount.accountNumber
        << "\nAccount Balance = $" << pBankAccount.balance
        << "\n---------------------------------" <<endl;
    return 0;
}
int main(){
    BankAccount bankAccount;
    insertBankAccount(bankAccount);
    printBankAccount(bankAccount);
    return 0;
}