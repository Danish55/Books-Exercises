//|-------------------------------------------------------------------|
//|Write a C++ program that displays following pattern on the screen: |
//|    X                                                              |
//|   XXX                                                             |
//|  XXXXX                                                            |
//| XXXXXXX                                                           |
//|    X                                                              |
//|Save the file as Tree.cpp.                                         |
//|-------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<(5-i);j++){
            cout << ' ';
        }
        for(int k=0;k<((2*i)-1);k++){
            cout << 'X';
        }
        cout << endl;
    }
    for(int i=0;i<4;i++){
        cout << ' ';
    }
    cout << 'X' << endl;
    return 0;
}