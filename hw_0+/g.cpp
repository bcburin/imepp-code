#include <iostream>
#include <string>

using std::string, std::cin, std::cout, std::endl;

int main(int argc, char const *argv[]) {
    int n, results[4];
    cin >> n;
    // Assert initial values are zero
    for (int i = 0; i != 4; ++i) results[i] = 0;
    // Read input
    for (int i = 0; i != n; ++i) {
        string input;
        cin >> input;
        if (input == "AC")
            ++results[0];
        else if (input == "WA")
            ++results[1];
        else if (input == "TLE")
            ++results[2];
        else if (input == "RE")
            ++results[3];
    }
    // Print formated output
    cout << "AC x " << results[0] << std::endl;
    cout << "WA x " << results[1] << std::endl;
    cout << "TLE x " << results[2] << std::endl;
    cout << "RE x " << results[3] << std::endl;
    return 0;
}
