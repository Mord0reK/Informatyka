#include <iostream>

char ZNAKI(char a, char b, int X) {
    return (X > 0) ? a : b;
}

int main() {
    char U, V;
    int L;
    std::cout << "Podaj pierwszy znak: ";
    std::cin >> U;
    std::cout << "Podaj drugi znak: ";
    std::cin >> V;
    do {
        std::cout << "Podaj liczb� ca�kowit�: ";
        std::cin >> L;
        std::cout << "Wynik: " << ZNAKI(U, V, L) << std::endl;
    } while (L != 0);
    return 0;
}
