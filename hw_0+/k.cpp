#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[]) {
    int n, k, *p;
    std::cin >> n >> k;
    p = new int[n];
    for (int i = 0; i != n; ++i) std::cin >> p[i];
    std::sort(p, p + n);
    int min_price = 0;
    for (int i = 0; i != k; ++i) min_price += p[i];
    std::cout << min_price << std::endl;
    return 0;
}
