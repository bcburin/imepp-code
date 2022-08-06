#include <iostream>

int main(int argc, char const *argv[]) {
    // Get number of elements
    long n, *v;
    std::cin >> n;
    // Allocate memory
    v = new long[n];
    // Read input
    for (int i = 0; i != n; ++i) std::cin >> v[i];
    // Calculate output
    long prev = v[0], total = 0, diff;
    for (long i = 1; i != n; ++i) {
        diff = v[i] - prev;
        if (diff < 0) {
            total -= diff;
        } else {
            prev = v[i];
        }
    }
    // Print output
    std::cout << total << std::endl;
    return 0;
}
