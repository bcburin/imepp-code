#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[]) {
    int n, m, *f;
    std::cin >> n >> m;
    // Get numbers of pieces
    f = new int[m];
    for (int i = 0; i != m; ++i) std::cin >> f[i];
    // Sort input O(m logm)
    std::sort(f, f + m);
    // Find minimum difference O(m - n)
    int min_diff = f[n - 1] - f[0];
    for (int i = 1; i != m - n + 1; ++i) {
        int diff = f[n - 1 + i] - f[i];
        if (diff < min_diff) min_diff = diff;
    }
    // Total complexity: O((m-n)m logm) = O(m²logm), since m > n
    std::cout << min_diff << std::endl;
    return 0;
}
