#include <iostream>

void MIX(int &a) {
    a = (a - 20 < 0) ? 0 : a - 20;
}

int main() {
    int L;
    std::cout << "Podaj liczb� ca�kowit�: ";
    std::cin >> L;
    MIX(L);
    std::cout << "Wynik: " << L << std::endl;
    return 0;
}
