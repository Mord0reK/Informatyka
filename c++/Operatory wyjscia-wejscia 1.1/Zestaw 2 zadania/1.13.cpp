//Napisz program, kt�ry:
//a.pobiera od u�ytkownika tekst
//b.w kolejnym wierszu wypisuje podany tekst, nast�pnie spacj�, ponownie podany tekst i
//wykrzyknik.

#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    cout << a << " " << a << "!" << endl;
    return 0;
}
