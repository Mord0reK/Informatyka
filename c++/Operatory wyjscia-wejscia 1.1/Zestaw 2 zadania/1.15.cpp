//Napisz program, kt�ry:
//a.wypisuje liczb� ca�kowit� wylosowan� z przedzia�u od 0 do 499 (w��cznie)
//b.wypisuje liczb� ca�kowit� wylosowan� z przedzia�u od - 100 do 100 (w��cznie)
//Liczby powinny si� zmienia� przy kolejnym uruchomieniu programu.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL)); // funkcja by byly inne liczby bo resecie programu
	int liczba_a = rand() % 500;
	cout << "Wylosowana liczba z przedzialu 0-499: " << liczba_a << endl;
	int liczba_b = (rand() % 100) - 100;
	cout << "Wylosowana liczba z przedzialu -100-100: " << liczba_b << endl;
	return 0;
}
