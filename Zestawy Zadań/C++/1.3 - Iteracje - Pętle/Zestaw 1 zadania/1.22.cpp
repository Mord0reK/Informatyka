// Napisz program, który wyœwietla du¿e litery alfabetu od A do Z i od Z do A, z
// wykorzystaniem pêtli for.

#include <iostream>

using namespace std;

int main() {
    for (char x = 65; x <= 90; x++) 
    {
        cout << x << " ";
    }
    cout << endl;
    for (char y = 90; y >= 65; y--) 
    {
        cout << y << " ";
    }
    return 0;
}
