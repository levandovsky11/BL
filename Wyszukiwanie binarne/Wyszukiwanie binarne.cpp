﻿#include<iostream>
using namespace std;

int szukanie(int liczba, int t[]) {

    int a = 0;
    int b = 15;
    int sr = (a + b) / 2;

    while (a <= b)
    {
        if (t[sr] == liczba)
        {
            return sr;
        }
        if (t[sr] > liczba)
        {
            b = sr - 1;
        }
        else
        {
            a = sr + 1;
        }
        sr = (a + b) / 2;
    }
    return -1;
}
int main()
{
    int liczba;
    int a = 0;
    int b = 7;
    int sr = (a + b) / 2;
    int t[15] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47 };

    cout << "------------------------------------------------------------------------" << endl;
    cout << "Podaj liczbe ktora chcesz znalezc: ";
    cin >> liczba;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Liczba " << liczba << " wystepuje w zbiorze w komorce o indeksie " << szukanie(liczba, t) << endl;
    cout << "------------------------------------------------------------------------" << endl;
}
