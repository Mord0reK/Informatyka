//Napisz program wy�wietlaj�cy tabliczk� mno�enia dla liczb od 1 do 100 z wykorzystaniem podw�jnej p�tli for


#include <iostream>

using namespace std;

int main() {
    int i, j;
    for (i = 1; i <= 10; ++i)
    {
        for (j = 1; j <= 10; ++j)
        {
            cout << i * j << "\t ";
        }
        cout << endl;
    }
    return 0;
}