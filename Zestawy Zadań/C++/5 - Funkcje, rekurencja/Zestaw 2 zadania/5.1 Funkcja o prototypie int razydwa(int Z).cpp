#include <iostream>

int razydwa(int Z) {
    return Z * 2;
}

int main() {
    int L;
    std::cout << "Podaj liczb� ca�kowit�: ";
    std::cin >> L;
    std::cout << "Wynik: " << razydwa(L) << std::endl;
    return 0;
}
