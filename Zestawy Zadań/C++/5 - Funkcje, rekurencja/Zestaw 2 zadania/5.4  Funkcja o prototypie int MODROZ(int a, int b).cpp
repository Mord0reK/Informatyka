#include <iostream>
#include <cstdlib>

int MODROZ(int a, int b) {
    return std::abs(a - b);
}

int main() {
    int X, Y;
    std::cout << "Podaj pierwsz� liczb� ca�kowit�: ";
    std::cin >> X;
    std::cout << "Podaj drug� liczb� ca�kowit�: ";
    std::cin >> Y;
    std::cout << "Wynik: " << MODROZ(X, Y) << std::endl;
    return 0;
}
