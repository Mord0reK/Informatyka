#include <iostream>

double S6(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 1.0 / (n * (n - 1)) + S6(n - 1);
    }
}

int main() {
    int N;
    std::cout << "Podaj liczb� ca�kowit�: ";
    std::cin >> N;
    std::cout << "Wynik: " << S6(N) << std::endl;
    return 0;
}
