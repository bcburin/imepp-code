#include <bits/stdc++.h>
using namespace std;

const int N = 1e9;

int main(int argc, char **argv) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    char op, last_op = 0;
    int num, last_num = 0, t;
    set<int> s;
    cin >> t;
    while (t--) {
        cin >> op >> num;
        if (op == '+') {
            if (last_op == 0 || last_op == '+')
                s.insert(num);
            else if (last_op == '?') {
                s.insert((num + last_num) % N);
            }
        } else if (op == '?') {
            auto lub = s.lower_bound(num);
            auto ans = (lub != s.end()) ? *lub : -1;
            cout << ans << endl;
            last_num = ans;
        }
        last_op = op;
    }
    return 0;
}