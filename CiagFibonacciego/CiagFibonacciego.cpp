﻿#include <iostream>
using namespace std;

int main()
{
    int ilosc;
    int f = 0;
    int f1 = 1;
    int f2;

    cout << "podaj ilosc liczb do wypisania: " <<endl;
    cin >> ilosc;

    for (int i = 0; i <= ilosc; i++) {
        if (i > 1) {
            f2 = f + f1;
            f = f1;
            f1 = f2;
        }
        else {
            f2 = i;
        }
        cout << f2 << endl;
    }
    return 0;
}