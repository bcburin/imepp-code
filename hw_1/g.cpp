#include <bits/stdc++.h>
using namespace std;

int bsearch(vector<int> v, int target) {
    int l = 0, r = v.size() - 1, pos = -1;
    while (l < r) {
        int m = ((r - l) >> 2) + l;
        if (v[m] < target)
            l = m + 1;
        else {
            r = m;
            if (v[m] == target) pos = m;
        }
    }
    return pos;
}

int main(int argc, char** argv) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, t, test;
    cin >> n >> t;
    vector<int> v(n);
    for (auto& el : v) cin >> el;
    while (t--) {
        cin >> test;
        // auto ans = bsearch(v, test);
        auto ans = binary_search(v.begin(), v.end(), test);
        cout << ans << endl;
    }
    return 0;
}