﻿//Napisz program, który:
//a.pobiera od użytkownika liczbę rzeczywistą R(zakładamy, że jest dodatnia)
//b.w kolejnych wierszach wyświetla wartość pierwsiastka z r, lnR, R do -7 oraz R pomnożone przez π

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double r;
    cin >> r;
    cout << sqrt(r) << endl;
    cout << log(r) << endl;
    cout << pow(r, -7) << endl;
    return 0;
}
