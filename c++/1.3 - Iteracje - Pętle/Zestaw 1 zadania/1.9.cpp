// Napisz program, kt�ry za pomoc� instrukcji while sumuje liczby ca�kowite od 1 do 100

#include <iostream>

using namespace std;

int main()
{
    int i = 0, sum = 0;
    while (i <= 100)
    {
        sum = sum + i;
        i++;
    }
    cout << sum << endl;
    return 0;
}