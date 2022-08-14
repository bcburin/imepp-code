#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, *v;
    cin >> n;
    v = new int[n];
    for (int i = 0; i != n; ++i) cin >> v[i];
    sort(v, v + n);
    int num_diff_elements = !!n;
    for (int i = 1; i != n; ++i) {
        if (v[i] != v[i - 1]) ++num_diff_elements;
    }
    cout << num_diff_elements << endl;
    return 0;
}
