#include <cmath>
#include <iostream>

int main(int argc, char const *argv[]) {
    int n, ans = 0;
    std::cin >> n;
    for (int i = 1; i != n; ++i) {
        ans += (n - 1) / i;
    }
    std::cout << ans << std::endl;
    return 0;
}
