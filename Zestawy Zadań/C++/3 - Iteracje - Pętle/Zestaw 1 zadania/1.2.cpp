// Napisz program, kt�ry za pomoc� instrukcji do ... while dla danych warto�ci x zmieniaj�cych si� od 0
// do 10 oblicza warto�� funkcji y = 3x

#include <iostream>

using namespace std;

int main()
{
	int x;
	do
	{
		cout << 3 * x << " ";
	} while (x <= 10);
	return 0;
}
