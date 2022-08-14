#include <bits/stdc++.h>
using namespace std;

int substr_count(string target, string str) {
    int count = 0;
    string::size_type pos = 0;
    while ((pos = str.find(target, pos)) != string::npos) {
        ++count;
        pos += target.length();
    };
    return count;
}

const vector<string> names{"Danil", "Olya", "Slava", "Ann", "Nikita"};

int main(int argc, char** argv) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string problem;
    cin >> problem;
    int count = 0;
    for (const auto& name : names) count += substr_count(name, problem);
    cout << ((count == 1) ? "YES" : "NO") << endl;
    return 0;
}