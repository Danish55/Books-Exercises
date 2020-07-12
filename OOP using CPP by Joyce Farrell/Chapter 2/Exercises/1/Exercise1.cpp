//|------------------------------------------------------------------------------------------|
//|Assume a,b, and c are integers, and a = 0, b = 1, and c = 5. What is the value of         |
//|eash of the following? (The andswers are not comulative; evaluate each expression using   |
//|the original values for a,b, and c).                                                      |
//|a. a + b                                                                                  |
//|b. a > b                                                                                  |
//|c. 3 + b * c                                                                              |
//|d. ++b                                                                                    |
//|e. b++                                                                                    |
//|f. b <= c                                                                                 |
//|g. a > 5                                                                                  |
//|h. ++a ==b                                                                                |
//|i. b != c                                                                                 |
//|j. b == c                                                                                 |
//|k. b = c                                                                                  |
//|l. b / c                                                                                  |
//|m. b % c                                                                                  |
//|n. b + c * 4 / 3                                                                          |
//|o. 22 / (c + 3)                                                                           |
//|------------------------------------------------------------------------------------------|
#include<iostream>
using namespace std;
int aA(int pA, int pB){
    cout << "a + b : " << (pA + pB) << endl;
    return 0;
}
int bB(int pA, int pB){
    cout << "a > b : " << (pA > pB) << endl;
    return 0;
}
int cC(int pB, int pC){
    cout << "3 + b * c : " << (3 + pB * pC) << endl;
    return 0;
}
int dD(int pB){
    cout << "++b : " << (++pB) << endl;
    return 0;
}
int eE(int pB){
    cout << "b++ : " << (pB++) << endl;
    return 0;
}
int fF(int pB, int pC){
    cout << "b <= c : " << (pB <= pC) << endl;
    return 0;
}
int gG(int pA){
    cout << "a > 5 : " << (pA > 5) << endl;
    return 0;
}
int hH(int pA, int pB){
    cout << "++a == b : " << (++pA == pB) << endl;
    return 0;
}
int iI(int pB, int pC){
    cout << "b != c : " << (pB != pC) << endl;
    return 0;
}
int jJ(int pB, int pC){
    cout << "b == c : " << (pB == pC) << endl;
    return 0;
}
int kK(int pB, int pC){
    cout << "b = c : " << (pB = pC) << endl;
    return 0;
}
int lL(int pB, int pC){
    cout << "b / c : " << (pB / pC) << endl;
    return 0;
}
int mM(int pB, int pC){
    cout << "b % c : " << (pB % pC) << endl;
    return 0;
}
int nN(int pB, int pC){
    cout << "b + c * 4 / 3 : " << (pB + pC * 4 / 3) << endl;
    return 0;
}
int oO(int pC){
    cout << "22 / (c + 3) : " << (22 / (pC + 3)) << endl;
    return 0;
}
int main(){
    int a = 0, b = 1, c = 5;
    aA(a, b);
    bB(b, c);
    cC(b, c);
    dD(b);
    eE(b);
    fF(b, c);
    gG(a);
    hH(a, b);
    iI(b, c);
    jJ(b, c);
    kK(b, c);
    lL(b, c);
    mM(b, c);
    nN(b, c);
    oO(c);
    return 0;
}