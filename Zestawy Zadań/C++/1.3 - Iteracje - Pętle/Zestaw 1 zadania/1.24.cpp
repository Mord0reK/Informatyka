// Napisz program, kt�ry wy�wietla du�e litery alfabetu od A do Z i od Z do A, z
// wykorzystaniem p�tli while.

#include <iostream>

using namespace std;

int main() {
    char x = 65, y = 90;
    while (x <= 90)
    {
        cout << x << " ";
        x++;
    }
    cout << endl;
    while (y >= 65)
    {
        cout << y << " ";
        y--;
    }
    return 0;
}