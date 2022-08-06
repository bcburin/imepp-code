#include <iostream>

int ReLU(int x);

int main(int argc, char const *argv[]) {
    int n;
    std::cin >> n;
    std::cout << ReLU(n) << std::endl;
    return 0;
}

int ReLU(int x) {
    if (x < 0) return 0;
    return x;
}
