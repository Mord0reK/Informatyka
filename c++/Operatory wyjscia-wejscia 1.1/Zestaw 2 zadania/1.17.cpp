//Napisz program, kt�ry:
//a. pobiera liczby rzeczywiste x i y
//b. wypisuje �redni� arytmetyczn� x i y
//c. pobiera liczby ca�kowite u i v
//d. wypisuje �redni� arytmetyczn� u i v.
//W programie umie�� dowolne komentarze.

#include <iostream>

using namespace std;

int main() {
	double x, y, u, v;
	cin >> x >> y;
	cout << (x + y) / 2 << endl;
	cin >> u >> v;
	cout << (u + v) / 2 << endl;
	return 0;
}