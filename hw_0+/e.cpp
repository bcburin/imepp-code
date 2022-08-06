#include <cmath>
#include <iostream>

bool is_scalene_triangle(long a, long b, long c) {
    if (a == b || b == c || c == a) return false;     // escaleno
    if (a + c <= b || abs(a - c) >= b) return false;  // desigualdade triangular
    return true;
}

int main(int argc, char const **argv) {
    long n, *L, ans = 0;
    // Get number of elements
    std::cin >> n;
    // Allocate memory
    L = new long[n];
    // Read elements
    for (int i = 0; i != n; ++i) std::cin >> L[i];
    // Calculate number of possible scalene triangles
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            for (int k = j + 1; k < n; ++k)
                if (is_scalene_triangle(L[i], L[j], L[k])) ++ans;
    // Print result
    std::cout << ans << std::endl;
    return 0;
}
