//Napisz program, kt�ry za pomoc� instrukcji for dla danych warto�ci x zmieniaj�cych si� od 0 do 10 oblicza 
//warto�� funkcji y = 3x.

#include <iostream>

using namespace std;

int main()
{
	int x, i;
	for (i = 0; i <= 10; i++)
	{
		cout << 3 * i << endl;
	}
	return 0;
}