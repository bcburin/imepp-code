#include <iostream>

int main(int argc, char const *argv[]) {
    // Read number of elements
    int n, *v;
    std::cin >> n;
    // Allocate memory
    v = new int[n];
    // Read elements
    for (int i = 0; i != n; ++i) std::cin >> v[i];
    // Print elements in reverse order
    for (int i = n - 1; i != -1; --i) std::cout << v[i] << " ";
    std::cout << std::endl;
    return 0;
}
