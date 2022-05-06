#include <iostream>
#include <cstring>
using namespace std;

void szyfrowanie(char wyraz[], int klucz);

int main()
{
    //to działa
    //char tar[200];
   // cin >> tar;
   // tar[0] += 2;
    //cout << tar << endl;

    int klucz;
    char wyraz[200];

    cout << "podaj klucz" << endl;
    cin >> klucz;
    cout << "podaj wyraz" << endl;
    cin >> wyraz;
    szyfrowanie(wyraz, klucz);
    //wyraz[0] += 2;
    //cout << wyraz << endl;

}

void szyfrowanie(char wyraz[], int klucz) {
    int dlugosc;
    dlugosc = strlen(wyraz);
    if (!(klucz >= -26 && klucz <= 26)) {
        return;
    }
    
    if (klucz >= 0) {

    }

    
}