//Napisz program, kt�ry:
//a.Posiada zmienn� B typu logicznego
//b.Posiada zmienn� Z typu znakowego
//c.Pobiera od u�ytkownika liczb� ca�kowit� i wprowadza do zmiennej B oraz do zmiennej Z
//d.Wy�wietla warto��, kt�r� przechowuje zmienna B
//e.Wy�wietla znak przechowywany przez Z.

#include <iostream>

using namespace std;

int main() {
	bool b;
	char z;
	int a;
	cin >> a;
	b = static_cast<bool>(a);
	z = static_cast<char>(a);
	cout << boolalpha << b << endl;
	cout << z << endl;
	return 0;
}