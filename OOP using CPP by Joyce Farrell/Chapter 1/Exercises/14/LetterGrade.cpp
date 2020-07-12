//|---------------------------------------------------------------------------------------------|
//|Write a program that declares a variable that can hold the letter grade a student will       |
//|receive in the class. Prompt the user to enter the letter. Then read it in, and echo it with |
//|explaination. Save the file as LetterGrade.cpp.                                              |
//|---------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    char letterGrade = '\0';
    cout << "Enter student grade : ";
    cin >> letterGrade;
    cout << "Student's earned grade : " << letterGrade << endl;
    return 0;
}