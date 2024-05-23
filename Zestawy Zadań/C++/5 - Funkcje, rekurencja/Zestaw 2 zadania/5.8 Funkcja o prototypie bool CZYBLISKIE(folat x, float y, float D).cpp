#include <iostream>
#include <cmath>

bool CZYBLISKIE(float x, float y, float D) {
    return std::fabs(x - y) < D;
}

int main() {
    float x, y;
    std::cout << "Podaj pierwsz� liczb� rzeczywist�: ";
    std::cin >> x;
    std::cout << "Podaj drug� liczb� rzeczywist�: ";
    std::cin >> y;
    if (CZYBLISKIE(x, y, 1)) {
        std::cout << "OK" << std::endl;
    } else {
        std::cout << "PECH" << std::endl;
    }
    return 0;
}
