// Napisz program wy�wietlaj�cy tabliczk� mno�enia dla liczb od 1 do 100 z wykorzystaniem podw�jnej p�tli
//while.

#include <iostream>

using namespace std;

int main() {
    int i = 1;
    while (i <= 10)
    {
        int j = 1;
        while (j <= 10)
        {
            cout << i * j << "\t ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}