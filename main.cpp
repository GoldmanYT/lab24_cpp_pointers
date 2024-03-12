#include <iostream>

using namespace std;
// 10bL&
// 0b110L&0b010


int main()
{
    char *P1, *P2, *P3, *P4, *P5, *P6, *P7, *P8, *P9, *P10, *P11, *P12;
    cout << "Getting formula: 0b110L&0b010\n";
    cout << "Enter 5 characters: 10bL&\n";

    P1 = new char;
    P2 = new char;
    P3 = new char;
    P4 = new char;
    P5 = new char;

    cin >> *P1 >> *P2 >> *P3 >> *P4 >> *P5;

    cout << "You entered: " << *P1 << *P2 << *P3 << *P4 << *P5 << "\n";

    P6 = P4;  // L
    P7 = P5;  // &
    P8 = P2;  // 0
    P9 = P3;  // b
    P10 = P2;  // 0
    P11 = P1;  // 1
    P12 = P2;  // 0
    P1 = P8;  // 0
    P2 = P9;  // b
    P3 = P11;  // 1
    P4 = P11;  // 1
    P5 = P8;  // 0

    cout << *P1 << *P2 << *P3 << *P4 << *P5 << *P6
         << *P7 << *P8 << *P9 << *P10 << *P11 << *P12;

    delete P1;  // 0
    delete P2;  // b
    delete P3;  // 1
    delete P6;  // L
    delete P7;  // &
    return 0;
}