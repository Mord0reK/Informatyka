//Napisz program, kt�ry:
//a.pobiera od u�ytkownika dwa wyrazy : imi� i nazwisko
//b.wypisuje inicja�y, czyli pierwsze znaki imienia i nazwiska(oddzielone spacj�)
//c.w kolejnym wierszu wypisuje, ile znak�w ma imi�
//d.w kolejnym wierszu wypisuje ostatni� liter� nazwiska.Za�o�enie : imi� i nazwisko nie s�
//tekstami pustymi.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string imie, nazwisko;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Inicjaly: " << imie[0] << " " << nazwisko[0] << endl;
    cout << "Liczba znakow w imieniu: " << imie.length() << endl;
    cout << "Ostatnia litera nazwiska: " << nazwisko[nazwisko.length() - 1] << endl;
    return 0;
}
