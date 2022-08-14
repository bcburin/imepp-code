#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;
using code = pair<int, int>;

int main(int argc, char const* argv[]) {
    int n, t;
    map<code, string> codx;
    // Read mappings
    cin >> n;
    for (int i = 0; i != n; ++i) {
        code cod;
        string name;
        cin >> cod.first >> cod.second >> name;
        codx[cod] = name;
    }
    // Read test cases
    cin >> t;
    vector<code> test_cases(t);
    for (int i = 0; i != t; ++i)
        cin >> test_cases[i].first >> test_cases[i].second;
    // Output results
    for (const auto& test_case : test_cases) {
        cout << codx[test_case] << endl;
    }
    return 0;
}
