//|-----------------------------------------------------------------------|
//|Write a C++ program that displays the following pattern on the screen: |
//|    *                                                                  |
//|   * *                                                                 |
//|  * * *                                                                |
//|   * *                                                                 |
//|    *                                                                  |
//|                                                                       |
//|Save the file as Diamond.cpp.                                          |
//|-----------------------------------------------------------------------|
#include<iostream>
using namespace std;
int main(){
    int i = 0,j = 0, k = 0;
    for(i=0;i<3;i++){
        for(j=1;j<=(3-i);j++){
            cout << ' ';
        }
        for(k=0;k<=i;k++){
            cout << "* ";

        }
        for(k=2;k<(i-2);k++){
            cout << '*';
        }
        cout << endl;
    }
    for(i=0;i<2;i++){
        //cout << ' ' << ' ';
        for(j=-2;j<=(i-1);j++){
            cout << ' ';
        }
        for(k=2;k>i;k--){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}