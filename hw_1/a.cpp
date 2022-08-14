#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[]) {
    int n, *v;
    std::cin >> n;
    v = new int[n];
    for (int i = 0; i != n; ++i) std::cin >> v[i];
    std::sort(v, v + n);
    int second_order_stats = v[0];
    for (int i = 0; i != n; ++i)
        if (v[i] > second_order_stats) {
            second_order_stats = v[i];
            break;
        }
    if (second_order_stats != v[0])
        std::cout << second_order_stats << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}
