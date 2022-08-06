#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const* argv[]) {
    string input;
    // Read input number as string
    cin >> input;
    // Calculate sum of digits
    int sum_of_digits = 0;
    for (const auto& c : input) sum_of_digits += (c - '0');
    // Print output
    cout << ((sum_of_digits % 9 == 0) ? "Yes" : "No") << endl;
    return 0;
}
