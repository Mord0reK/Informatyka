#include <iostream>

double S1(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 1.0 / n + S1(n - 1);
    }
}

int main() {
    int N;
    std::cout << "Podaj liczb� ca�kowit�: ";
    std::cin >> N;
    std::cout << "Wynik: " << S1(N) << std::endl;
    return 0;
}
