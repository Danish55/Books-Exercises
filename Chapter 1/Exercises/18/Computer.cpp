//|----------------------------------------------------------------------------------------|
//|Create a data structure named Computer. Decide on atleast three fields that you want to |
//|include within your Computer structure. Each of the fields must be an int or double.    |
//|Write a program that declares two Computers. Prompt the user for values for the fields  |
//|for each Computer, and echo them. Save the file as Computer.cpp.                        |
//|----------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
struct Computer{
    int ram;
    double processor;
    int hardDisk;
};
int insertComputer(int computerNumber, Computer &pComputer){
    cout << "Computer " << computerNumber <<":\n-------------\n";
    cout << "Enter RAM of Computer: ";
    cin >> pComputer.ram;
    cout << "Enter Processor Speed (GHz): ";
    cin >> pComputer.processor;
    cout << "Enter Hard Disk: ";
    cin >> pComputer.hardDisk;
    cout << "------------------------------------------------" << endl;
    return 0;
}
int printComputer(int computerNumber,Computer pComputer){
    cout << "Computer " << computerNumber << ":\n-------------\n"
        << "RAM of Computer: " << pComputer.ram << " RAM"
        << "\nProcessor Speed (GHz): " << pComputer.processor << " GHz"
        << "\nHard Disk: " << pComputer.hardDisk << " GB"
        << "\n------------------------------------------------" <<endl;
    return 0;
}
int main(){
    Computer computer1, computer2;
    insertComputer(1,computer1);
    insertComputer(2,computer2);
    printComputer(1,computer1);
    printComputer(2,computer2);
    return 0;
}