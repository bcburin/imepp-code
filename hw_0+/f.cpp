#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>

int main(int argc, char const *argv[]) {
    int n, r;
    std::cin >> n >> r;
    double s = sin(M_PI / n);
    double R = r * s / (1 - s);
    std::cout << std::setprecision(9) << std::fixed << R << std::endl;
    return 0;
}
