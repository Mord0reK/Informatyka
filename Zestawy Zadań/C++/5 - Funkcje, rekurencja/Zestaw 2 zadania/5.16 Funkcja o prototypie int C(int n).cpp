#include <iostream>

double S2(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 1.0 / (n * n) + S2(n - 1);
    }
}

int main() {
    int N;
    std::cout << "Podaj liczb� ca�kowit�: ";
    std::cin >> N;
    std::cout << "Wynik: " << S2(N) << std::endl;
    return 0;
}
