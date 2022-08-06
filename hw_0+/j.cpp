#include <cmath>
#include <iostream>

int count_ones_after_inversion(int *v, int i, int j, int n) {
    int count = 0;
    for (int k = 0; k != n; ++k) count += ((i <= k && k <= j) ? !v[k] : v[k]);
    return count;
}

int main(int argc, char const *argv[]) {
    int n, *v;
    std::cin >> n;
    v = new int[n];
    for (int i = 0; i != n; ++i) std::cin >> v[i];
    int max_ones = -1;
    for (int i = 0; i != n; ++i) {
        for (int j = i; j != n; ++j) {
            int ones = count_ones_after_inversion(v, i, j, n);
            max_ones = std::max(ones, max_ones);
        }
    }
    std::cout << max_ones << std::endl;
    return 0;
}
