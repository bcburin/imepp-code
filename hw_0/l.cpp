#include <iostream>

int main(int argc, char const *argv[]) {
    int v[5];
    for (int i = 0; i != 5; ++i) std::cin >> v[i];
    for (int i = 0; i != 5; ++i) {
        if (v[i] == 0) {
            std::cout << (i + 1) << std::endl;
            return 0;
        }
    }
    return 1;
}
