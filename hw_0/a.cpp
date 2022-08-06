#include <iomanip>
#include <iostream>

using std::endl, std::cin, std::cout;

int main(int argc, char **argv) {
    // Define variables
    int a;
    long b;
    char c;
    float d;
    double e;
    // Read variables
    cin >> a >> b >> c >> d >> e;
    // Print values
    cout << a << endl
         << b << endl
         << c << endl
         << std::setprecision(3) << std::fixed << d << endl
         << std::setprecision(9) << std::fixed << e << endl;
    // Exit
    return 0;
}