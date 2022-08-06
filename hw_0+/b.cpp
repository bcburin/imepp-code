#include <cmath>
#include <iostream>

using std::cin, std::cout, std::floor;

int main(int argc, char const *argv[]) {
    int x, y;
    cin >> x >> y;
    // Number of cranes: 2 * x - y / 2
    double cranes = 2 * x - ((double)y) / 2;
    // Number of turtles: y / 2 - x
    double turtles = ((double)y) / 2 - x;
    // Both must be positive integers
    cout << ((floor(cranes) == cranes && floor(turtles) == turtles &&
              cranes >= 0 && turtles >= 0)
                 ? "Yes"
                 : "No")
         << std::endl;
    return 0;
}
